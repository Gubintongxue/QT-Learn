#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

//修改上层继承的为QPushButton
//#include <QWidget>
#include<QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);

    ~MyPushButton();
signals:

};

#endif // MYPUSHBUTTON_H
