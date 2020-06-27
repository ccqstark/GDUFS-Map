/*
 * func: query one point (result)
 * author: ccq
 * date:2020.6.26
*/
#include "singlepointsubw.h"

SinglePointSubw::SinglePointSubw(QWidget *parent) : QMainWindow(parent)
{
    this->resize(620,450);
    this->setWindowTitle("查询结果");
    QIcon windowIcon(":/new/images/icon.png");
    this->setWindowIcon(windowIcon);

    ft.setPointSize(13);

    //滚动
    QScrollArea *scrollarea = new QScrollArea(this);
    scrollarea->setGeometry(0, 0, 620, 450);  //位置 大小

    //用于放置内容的widget
    w = new QWidget(scrollarea);
    scrollarea->setWidget(w);
    w->setGeometry(0, 0, 800, 450);//主要是设置长宽，xy意义不大

}

void SinglePointSubw::makeWindow(QString code)
{
    int intcode = code.toInt();

    imagelabel->setGeometry(rect().x(),rect().y(),800, 400); //label位置
    imagelabel->setParent(w);

    textlabel->setFont(ft);
    textlabel->setGeometry(rect().x(),rect().y()+402,1000,20);
    textlabel->setParent(w);
    textlabel->show();
    this->resize(620,450);

    if(intcode == 1){
        //体育场
        QImage image1(":/new/images/playground.png");
        QPixmap pixmap1(QPixmap::fromImage(image1));
        pixmap1 = pixmap1.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap1);
        imagelabel->show();

        textlabel->setText("体育场：学生进行体育锻炼的场地，配备完备的设施");

    }


	else if (intcode == 2)
	{
        //大会堂
        QImage image2(":/new/images/meetinghall.png");
        QPixmap pixmap2(QPixmap::fromImage(image2));
        pixmap2 = pixmap2.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap2);
        imagelabel->show();

        textlabel->setText("大会堂：进行讲座或重要会议的场所");
        
    }

    else if (intcode == 3)
    {
        //图书馆
        QImage image3(":/new/images/library.png");
        QPixmap pixmap3(QPixmap::fromImage(image3));
        pixmap3 = pixmap3.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap3);
        imagelabel->show();

        textlabel->setText("图书馆：学习的地方啦");
        
    }


    else if (intcode == 4)
    {
        //学术报告厅
        QImage image4(":/new/images/lecturehall.png");
        QPixmap pixmap4(QPixmap::fromImage(image4));
        pixmap4 = pixmap4.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap4);
        imagelabel->show();

        textlabel->setText("学术报告厅：一般用来举办校内外学者的报告会议");
        
    }

    else if (intcode == 5)
    {
        //实验楼
        QImage image5(":/new/images/lab.png");
        QPixmap pixmap5(QPixmap::fromImage(image5));
        pixmap5 = pixmap5.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap5);
        imagelabel->show();

        textlabel->setText("实验楼：各大实验室所在地，上学生需要用到电脑的课的地方");

	}


    else if (intcode == 6)
    {
        //办公楼
        QImage image6(":/new/images/office.png");
        QPixmap pixmap6(QPixmap::fromImage(image6));
        pixmap6 = pixmap6.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap6);
        imagelabel->show();

        textlabel->setText("办公楼：包括校办公楼、院系办公楼");

    }


    else if (intcode == 7)
    {
        //八角楼
        QImage image7(":/new/images/eight.png");
        QPixmap pixmap7(QPixmap::fromImage(image7));
        pixmap7 = pixmap7.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap7);
        imagelabel->show();

        textlabel->setText("八角楼：顾名思义，有八个角的楼，举办报告、分享会的场地");

        
    }

    else if (intcode == 8)
    {
        //教学楼
        QImage image8(":/new/images/teach.png");
        QPixmap pixmap8(QPixmap::fromImage(image8));
        pixmap8 = pixmap8.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap8);
        imagelabel->show();

        textlabel->setText("教学楼：众所周知，有ABCDEFGHIJKLMNOPQRS..栋(大雾)");

    }

    else if (intcode == 9)
	{
        //第一饭堂
        QImage image9(":/new/images/canteen1.png");
        QPixmap pixmap9(QPixmap::fromImage(image9));
        pixmap9 = pixmap9.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap9);
        imagelabel->show();

        textlabel->setText("第一饭堂：楼下早餐包好评，湖南人家进驻好评，二楼牛排烤鱼好评");

    }

    else if (intcode == 10)
    {
        //第二饭堂
        QImage image10(":/new/images/canteen2.png");
        QPixmap pixmap10(QPixmap::fromImage(image10));
        pixmap10 = pixmap10.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap10);
        imagelabel->show();

        textlabel->setText("第二饭堂：肠粉、麻辣烫、馄饨、咖喱饭、中华小炒、螺狮粉…");

	}

    else if (intcode == 11)
    {
        //门诊楼
        QImage image11(":/new/images/hospital.png");
        QPixmap pixmap11(QPixmap::fromImage(image11));
        pixmap11 = pixmap11.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap11);
        imagelabel->show();

        textlabel->setText("门诊楼：校医，体检看病必备，相当于一座小医院了，疫情期间也发挥了重要作用");
    }

    else if (intcode == 12)
    {

        //隧道口
        QImage image12(":/new/images/tunnel.png");
        QPixmap pixmap12(QPixmap::fromImage(image12));
        pixmap12 = pixmap12.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap12);
        imagelabel->show();

        textlabel->setText("隧道口：生活区与教学区的必经之路（其实可以绕到上面马路）");

    }

    else if (intcode == 13)
    {
        //又康超市
        QImage image13(":/new/images/supermarket.png");
        QPixmap pixmap13(QPixmap::fromImage(image13));
        pixmap13 = pixmap13.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap13);
        imagelabel->show();

        textlabel->setText("又康超市：南校第一批发市场，物美价廉(我没恰饭)");

    }


    else if (intcode == 14)
    {
        //宿舍
        QImage image14(":/new/images/dorm.png");
        QPixmap pixmap14(QPixmap::fromImage(image14));
        pixmap14 = pixmap14.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap14);
        imagelabel->show();

        textlabel->setText("宿舍：这个8用多说了吧，懂的都懂");

    }


    else if (intcode == 15)
    {
        //gogo新天地
        QImage image15(":/new/images/gogo.png");
        QPixmap pixmap15(QPixmap::fromImage(image15));
        pixmap15 = pixmap15.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap15);
        imagelabel->show();

        textlabel->setText("GoGo新天地：与贝岗一起并称南校夜生活两巨头");

    }

    else {
        //输入错误
        this->resize(430,430);
        QImage image16(":/new/images/icon.png");
        QPixmap pixmap16(QPixmap::fromImage(image16));
        pixmap16 = pixmap16.scaled(800, 400, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
        imagelabel->setPixmap(pixmap16);
        imagelabel->show();

        textlabel->setText("               输入错误");
    }


}
