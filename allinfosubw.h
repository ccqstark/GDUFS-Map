#ifndef ALLINFOSUBW_H
#define ALLINFOSUBW_H

#include <QMainWindow>
#include <QLabel>
#include <string>
#include <QScrollArea>
#include <QScrollBar>
#include <QPushButton>


class AllInfoSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit AllInfoSubw(QWidget *parent = nullptr);

    QPushButton returnbt;

private:
      QFont ft; //字体大小

signals:
    void returnSig1();

public slots:
    void sentSig();

};

#endif // ALLINFOSUBW_H
