#ifndef SINGLEPOINTSUBW_H
#define SINGLEPOINTSUBW_H

#include <QMainWindow>
#include <QScrollArea>
#include <QScrollBar>
#include <QLabel>

class SinglePointSubw : public QMainWindow
{
    Q_OBJECT
public:
    explicit SinglePointSubw(QWidget *parent = nullptr);

    void makeWindow(QString code);

private:
    QWidget *w;
    QFont ft;
    QLabel *textlabel = new QLabel();
    QLabel *imagelabel = new QLabel(tr(""));

signals:

public slots:
};

#endif // SINGLEPOINTSUBW_H
