#ifndef CANGOSUBW_H
#define CANGOSUBW_H

#include <QMainWindow>
#include <QLabel>
#include <QScrollArea>
#include <QScrollBar>
#include <QPushButton>


#define INF 0x7fffffff

class CanGoSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit CanGoSubw(QWidget *parent = nullptr);
    void makewindow(int start_p,int end_p);
    void allpath(int m,int n,int k);

private:
    QFont ft;
    QScrollArea *scrollarea;
    QWidget *w;
    QLabel *textlabel = new QLabel();


signals:

public slots:
};

#endif // CANGOSUBW_H
