#ifndef PATHSUBW_H
#define PATHSUBW_H

#include <QMainWindow>
#include <QLabel>
#include <string>
#include <QScrollArea>
#include <QScrollBar>
#include <QPushButton>
#include <stack>


#define MAXV 16
#define INF 0x7fffffff
namespace Graph {
    typedef struct
    {
        int edge[MAXV][MAXV];
        int n,e;
    }MGraph;
}


class PathSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit PathSubw(QWidget *parent = nullptr);
    //迪杰斯特拉
    void showpath(int v);
    void dijkstra(Graph::MGraph &GG,int v);
    QString dispath(int path[],int vexnum,int v);

private:
    QFont ft;
    Graph::MGraph GG;
    int dist[MAXV];
    int path[MAXV];
    QScrollArea *scrollarea;
    QWidget *w;
    QLabel *textlabel = new QLabel();

signals:

public slots:
};



#endif // PATHSUBW_H
