#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<QPushButton>
#include<QListWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(600,400);
   //设置单选按钮 男默认选中
    ui->rBtnMan->setCheckable(true);
    //选中女后 打印信息
    connect(ui->rBtnWoman,&QPushButton::clicked,[=](){
        qDebug() << "选中了女了！";
    });

    //多选按钮  2是选中  0是未选中 1是半选
    connect(ui->cBox,&QCheckBox::stateChanged,[=](int state){
        qDebug() << state;
    });

    //利用listWidget写诗
    QListWidgetItem * item = new QListWidgetItem("锄禾日当午");
    //将一行诗放入到listWidget控件中
    ui->listWidget->addItem(item);
    //设置水平居中
    item->setTextAlignment(Qt::AlignHCenter);


    //QStringList   QList<QString>
    QStringList list ;
    //重载了<< 运算符
    list << "锄禾日当午" << "旱地和下土" << "谁知盘中餐"<< "粒粒皆辛苦";
    ui->listWidget->addItems(list);
    //可以像上面那样，一个循环遍历链表，然后设置水平居中



}

MainWindow::~MainWindow()
{
    delete ui;
}

