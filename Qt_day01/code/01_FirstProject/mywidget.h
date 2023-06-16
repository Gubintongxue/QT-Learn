//防止头文件重复包含
#ifndef MYWIDGET_H
#define MYWIDGET_H

//包含头文件 QWidget 窗口类
#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT// Q_OBJECT宏，允许类中使用信号和槽的机制

public:
    //构造函数
    myWidget(QWidget *parent = nullptr);//默认值，在头文件和源文件中只有一个存在默认值

    //析构函数
    ~myWidget();
};
#endif // MYWIDGET_H
