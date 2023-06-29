#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QImage>
#include <QPicture>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    //Pixmap绘图设备 专门为平台做了显示的优化  可以画在磁盘上
//    //指定绘图设备 的宽和高
//    QPixmap pix(300,300);

//    //填充颜色  背景为白色
//    pix.fill(Qt::white);

//    //声明画家
//    //在绘图设备上画家画画
//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::green));
//    //画了一个圆  默认是黑色背景
//    painter.drawEllipse(QPoint(150,150) , 100,100);
//    //保存
//    //在300*300 的纸张上  画了一个圆心为（150，150）的半径为100的圆
//    pix.save("E:\\pix.png");

//    //QImage 绘图设备  可以对像素进行访问
//    //宽度和高度  还需要指定一个格式 可以去帮助文档查  常用RGB格式
//    QImage img(300,300,QImage::Format_RGB32);
//    img.fill(Qt::white);

//    QPainter painter(&img);
//    //圆的颜色 为 蓝色
//    painter.setPen(QPen(Qt::blue));
//    painter.drawEllipse(QPoint(150,150) , 100,100);

//    //保存
//    img.save("E:\\img.png");



    //QPicture 绘图设备  可以记录和重现 绘图指令
    //可以记录 画的所有指令
    QPicture pic;
    QPainter painter;
    painter.begin(&pic);  //开始往pic上画
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150,150) , 100,100);
    painter.end(); //结束画画

    //保存到磁盘
    pic.save("E:\\pic.zt");
}


//绘图事件
void Widget::paintEvent(QPaintEvent *)
{
//    //利用画家画图
//    QPainter painter(this);


//    QImage img; //利用QImage 对像素进行修改
//    //加载图片
//    img.load(":/Image/Luffy.png");

//    //修改像素点
//    for(int i = 50 ;i < 100 ; i++)
//    {
//        for(int j = 50 ; j < 100;j++)
//        {
//            //设置像素点的值
//            QRgb value = qRgb(255,0,0);
//            img.setPixel(i,j,value);
//        }
//    }

//    painter.drawImage(0,0,img);


    QPainter painter(this);
    //重现QPicture的绘图指令
    QPicture pic;
    //加载之前画的picture
    pic.load("E:\\pic.zt");
    //重新 刚才的绘画 记录
    painter.drawPicture(0,0,pic);

}


Widget::~Widget()
{
    delete ui;
}



