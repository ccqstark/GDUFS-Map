/*
 * func: use floyd to find shortest path
 * author: ccq
 * date:2020.6.27
*/
#include "floydsubw.h"

FloydSubw::FloydSubw(QWidget *parent) : QMainWindow(parent)
{

    this->resize(380,250);
    this->setWindowTitle("浏览路线");
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

    //输入框1
    edit1.setParent(this);
    edit1.resize(150,28);
    edit1.move(120,90);
    edit1.show();

    //输入框2
    edit2.setParent(this);
    edit2.resize(150,28);
    edit2.move(120,125);
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
    connect(&returnbt,&QPushButton::clicked,this,&FloydSubw::sentSig);

    //点击确定按钮
    connect(&sure,&QPushButton::clicked,this,&FloydSubw::showResult);
}

void FloydSubw::showResult()
{
    int start_p = edit1.text().toInt();
    int end_p = edit2.text().toInt();
    checkPathSubw.showpath(start_p,end_p);
    checkPathSubw.show();
}

void FloydSubw::sentSig()
{
   //发送信号
   emit returnSig4();
}
