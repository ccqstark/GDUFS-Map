/*
 * func: use dij to find shortest path
 * author: ccq
 * date:2020.6.26
*/
#include "dijsubw.h"

DijSubw::DijSubw(QWidget *parent) : QMainWindow(parent)
{
    this->resize(380,220);
    this->setWindowTitle("浏览路线");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);

    //提示语句
    QLabel *textlabel = new QLabel();
    textlabel->setText("输入起始景点编号");
    ft.setPointSize(15);
    textlabel->setFont(ft);
    textlabel->setGeometry(rect().x()+95,rect().y()+20,300,100);
    textlabel->setParent(this);
    textlabel->show();

    //输入框
    edit.setParent(this);
    edit.resize(150,28);
    edit.move(120,90);
    edit.show();

    //按钮
    sure.setParent(this);
    sure.resize(70,28);
    sure.move(160,125);
    sure.setText("确定");

    returnbt.setParent(this);
    returnbt.resize(100,35);
    returnbt.move(280,185);
    returnbt.setText("返回主菜单");

    //点击按钮发送信号
    connect(&returnbt,&QPushButton::clicked,this,&DijSubw::sentSig);

    //点击确定按钮
    connect(&sure,&QPushButton::clicked,this,&DijSubw::showResult);
}

void DijSubw::showResult()
{
    QString code = edit.text();
    int intcode = code.toInt();
    pathSubw.showpath(intcode);
    pathSubw.show();

}

void DijSubw::sentSig()
{
   //发送信号
   emit returnSig3();
}
