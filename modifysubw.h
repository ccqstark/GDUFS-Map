#ifndef MODIFYSUBW_H
#define MODIFYSUBW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include "matrixsubw.h"

#define MAXV 16
#define INF 0x7fffffff

class ModifySubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit ModifySubw(QWidget *parent = nullptr);
    void showResult_modify();
    void showResult_delete();

private:
    QLineEdit edit1;
    QLineEdit edit2;
    QLineEdit edit3;
    QFont ft;
    QFont ft2;
    QPushButton modify_it;
    QPushButton delete_it;
    QPushButton returnbt;
    
    MatrixSubw matrixSubw2;


signals:
    void returnSig5();

public slots:
    void sentSig();
};

#endif // MODIFYSUBW_H
