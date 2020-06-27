#ifndef FLOYDSUBW_H
#define FLOYDSUBW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include "checkpathsubw.h"

class FloydSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit FloydSubw(QWidget *parent = nullptr);
    void showResult();

private:
    QLineEdit edit1;
    QLineEdit edit2;
    QFont ft;
    QPushButton sure;
    QPushButton returnbt;

    CheckPathSubw checkPathSubw;


signals:
    void returnSig4();

public slots:
    void sentSig();

};

#endif // FLOYDSUBW_H
