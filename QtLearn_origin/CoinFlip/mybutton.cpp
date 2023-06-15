#include "mybutton.h"
#include <QDebug>
#include <QPropertyAnimation>
//myButton::myButton(QWidget *parent) :
//    QPushButton(parent)
//{
//}

myButton::myButton(QString normalImgPath, QString pressedImgPath){
//myButton::myButton(QString normalImgPath, QString pressedImgPath=""){
    this->normalImgPath = normalImgPath;
    this->pressedImgPath = pressedImgPath;

    QPixmap pix;
    bool res = pix.load(normalImgPath);
    if(!res){
        qDebug() << normalImgPath << "图片加载失败！";
        return;
    }

    //this->setFixedSize(pix.size());

    this->resize(pix.width(), pix.height());

    this->setStyleSheet("QPushButton{border:0px;}");

    this->setIcon(pix);

    this->setIconSize(pix.size());
}

void myButton::mousePressEvent(QMouseEvent *e){
    if(this->pressedImgPath != ""){
//        this->setStyleSheet("background: rgb(255,150,128)");
        QPixmap pix;
        bool res = pix.load(this->pressedImgPath);
        if(!res){
            qDebug() << normalImgPath << "图片加载失败！";
            return;
        }

        //this->setFixedSize(pix.size());

        this->resize(pix.width(), pix.height());

        this->setStyleSheet("QPushButton{border:0px;}");

        this->setIcon(pix);

        this->setIconSize(pix.size());
    }

    return QPushButton::mousePressEvent(e);
}
void myButton::mouseReleaseEvent(QMouseEvent *e){
    if(this->pressedImgPath != ""){
//        this->setStyleSheet("background-color: rgb(0,0,255)");
        QPixmap pix;
        bool res = pix.load(this->normalImgPath);
        if(!res){
            qDebug() << normalImgPath << "图片加载失败！";
            return;
        }

        //this->setFixedSize(pix.size());

        this->resize(pix.width(), pix.height());

        this->setStyleSheet("QPushButton{border:0px;}");

        this->setIcon(pix);

        this->setIconSize(pix.size());
    }

    return QPushButton::mouseReleaseEvent(e);
}

void myButton::downBounce(){
    // 1. 创建动态对象
    QPropertyAnimation* ani = new QPropertyAnimation(this, "geometry");

    // 2. 设置动画时间间隔
    ani->setDuration(200);

    // 3. 起始位置
    ani->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));

    // 4. 结束位置
//    ani->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));
    ani->setEndValue(QRect(this->x(), this->y()+10, this->width(), this->height()));

    // 5. 设置弹跳曲线
    ani->setEasingCurve(QEasingCurve::OutBounce);

    // 6. 执行动画
    ani->start();
}
void myButton::upBounce(){
    // 1. 创建动态对象
    QPropertyAnimation* ani = new QPropertyAnimation(this, "geometry");

    // 2. 设置动画时间间隔
    ani->setDuration(200);

    // 3. 起始位置
    ani->setStartValue(QRect(this->x(), this->y()+10, this->width(), this->height()));

    // 4. 结束位置
//    ani->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));
    ani->setEndValue(QRect(this->x(), this->y(), this->width(), this->height()));

    // 5. 设置弹跳曲线
    ani->setEasingCurve(QEasingCurve::OutBounce);

    // 6. 执行动画
    ani->start();
}
