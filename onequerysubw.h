#ifndef ONEQUERY_H
#define ONEQUERY_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <singlepointsubw.h>


class OneQuerySubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit OneQuerySubw(QWidget *parent = nullptr);
    void showResult();


private:
    QLineEdit edit;
    QFont ft;
    QPushButton sure;
    QPushButton returnbt;

    SinglePointSubw singlePointSubw; //显示单景点信息子窗口



signals:
    void returnSig2();

public slots:
    void sentSig();
};

#endif // ONEQUERY_H
