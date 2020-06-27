#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include "allinfosubw.h"
#include "onequerysubw.h"
#include "matrixsubw.h"
#include "dijsubw.h"
#include "floydsubw.h"
#include "modifysubw.h"
#include "allpathsubw.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //全景点介绍
    void showAllInfoSubw();
    void showMain1();

    //单景点查询
    void showOneQuerySubw();
    void showMain2();

    //浏览路线（dij）
    void showDijSubw();
    void showMain3();

    //查找最短路径（floyd）
    void showFloydSubw();
    void showMain4();

    //修改矩阵
    void showModifySubw();
    void showMain5();

    //所有可行路径
    void showAllPathSubw();
    void showMain6();

    //输出矩阵
    void showMatrixSubw();



private:
    Ui::MainWindow *ui;

    QLabel *menuImagelabel = new QLabel(tr(""));

    QPushButton browseAllInfo;   //所有景点介绍
    QPushButton pointQuery;      //单景点查询
    QPushButton oneToOtherRoad;  //一景点到其他景点路径
    QPushButton startToEnd;      //起始点到目的地路径
    QPushButton changGraphInfo;  //修改图信息
    QPushButton pathCanGo;       //查找可行路径
    QPushButton OutputMatrix;     //输出邻接矩阵
    QPushButton ExitApp;         //退出

    //子窗口类对象
    AllInfoSubw allInfoSubw;
    OneQuerySubw oneQuerySubw;
    DijSubw dijSubw;
    FloydSubw floydSubw;
    ModifySubw modifySubw;
    AllPathSubw allPathSubw;
    MatrixSubw matrixSubw;


};

#endif // MAINWINDOW_H
