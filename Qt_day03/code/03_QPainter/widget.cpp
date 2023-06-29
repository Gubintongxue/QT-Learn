#include "widget.h"
#include "ui_widget.h"
#include <QPainter> //画家类
#include <QTimer>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    //点击移动按钮，移动图片
    connect(ui->pushButton,&QPushButton::clicked,[=](){

        posX+=20;
        //如果要手动调用绘图事件 用update更新
        update();
    });

    //调用定时器   来自动移动
    QTimer * timer = new QTimer(this);
    timer->start(10);

    connect(timer,&QTimer::timeout,[=](){
        posX++;
        update();
    });
}

Widget::~Widget()
{
    delete ui;
}

//定义
void Widget::paintEvent(QPaintEvent *)
{
    //    //实例化画家对象  this指定的是绘图设备
    //    QPainter painter(this);

    //    //设置画笔
    //    QPen pen(QColor(255,0,0));
    //    //设置画笔宽度
    //    pen.setWidth(3);
    //    //设置画笔风格
    //    pen.setStyle(Qt::DotLine);
    //    //让画家 使用这个笔
    //    painter.setPen(pen);


    //    //设置画刷
    //    QBrush brush(Qt::cyan);
    //    //设置画刷风格
    //    brush.setStyle(Qt::Dense7Pattern);
    //    //让画家使用画刷
    //    painter.setBrush(brush);


    //    //画线
    //    //两点一线
    //    painter.drawLine(QPoint(0,0) , QPoint(100,100));

    //    //画圆 椭圆
    //    //QPoint圆心  Rx Ry
    //    painter.drawEllipse( QPoint(100,100) , 50,50);

    //    //画矩形
    //    //重载的方式很多  告诉一个点left top  再告诉宽 和 高度
    //    painter.drawRect(QRect(20,20,50,50));

    //    //画文字
    //    //画一个矩形框 在写入文字
    //    painter.drawText(QRect(10,200,150,50) , "好好学习，天天向上");






    //////////////////////////////高级设置 ///////////////////////////////

    //    QPainter painter(this);
    //    painter.drawEllipse(QPoint(100,50) , 50,50);
    //    //设置 抗锯齿能力  效率较低
    //    painter.setRenderHint(QPainter::Antialiasing);
    //    painter.drawEllipse(QPoint(200,50) , 50,50);


    //画矩形
    //    painter.drawRect(QRect(20,20,50,50));

    //    //移动画家
    //    painter.translate(100,0);

    //    //保存画家状态
    //    painter.save();

    //    painter.drawRect(QRect(20,20,50,50));

    //    painter.translate(100,0);

    //    //还原画家保存状态
    //    painter.restore();

    //    painter.drawRect(QRect(20,20,50,50));



    /////////////////////////////////利用画家 画资源图片 ///////////////////
    QPainter painter(this);
    //从 x:20 y：0 画路飞
    //painter.drawPixmap(20,0,QPixmap(":/Image/Luffy.png"));
    QPixmap pix = QPixmap(":/Image/Luffy.png");

    //如果超出屏幕 从0开始
    //屏幕宽度
    if(posX >= this->width())
    {
        //posX = 0;
        posX = -pix.width();
    }

    painter.drawPixmap(posX,0,pix);


}
