#ifndef ALLPATHSUBW_H
#define ALLPATHSUBW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include "cangosubw.h"

class AllPathSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit AllPathSubw(QWidget *parent = nullptr);
    void showResult();

private:
    QLineEdit edit1;
    QLineEdit edit2;
    QFont ft;
    QFont ft2;
    QPushButton sure;
    QPushButton returnbt;

    CanGoSubw canGoSubw;


signals:
    void returnSig6();

public slots:
    void sentSig();


};

#endif // ALLPATHSUBW_H
