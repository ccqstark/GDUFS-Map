/*
 * func: path from one point (result)
 * author: ccq
 * date:2020.6.26
*/
#include "pathsubw.h"

PathSubw::PathSubw(QWidget *parent) : QMainWindow(parent)
{
    this->resize(550,700);
    this->setWindowTitle("查询到的路径");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);

    ft.setPointSize(13);

    //滚动
    scrollarea = new QScrollArea(this);
    scrollarea->setGeometry(0, 0, 550, 700);  //位置 大小
    scrollarea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    //用于放置内容的widget
    w = new QWidget(scrollarea);
    scrollarea->setWidget(w);
    w->setGeometry(0, 0, 600, 1200);//主要是设置长宽，xy意义不大


}


void PathSubw::showpath(int v)
{
    extern int mapp[16][16];
    GG.n = 15;
    GG.e = 48;

    for (int i = 0; i <= 15; ++i) {
        for (int j = 0; j <= 15; ++j) {
            GG.edge[i][j] = mapp[i][j];
        }
    }

    dijkstra(GG,v);
    QString qs = dispath(path,15,v);

    QLabel *imagelabel1 = new QLabel(tr(""));
    imagelabel1->setGeometry(rect().x(),rect().y(),800, 400); //label位置
    imagelabel1->setParent(w);
    QImage image1(":/new/images/pointcode.png");
    QPixmap pixmap1(QPixmap::fromImage(image1));
    pixmap1 = pixmap1.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel1->setPixmap(pixmap1);
    imagelabel1->show();

    textlabel->setText(qs);
    textlabel->setFont(ft);
    textlabel->setGeometry(rect().x()+5,rect().y()+265,700,1000);
    textlabel->setParent(w);
    textlabel->show();


}

//迪杰斯特拉
void PathSubw::dijkstra(Graph::MGraph &GG,int v)
{
    int s[MAXV];
    int mindis,u;

    for (int i = 1; i<=GG.n; i++){  //初始化
        dist[i] = GG.edge[v][i];
        s[i] = 0;  //初始化为右点集
        if(GG.edge[v][i]<INF) path[i] = v; //有路径，以前一个点记录
        else path[i] = -1; //暂时没前一个点（没路径）
    }
    s[v] = 1; //源点标记左集

    for (int i = 1; i <= GG.n; i++)
    {
        mindis = INF;
        for (int j = 1; j <= GG.n; j++)
        {
            if(!s[j] && dist[j]<mindis) //找到最小路径
            {
                u = j; //记录最小路径的点
                mindis = dist[j]; //记录最小路径（源点到右点集的某一点）
            }
        }
        s[u] = 1; //新加入左点集

        for (int j = 1; j <= GG.n; j++)
        {
            if (s[j]==0)
            {    //新加入的点到右点集的距离加上新点到源点的距离，如果小于目前右点到源点的距离
                //就更新距离和路径  （也就是新点加入后要刷新一些数据）
                if(GG.edge[u][j]<INF && dist[u]+GG.edge[u][j]<dist[j])
                {
                    dist[j]=dist[u]+GG.edge[u][j]; //刷新距离
                    path[j]=u; //刷新路径（前一点）
                } //一旦点加入左集，就无法修正刷新了
            }
        }
    }
}


QString PathSubw::dispath(int path[],int vexnum,int v)
{
    QString pathqstring;
    std::stack<int> pathstack;
    for (int i = 1; i <= vexnum; i++)
    {
        int now = i;
        if (path[now]!=-1) {
            if (now != v) {
                pathstack.push(now);
                while (path[now] != v) {
                    pathstack.push(path[now]);
                    now = path[now];
                }
                QString vqstring = QString::number(v);
                pathqstring.append(vqstring);
                while (!pathstack.empty()) {
                    int top = pathstack.top();
                    pathstack.pop();
                    QString topqstring = QString::number(top);
                    pathqstring.append("->");
                    pathqstring.append(topqstring);
                }
                QString disqs = QString::number(dist[i]);
                pathqstring.append("   全长：");
                pathqstring.append(disqs);
                pathqstring.append('\n');
                pathqstring.append('\n');
            }
        }
    }

    return pathqstring;
}
