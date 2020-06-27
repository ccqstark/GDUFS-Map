#include "cangosubw.h"
#include <QDebug>
int d[16];
int visited[16];
int vexnum = 15;

CanGoSubw::CanGoSubw(QWidget *parent) : QMainWindow(parent)
{

}

void CanGoSubw::makewindow(int start_p,int end_p)
{

    for(int k=0;k<=16;k++)//重置访问记录
        visited[k]=0;
    visited[start_p]=1;
    d[0] = start_p;

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
    w->setGeometry(0, 0, 600, 2500);//主要是设置长宽，xy意义不大

    QLabel *imagelabel1 = new QLabel(tr(""));
    imagelabel1->setGeometry(rect().x(),rect().y(),800, 380); //label位置
    imagelabel1->setParent(w);
    QImage image1(":/new/images/pointcode.png");
    QPixmap pixmap1(QPixmap::fromImage(image1));
    pixmap1 = pixmap1.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel1->setPixmap(pixmap1);
    imagelabel1->show();


    allpath(start_p,end_p,0);//打印
}

//所有可行路径
void CanGoSubw::allpath(int m,int n,int k)
{
    static QString allqs;
    extern int mapp[16][16];
    //打印小于八个景点的路径  k为经过景点数
    //m,n为两景点编号,k为路径上景点个数
    int s = 1;int x=0;
    int t=k+1;//下一个中间顶点在d[]中的下标
    QString dx;
    if(d[k]==n&&k<8){//到达终点 符合条件打印路径  递归出口
        for(x=0;x<k;x++){
            dx = QString::number(d[x]);
            allqs+=dx;
            allqs+="->";

        }
        QString dx1 = QString::number(d[x]);
        allqs+=dx1;
        allqs+='\n';

        textlabel->setText(allqs);
        ft.setPointSize(13);
        textlabel->setFont(ft);
        textlabel->setAlignment(Qt::AlignTop);
        textlabel->setGeometry(rect().x()+5,rect().y()+390, 700,2500);
        textlabel->setParent(w);
        textlabel->show();
    }

    else{
        while(s<=vexnum){//从0至vexnum寻找未被访问的的d[k]边
            if(mapp[d[k]][s]<INF&&visited[s]==0){//找到节点才进入递归，否则s++
                d[k+1]=s;//访问到的节点加入d数组
                visited[s] = 1;
                allpath(m,n,t);//递归
                visited[s]=0;// 重置该路径的访问记录，寻找新路径
            }
            s++;
        }
    }

}
