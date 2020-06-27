#include "allpathsubw.h"

AllPathSubw::AllPathSubw(QWidget *parent) : QMainWindow(parent)
{
    this->resize(380,250);
    this->setWindowTitle("所有可行路线");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);


    //提示语句
    QLabel *textlabel = new QLabel();
    textlabel->setText("输入起点、终点编号");
    ft.setPointSize(15);
    textlabel->setFont(ft);
    textlabel->setGeometry(rect().x()+85,rect().y()+20,300,100);
    textlabel->setParent(this);
    textlabel->show();

    ft2.setPointSize(12);
    //起点 提示语
    QLabel *textlabel_start = new QLabel();
    textlabel_start->setText("起点:");
    textlabel_start->setFont(ft2);
    textlabel_start->setGeometry(rect().x()+103,rect().y()+92,50,20);
    textlabel_start->setParent(this);
    textlabel_start->show();

    //终点  提示语
    QLabel *textlabel_end = new QLabel();
    textlabel_end->setText("终点:");
    textlabel_end->setFont(ft2);
    textlabel_end->setGeometry(rect().x()+103,rect().y()+127,50,20);
    textlabel_end->setParent(this);
    textlabel_end->show();

    //输入框1
    edit1.setParent(this);
    edit1.resize(150,28);
    edit1.move(155,90);
    edit1.show();

    //输入框2
    edit2.setParent(this);
    edit2.resize(150,28);
    edit2.move(155,125);
    edit2.show();

    //按钮
    sure.setParent(this);
    sure.resize(70,28);
    sure.move(160,165);
    sure.setText("确定");

    returnbt.setParent(this);
    returnbt.resize(100,35);
    returnbt.move(280,215);
    returnbt.setText("返回主菜单");

    //点击按钮发送信号
    connect(&returnbt,&QPushButton::clicked,this,&AllPathSubw::sentSig);

    //点击确定按钮
    connect(&sure,&QPushButton::clicked,this,&AllPathSubw::showResult);
}

void AllPathSubw::showResult()
{
    int start_p = edit1.text().toInt();
    int end_p = edit2.text().toInt();
    canGoSubw.makewindow(start_p,end_p);
    canGoSubw.show();

}

void AllPathSubw::sentSig()
{
   //发送信号
   emit returnSig6();
}
