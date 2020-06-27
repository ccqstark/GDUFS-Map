/*
 * func: use floyd to find shortest path (result)
 * author: ccq
 * date:2020.6.27
*/
#include "checkpathsubw.h"

CheckPathSubw::CheckPathSubw(QWidget *parent) : QMainWindow(parent)
{
    this->resize(550,500);
    this->setWindowTitle("路径结果");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);

    ft.setPointSize(13);

    //滚动
    scrollarea = new QScrollArea(this);
    scrollarea->setGeometry(0, 0, 550, 500);  //位置 大小
    scrollarea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    //用于放置内容的widget
    w = new QWidget(scrollarea);
    scrollarea->setWidget(w);
    w->setGeometry(0, 0, 600, 600);//主要是设置长宽，xy意义不大

    extern int mapp[16][16];
    GG.n = 15;

    for (int i = 0; i <= 15; ++i) {
        for (int j = 0; j <= 15; ++j) {
            GG.edge[i][j] = mapp[i][j];
        }
    }

    floyd(GG);

}

void CheckPathSubw::showpath(int start_p,int end_p)
{
    QString pathqs = checkpath_floyd(start_p,end_p);

    QLabel *imagelabel1 = new QLabel(tr(""));
    imagelabel1->setGeometry(rect().x(),rect().y(),800, 400); //label位置
    imagelabel1->setParent(w);
    QImage image1(":/new/images/pointcode.png");
    QPixmap pixmap1(QPixmap::fromImage(image1));
    pixmap1 = pixmap1.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel1->setPixmap(pixmap1);
    imagelabel1->show();

    textlabel->setText(pathqs);
    textlabel->setFont(ft);
    textlabel->setGeometry(rect().x()+5,rect().y()+270,700,300);
    textlabel->setParent(w);
    textlabel->show();

}

//弗洛伊德算法
void CheckPathSubw::floyd(Graph2::MGraph GG)
{
    for (int i = 0; i <= GG.n; i++) //初始化
       {
           for (int j = 0; j <= GG.n; j++)
           {
               A[i][j]=GG.edge[i][j];
               if(i!=j && GG.edge[i][j]<INF) path2[i][j] = i; //ij有边赋为i
               else path2[i][j] = -1;  //无边赋为-1
           }
       }

       //三重循环 O(n^3)
       for (int k = 1; k <= GG.n; k++) //循环每一个点让它来当中转点
       {
           for (int i = 1; i <= GG.n; i++) //下面这个双重循环是对每一条路径进行遍历
           {
               for (int j = 1; j <= GG.n; j++)
               {
                   if (A[i][k] != INF && A[k][j] != INF && A[i][j]>A[i][k]+A[k][j]) //如果经历了这个中转点比不经过更短
                   {
                       A[i][j] = A[i][k]+A[k][j]; //修改距离
                       path2[i][j] = path2[k][j]; //修改路径，为i到j经过k的j前一位的一个中转点，也就是path[k][j]
                       //kj也不一定是直达的，所以用path[k][j],如果直达也是得到k
                   }
               }
           }
       }
}


QString CheckPathSubw::checkpath_floyd(int start_p, int end_p)
{
    QString qs;
    std::stack<int> pathstack;
    int start_o = start_p;
    int end_o = end_p;
    pathstack.push(end_p);
    while (path2[start_p][end_p] != start_p)
    {
       pathstack.push(path2[start_p][end_p]);
       end_p = path2[start_p][end_p];
    }
    QString qst = QString::number(start_o);
    qs.append(qst);

    while (!pathstack.empty())
    {
       int point = pathstack.top();
       qs.append("->");
       QString qspoint = QString::number(point);
       qs.append(qspoint);
       pathstack.pop();
    }
    qs.append("    距离: ");
    QString aa = QString::number(A[start_o][end_o]);
    qs.append(aa);

    return qs;
}

