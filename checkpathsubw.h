#ifndef CHECKPATHSUBW_H
#define CHECKPATHSUBW_H

#include <QMainWindow>
#include <QLabel>
#include <string>
#include <QScrollArea>
#include <QScrollBar>
#include <QPushButton>
#include <stack>
#define MAXV 16
#define INF 0x7fffffff

namespace Graph2 {
    typedef struct
    {
        int edge[MAXV][MAXV];
        int n,e;
    }MGraph;
}


class CheckPathSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit CheckPathSubw(QWidget *parent = nullptr);
    void showpath(int start_p, int end_p);
    void floyd(Graph2::MGraph GG);
    QString checkpath_floyd(int start_p, int end_p);

private:
    QFont ft;
    Graph2::MGraph GG;
    int A[MAXV][MAXV]; //距离数组
    int path2[MAXV][MAXV]; //路径数组
    QScrollArea *scrollarea;
    QWidget *w;
    QLabel *textlabel = new QLabel();


signals:

public slots:
};

#endif // CHECKPATHSUBW_H
