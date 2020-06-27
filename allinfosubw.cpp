/*
 * func: browse all info
 * author: ccq
 * date:2020.6.25
*/
#include "allinfosubw.h"

AllInfoSubw::AllInfoSubw(QWidget *parent) : QMainWindow(parent)
{ 
    this->resize(620,750);
    this->setWindowTitle("全景点介绍");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);

    ft.setPointSize(13);

    //滚动
    QScrollArea *scrollarea = new QScrollArea(this);
    scrollarea->setGeometry(0, 0, 620, 750);  //位置 大小
    scrollarea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    //用于放置内容的widget
    QWidget *w = new QWidget(scrollarea);
    scrollarea->setWidget(w);
    w->setGeometry(0, 0, 800, 6800);//主要是设置长宽，xy意义不大


    //图片+48   文字+402
    //体育场
    QLabel *imagelabel1 = new QLabel(tr(""));
    imagelabel1->setGeometry(rect().x(),rect().y(),800, 400); //label位置
    imagelabel1->setParent(w);
    QImage image1(":/new/images/playground.png");
    QPixmap pixmap1(QPixmap::fromImage(image1));
    pixmap1 = pixmap1.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel1->setPixmap(pixmap1);
    imagelabel1->show();

    QLabel *textlabel1 = new QLabel();
    textlabel1->setText("体育场：学生进行体育锻炼的场地，配备完备的设施");
    textlabel1->setFont(ft);
    textlabel1->setGeometry(rect().x(),rect().y()+402,500,20);
    textlabel1->setParent(w);
    textlabel1->show();


    //大会堂
    QLabel *imagelabel2 = new QLabel(tr(""));
    imagelabel2->setGeometry(rect().x(),rect().y()+450,800, 400); //label位置
    imagelabel2->setParent(w);
    QImage image2(":/new/images/meetinghall.png");
    QPixmap pixmap2(QPixmap::fromImage(image2));
    pixmap2 = pixmap2.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel2->setPixmap(pixmap2);
    imagelabel2->show();

    QLabel *textlabel2 = new QLabel();
    textlabel2->setText("大会堂：进行讲座或重要会议的场所");
    textlabel2->setFont(ft);
    textlabel2->setGeometry(rect().x(),rect().y()+852,500,20);
    textlabel2->setParent(w);
    textlabel2->show();


    //图书馆
    QLabel *imagelabel3 = new QLabel(tr(""));
    imagelabel3->setGeometry(rect().x(),rect().y()+900,800, 400); //label位置
    imagelabel3->setParent(w);
    QImage image3(":/new/images/library.png");
    QPixmap pixmap3(QPixmap::fromImage(image3));
    pixmap3 = pixmap3.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel3->setPixmap(pixmap3);
    imagelabel3->show();

    QLabel *textlabel3 = new QLabel();
    textlabel3->setText("图书馆：学习的地方啦");
    textlabel3->setFont(ft);
    textlabel3->setGeometry(rect().x(),rect().y()+1302,500,20);
    textlabel3->setParent(w);
    textlabel3->show();



    //学术报告厅
    QLabel *imagelabel4 = new QLabel(tr(""));
    imagelabel4->setGeometry(rect().x(),rect().y()+1350,800, 400); //label位置
    imagelabel4->setParent(w);
    QImage image4(":/new/images/lecturehall.png");
    QPixmap pixmap4(QPixmap::fromImage(image4));
    pixmap4 = pixmap4.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel4->setPixmap(pixmap4);
    imagelabel4->show();

    QLabel *textlabel4 = new QLabel();
    textlabel4->setText("学术报告厅：一般用来举办校内外学者的报告会议");
    textlabel4->setFont(ft);
    textlabel4->setGeometry(rect().x(),rect().y()+1752,500,20);
    textlabel4->setParent(w);
    textlabel4->show();


    //实验楼
    QLabel *imagelabel5 = new QLabel(tr(""));
    imagelabel5->setGeometry(rect().x(),rect().y()+1800,800, 400); //label位置
    imagelabel5->setParent(w);
    QImage image5(":/new/images/lab.png");
    QPixmap pixmap5(QPixmap::fromImage(image5));
    pixmap5 = pixmap5.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel5->setPixmap(pixmap5);
    imagelabel5->show();

    QLabel *textlabel5 = new QLabel();
    textlabel5->setText("实验楼：各大实验室所在地，上学生需要用到电脑的课的地方");
    textlabel5->setFont(ft);
    textlabel5->setGeometry(rect().x(),rect().y()+2202,600,20);
    textlabel5->setParent(w);
    textlabel5->show();



    //办公楼
    QLabel *imagelabel6 = new QLabel(tr(""));
    imagelabel6->setGeometry(rect().x(),rect().y()+2250,800, 400); //label位置
    imagelabel6->setParent(w);
    QImage image6(":/new/images/office.png");
    QPixmap pixmap6(QPixmap::fromImage(image6));
    pixmap6 = pixmap6.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel6->setPixmap(pixmap6);
    imagelabel6->show();

    QLabel *textlabel6 = new QLabel();
    textlabel6->setText("办公楼：包括校办公楼、院系办公楼");
    textlabel6->setFont(ft);
    textlabel6->setGeometry(rect().x(),rect().y()+2652,600,20);
    textlabel6->setParent(w);
    textlabel6->show();



    //八角楼
    QLabel *imagelabel7 = new QLabel(tr(""));
    imagelabel7->setGeometry(rect().x(),rect().y()+2700,800, 400); //label位置
    imagelabel7->setParent(w);
    QImage image7(":/new/images/eight.png");
    QPixmap pixmap7(QPixmap::fromImage(image7));
    pixmap7 = pixmap7.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel7->setPixmap(pixmap7);
    imagelabel7->show();

    QLabel *textlabel7 = new QLabel();
    textlabel7->setText("八角楼：顾名思义，有八个角的楼，举办报告、分享会的场地");
    textlabel7->setFont(ft);
    textlabel7->setGeometry(rect().x(),rect().y()+3102,1000,20);
    textlabel7->setParent(w);
    textlabel7->show();


    //教学楼
    QLabel *imagelabel8 = new QLabel(tr(""));
    imagelabel8->setGeometry(rect().x(),rect().y()+3150,800, 400); //label位置
    imagelabel8->setParent(w);
    QImage image8(":/new/images/teach.png");
    QPixmap pixmap8(QPixmap::fromImage(image8));
    pixmap8 = pixmap8.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel8->setPixmap(pixmap8);
    imagelabel8->show();

    QLabel *textlabel8 = new QLabel();
    textlabel8->setText("教学楼：众所周知，有ABCDEFGHIJKLMNOPQRS..栋(大雾)");
    textlabel8->setFont(ft);
    textlabel8->setGeometry(rect().x(),rect().y()+3552,1000,20);
    textlabel8->setParent(w);
    textlabel8->show();


    //第一饭堂
    QLabel *imagelabel9 = new QLabel(tr(""));
    imagelabel9->setGeometry(rect().x(),rect().y()+3600,800, 400); //label位置
    imagelabel9->setParent(w);
    QImage image9(":/new/images/canteen1.png");
    QPixmap pixmap9(QPixmap::fromImage(image9));
    pixmap9 = pixmap9.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel9->setPixmap(pixmap9);
    imagelabel9->show();

    QLabel *textlabel9 = new QLabel();
    textlabel9->setText("第一饭堂：楼下早餐包好评，湖南人家进驻好评，二楼牛排烤鱼好评");
    textlabel9->setFont(ft);
    textlabel9->setGeometry(rect().x(),rect().y()+4002,1000,20);
    textlabel9->setParent(w);
    textlabel9->show();


    //第二饭堂
    QLabel *imagelabel10 = new QLabel(tr(""));
    imagelabel10->setGeometry(rect().x(),rect().y()+4050,800, 400); //label位置
    imagelabel10->setParent(w);
    QImage image10(":/new/images/canteen2.png");
    QPixmap pixmap10(QPixmap::fromImage(image10));
    pixmap10 = pixmap10.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel10->setPixmap(pixmap10);
    imagelabel10->show();

    QLabel *textlabel10 = new QLabel();
    textlabel10->setText("第二饭堂：肠粉、麻辣烫、馄饨、咖喱饭、中华小炒、螺狮粉…");
    textlabel10->setFont(ft);
    textlabel10->setGeometry(rect().x(),rect().y()+4452,1000,20);
    textlabel10->setParent(w);
    textlabel10->show();



    //门诊楼
    QLabel *imagelabel11 = new QLabel(tr(""));
    imagelabel11->setGeometry(rect().x(),rect().y()+4500,800, 400); //label位置
    imagelabel11->setParent(w);
    QImage image11(":/new/images/hospital.png");
    QPixmap pixmap11(QPixmap::fromImage(image11));
    pixmap11 = pixmap11.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel11->setPixmap(pixmap11);
    imagelabel11->show();

    QLabel *textlabel11 = new QLabel();
    textlabel11->setText("门诊楼：校医，体检看病必备，相当于一座小医院了，疫情期间也发挥了重要作用");
    textlabel11->setFont(ft);
    textlabel11->setGeometry(rect().x(),rect().y()+4902,1000,20);
    textlabel11->setParent(w);
    textlabel11->show();


    //隧道口
    QLabel *imagelabel12 = new QLabel(tr(""));
    imagelabel12->setGeometry(rect().x(),rect().y()+4950,800, 400); //label位置
    imagelabel12->setParent(w);
    QImage image12(":/new/images/tunnel.png");
    QPixmap pixmap12(QPixmap::fromImage(image12));
    pixmap12 = pixmap12.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel12->setPixmap(pixmap12);
    imagelabel12->show();

    QLabel *textlabel12 = new QLabel();
    textlabel12->setText("隧道口：生活区与教学区的必经之路（其实可以绕到上面马路）");
    textlabel12->setFont(ft);
    textlabel12->setGeometry(rect().x(),rect().y()+5352,1000,20);
    textlabel12->setParent(w);
    textlabel12->show();


    //又康超市
    QLabel *imagelabel13 = new QLabel(tr(""));
    imagelabel13->setGeometry(rect().x(),rect().y()+5400,800, 400); //label位置
    imagelabel13->setParent(w);
    QImage image13(":/new/images/supermarket.png");
    QPixmap pixmap13(QPixmap::fromImage(image13));
    pixmap13 = pixmap13.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel13->setPixmap(pixmap13);
    imagelabel13->show();

    QLabel *textlabel13 = new QLabel();
    textlabel13->setText("又康超市：南校第一批发市场，物美价廉(我没恰饭)");
    textlabel13->setFont(ft);
    textlabel13->setGeometry(rect().x(),rect().y()+5802,1000,20);
    textlabel13->setParent(w);
    textlabel13->show();


    //宿舍
    QLabel *imagelabel14 = new QLabel(tr(""));
    imagelabel14->setGeometry(rect().x(),rect().y()+5850,800, 400); //label位置
    imagelabel14->setParent(w);
    QImage image14(":/new/images/dorm.png");
    QPixmap pixmap14(QPixmap::fromImage(image14));
    pixmap14 = pixmap14.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel14->setPixmap(pixmap14);
    imagelabel14->show();

    QLabel *textlabel14 = new QLabel();
    textlabel14->setText("宿舍：这个8用多说了吧，懂的都懂");
    textlabel14->setFont(ft);
    textlabel14->setGeometry(rect().x(),rect().y()+6252,1000,20);
    textlabel14->setParent(w);
    textlabel14->show();


    //gogo新天地
    QLabel *imagelabel15 = new QLabel(tr(""));
    imagelabel15->setGeometry(rect().x(),rect().y()+6300,800, 400); //label位置
    imagelabel15->setParent(w);
    QImage image15(":/new/images/gogo.png");
    QPixmap pixmap15(QPixmap::fromImage(image15));
    pixmap15 = pixmap15.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    imagelabel15->setPixmap(pixmap15);
    imagelabel15->show();

    QLabel *textlabel15 = new QLabel();
    textlabel15->setText("GoGo新天地：与贝岗一起并称南校夜生活两巨头");
    textlabel15->setFont(ft);
    textlabel15->setGeometry(rect().x(),rect().y()+6702,1000,20);
    textlabel15->setParent(w);
    textlabel15->show();


    returnbt.setParent(w);
    returnbt.resize(100,50);
    returnbt.setText("返回主菜单");
    returnbt.move(495,6720);

    //点击按钮发送信号
    connect(&returnbt,&QPushButton::clicked,this,&AllInfoSubw::sentSig);

}



void AllInfoSubw::sentSig()
{
   //发送信号
   emit returnSig1();
}


