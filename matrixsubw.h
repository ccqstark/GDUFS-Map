#ifndef MATRIXSUBW_H
#define MATRIXSUBW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>


class MatrixSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit MatrixSubw(QWidget *parent = nullptr);

    void show_it();
    void forModifyShow();

private:
    QPushButton sure;
    QLabel *textlabel = new QLabel();


signals:

public slots:
};

#endif // MATRIXSUBW_H
