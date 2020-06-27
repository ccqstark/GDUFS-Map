#ifndef DIJSUBW_H
#define DIJSUBW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include "pathsubw.h"

class DijSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit DijSubw(QWidget *parent = nullptr);
    void showResult();

private:
    QLineEdit edit;
    QFont ft;
    QPushButton sure;
    QPushButton returnbt;

    PathSubw pathSubw;


signals:
    void returnSig3();

public slots:
    void sentSig();

};

#endif // DIJSUBW_H
