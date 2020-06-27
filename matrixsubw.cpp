/*
 * func: output matrix
 * author: ccq
 * date:2020.6.26
*/
#include "matrixsubw.h"
#define INF 0x7fffffff

MatrixSubw::MatrixSubw(QWidget *parent) : QMainWindow(parent)
{
    extern int mapp[16][16];
    QString matrix;

    for (int i = 1; i <= 15; ++i) {
          for (int j = 1; j <= 15; ++j) {
              if (mapp[i][j]==INF) matrix.append("INF  ");
              else {
                  QString num = QString::number(mapp[i][j]);
                  matrix.append(num);
                  matrix.append("  ");
              }
          }
          matrix.append('\n');
      }


    this->resize(600,400);
    this->setWindowTitle("邻接矩阵");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);

    QLabel *textlabel = new QLabel();
    textlabel->setText(matrix);
    textlabel->setGeometry(rect().x(),rect().y(),600,400);
    textlabel->setParent(this);
    textlabel->show();

    sure.setParent(this);
    sure.resize(70,40);
    sure.move(260,340);
    sure.setText("确定");

    connect(&sure,&QPushButton::clicked,this,&MatrixSubw::close);


}
