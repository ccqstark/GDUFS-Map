/*
 * func: main windows
 * author: ccq
 * date:2020.6.25
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
//    ui->setupUi(this);

    this->resize(1100,770);
    this->setWindowTitle("GDUFS南校地图导游系统");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);


    //QLabel显示图片
    menuImagelabel->setGeometry(rect().x()+170,rect().y(),1344, 460); //label位置、大小
    menuImagelabel->setParent(this);

    QImage menuImage(":/new/images/bigmap.png"); //加载图片
    QPixmap pixmap(QPixmap::fromImage(menuImage)); //将QImage转换为QPixmap
    pixmap = pixmap.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    menuImagelabel->setPixmap(pixmap);   //把pixmap添加到label上
    menuImagelabel->show();


    //按钮
    //原定位
    browseAllInfo.setText("全景点介绍");
    browseAllInfo.resize(175,50);  //大小固定
    browseAllInfo.move(320,450);   //左右差335，上下差68
    browseAllInfo.setParent(this);

    //右定位
    pointQuery.setText("单景点查询");
    pointQuery.resize(175,50);
    pointQuery.move(595,450);
    pointQuery.setParent(this);

    //下定位
    oneToOtherRoad.setText("浏览线路");
    oneToOtherRoad.resize(175,50);
    oneToOtherRoad.move(320,518);
    oneToOtherRoad.setParent(this);

    startToEnd.setText("查找最短路径");
    startToEnd.resize(175,50);
    startToEnd.move(595,518);
    startToEnd.setParent(this);

    //下4个
    changGraphInfo.setText("修改图信息");
    changGraphInfo.resize(175,50);
    changGraphInfo.move(320,586);
    changGraphInfo.setParent(this);

    pathCanGo.setText("可行路径");
    pathCanGo.resize(175,50);
    pathCanGo.move(595,586);
    pathCanGo.setParent(this);

    OutputMatrix.setText("邻接矩阵");
    OutputMatrix.resize(175,50);
    OutputMatrix.move(320,654);
    OutputMatrix.setParent(this);


    ExitApp.setText("退出");
    ExitApp.resize(175,50);
    ExitApp.move(595,654);
    ExitApp.setParent(this);


    //全景点介绍
    connect(&browseAllInfo,&QPushButton::clicked,this,&MainWindow::showAllInfoSubw);
    //接收subWindow发来的信号，执行返回主窗口
    connect(&allInfoSubw,&AllInfoSubw::returnSig1,this,&MainWindow::showMain1);

    //单景点查询
    connect(&pointQuery,&QPushButton::clicked,this,&MainWindow::showOneQuerySubw);
    //接收subWindow发来的信号，执行返回主窗口
    connect(&oneQuerySubw,&OneQuerySubw::returnSig2,this,&MainWindow::showMain2);

    //浏览路线
    connect(&oneToOtherRoad,&QPushButton::clicked,this,&MainWindow::showDijSubw);
    //接收subWindow发来的信号，执行返回主窗口
    connect(&dijSubw,&DijSubw::returnSig3,this,&MainWindow::showMain3);

    //查找最短路径
    connect(&startToEnd,&QPushButton::clicked,this,&MainWindow::showFloydSubw);
    //接收subWindow发来的信号，执行返回主窗口
    connect(&floydSubw,&FloydSubw::returnSig4,this,&MainWindow::showMain4);

    //修改矩阵
    connect(&changGraphInfo,&QPushButton::clicked,this,&MainWindow::showModifySubw);
    connect(&modifySubw,&ModifySubw::returnSig5,this,&MainWindow::showMain5);




    //邻接矩阵
    connect(&OutputMatrix,&QPushButton::clicked,this,&MainWindow::showMatrixSubw);
    //退出
    connect(&ExitApp,&QPushButton::clicked,this,&MainWindow::close);




}

//全景点介绍
void MainWindow::showAllInfoSubw()
{
    this->hide();
    allInfoSubw.show();
}
void MainWindow::showMain1()
{
    allInfoSubw.close();
    this->show();
}
//单景点查询
void MainWindow::showOneQuerySubw()
{
    this->hide();
    oneQuerySubw.show();
}
void MainWindow::showMain2()
{
    oneQuerySubw.close();
    this->show();
}
//浏览路线
void MainWindow::showDijSubw()
{
    this->hide();
    dijSubw.show();
}
void MainWindow::showMain3()
{
    dijSubw.close();
    this->show();
}
//查找最短路径
void MainWindow::showFloydSubw()
{
    this->hide();
    floydSubw.show();
}
void MainWindow::showMain4()
{
    floydSubw.close();
    this->show();
}
//修改图的信息
void MainWindow::showModifySubw()
{
    this->hide();
    modifySubw.show();
}
void MainWindow::showMain5()
{
    modifySubw.close();
    this->show();
}




//矩阵
void MainWindow::showMatrixSubw()
{
   matrixSubw.show_it();
   matrixSubw.show();
}



MainWindow::~MainWindow()
{
    delete ui;
}
