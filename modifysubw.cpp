/*
 * func: modify matrix
 * author: ccq
 * date:2020.6.27
*/

#include "modifysubw.h"

ModifySubw::ModifySubw(QWidget *parent) : QMainWindow(parent)
{
    this->resize(420,300);
    this->setWindowTitle("修改图信息");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);

    //提示语句
    QLabel *textlabel = new QLabel();
    textlabel->setText("输入要修改的信息");
    ft.setPointSize(15);
    textlabel->setFont(ft);
    textlabel->setGeometry(rect().x()+115,rect().y()+20,300,100);
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

    //边值  提示语
    QLabel *textlabel_edge = new QLabel();
    textlabel_edge->setText("边值:");
    textlabel_edge->setFont(ft2);
    textlabel_edge->setGeometry(rect().x()+103,rect().y()+162,50,20);
    textlabel_edge->setParent(this);
    textlabel_edge->show();


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

    //输入框3
    edit3.setParent(this);
    edit3.resize(150,28);
    edit3.move(155,160);
    edit3.show();

    //删除按钮
    delete_it.setParent(this);
    delete_it.resize(80,35);
    delete_it.move(137,210);
    delete_it.setText("删除");

    //修改按钮
    modify_it.setParent(this);
    modify_it.resize(80,35);
    modify_it.move(237,210);
    modify_it.setText("更新");

    //返回按钮
    returnbt.setParent(this);
    returnbt.resize(100,35);
    returnbt.move(321,265);
    returnbt.setText("返回主菜单");

    //点击按钮发送信号
    connect(&returnbt,&QPushButton::clicked,this,&ModifySubw::sentSig);

    //点击修改按钮
    connect(&modify_it,&QPushButton::clicked,this,&ModifySubw::showResult_modify);

    //点击删除按钮
    connect(&delete_it,&QPushButton::clicked,this,&ModifySubw::showResult_delete);
}

void ModifySubw::showResult_modify()
{
    int start_P = edit1.text().toInt();
    int end_p = edit2.text().toInt();
    int edge_v = edit3.text().toInt();
    extern int mapp[16][16];
    mapp[start_P][end_p] = edge_v;

    matrixSubw2.forModifyShow();
    matrixSubw2.show();
}


void ModifySubw::showResult_delete()
{
    int start_P = edit1.text().toInt();
    int end_p = edit2.text().toInt();

    extern int mapp[16][16];
    mapp[start_P][end_p] = INF;

    matrixSubw2.forModifyShow();
    matrixSubw2.show();
}

void ModifySubw::sentSig()
{
   //发送信号
   emit returnSig5();
}




