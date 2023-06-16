#include "student.h"
#include<QDebug>

student::student(QObject *parent)
    : QObject{parent}
{

}

void student::treat()
{
    qDebug()<<"请老师吃饭";

}

void student::treat(QString foodName)
{
    //打印QString 会有引号，char* 打印没有引号
    //QString -> char * 先转成 QByteArray  ( .toUtf8() ) 再转char * ( .data() )
    qDebug() << "请老师吃饭，老师要吃:" << foodName.toUtf8().data();
}
