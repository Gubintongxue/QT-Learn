#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>

//Teacher 类 老师类
//Student 类 学生类
//下课后 ，老师会触发一个信号，饿了 ，学生响应信号，请客吃饭



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    //创建一个老师对象
    this->zt = new teacher(this);//构造函数直接把Widget对象加入到对象树中

    //创建一个学生对象
    this->st = new student(this);

//    //老师饿了 学生请客的连接
//    //就要函数名就行了，函数的地址
//    connect(zt,&teacher::hungry,st,&student::treat);//有重载不知道哪个函数

//    //调用下课函数，要先做好连接
//    //来触发老师饿了信号，槽处理：学生请客
//    classIsOver();

    //连接带参数的 信号和槽
    //指针 -> 地址
    // 函数指针 -> 函数地址

    //成员函数指针的写法,成员函数指针名为teacherSignal
    void(teacher:: *teacherSignal)(QString ) = &teacher::hungry;
    void(student:: *studentSlot)(QString ) = &student::treat;
    connect(zt,teacherSignal,st,studentSlot);

    //调用下课函数，要先做好连接
    //来触发老师饿了信号，槽处理：学生请客
    //classIsOver();



    //点击按钮，触发下课
    QPushButton *btn = new QPushButton("下课",this);
    this->resize(600,400);
    //connect(btn,&QPushButton::clicked,this,&this->classIsOver);

    //无参信号和槽连接
    void (teacher:: *teacherSignal2)() = &teacher::hungry;
    void (student:: *studentSlot2)() = &student::treat;
    connect(zt,teacherSignal2,st,studentSlot2);

    //信号连接信号
    connect(btn,&QPushButton::clicked,zt,teacherSignal2);

    //断开信号
    //disconnect(zt,teacherSignal2,st,studentSlot2);


    //拓展
    //1、信号是可以连接信号
    //2、一个信号可以连接多个槽函数
    //3、多个信号 可以连接 同一个槽函数
    //4、信号和槽函数的参数 必须类型一一对应
    //5、信号和槽的参数个数  是不是要一致？信号的参数个数 可以多余槽函数的参数个数

    //Qt4版本以前的信号和槽连接方式
    //利用Qt4信号槽 连接无参版本
    //Qt4版本 底层SIGNAL("hungry")  SLOT( "treat")
    connect(zt,SIGNAL(hungry()) , st , SLOT(treat()));
    //Qt4版本优点：参数直观，缺点 ：类型不做检测
    //Qt5以上  支持 Qt4的版本写法，反之不支持

    //    QPushButton * btn2 = new QPushButton;
    //    [btn](){
    //        btn->setText("aaaa");
    //        btn2->setText("bbb"); //btn2看不到
    //    }();

    //    QPushButton * myBtn = new QPushButton (this);
    //    QPushButton * myBtn2 = new QPushButton (this);
    //    myBtn2->move(100,100);
    //    int m = 10;
          //没有mutable，值传递进来如果修改就会报错，但是只会修改拷贝值
    //    connect(myBtn,&QPushButton::clicked,this,[m] ()mutable { m = 100 + 10; qDebug() << m; });

    //    connect(myBtn2,&QPushButton::clicked,this,[=] ()  { qDebug() << m; });

    //    qDebug() << m;

    //    int ret = []()->int{return 1000;}();
    //    qDebug() << "ret = " << ret ;

    //利用lambda表达式 实现点击按钮 关闭窗口
    QPushButton *btn2 = new QPushButton;
    btn2->setText("关闭");
    btn2->move(100,0);
    btn2->setParent(this);//显示在窗口中，不要忘记这个

    //一个按钮可以做多个事情
    connect(btn2,&QPushButton::clicked,this,[=]{
        this->close();//关闭窗口
        emit zt->hungry("宫保鸡丁");
    });
    //[&](){}可能会出现一个错误

}

Widget::~Widget()
{
    delete ui;
}

void Widget::classIsOver()
{
    //下课函数，调用后 触发老师饿了的信号
    //emit zt->hungry();//emit 触发关键字
    emit zt->hungry("宫保鸡丁");
}


