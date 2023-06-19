#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //重置窗口大小
    resize(600,400);

    //菜单栏  只能最多有一个
    //菜单栏创建
    QMenuBar* bar = menuBar();

    //将菜单栏放入到窗口中
    setMenuBar(bar);

    //创建菜单
    //addMenu中有重载，需要一个QString title
    QMenu * fileMenu = bar->addMenu("文件");
    //再创一个菜单，名字叫编辑
    QMenu * editMenu = bar->addMenu("编辑");


    //创建菜单项
    QAction * newAction = fileMenu->addAction("新建");

    //添加分割线
    fileMenu->addSeparator();
    QAction * openAction = fileMenu->addAction("打开");

    //工具栏  可以有多个
    QToolBar * toolBar = new QToolBar(this);
    //QT:: 枚举值
    addToolBar(Qt::LeftToolBarArea,toolBar);

    //后期设置 只允许 左右停靠
    toolBar->setAllowedAreas( Qt::LeftToolBarArea | Qt::RightToolBarArea );

    //设置浮动
    //设置不浮动
    toolBar->setFloatable(false);

    //设置移动 (总开关)
    //工具栏设置无法拖拽
    toolBar->setMovable(false);

    //工具栏中可以设置内容
    //和上面的菜单栏共用了新建和打开
    toolBar->addAction(newAction);
    //添加分割线
    toolBar->addSeparator();
    toolBar->addAction(openAction);

    //工具栏中添加控件
    QPushButton * btn = new QPushButton("aa" , this);
    toolBar->addWidget(btn);

    //状态栏 最多有一个
    QStatusBar * stBar = statusBar();
    //设置到窗口中
    setStatusBar(stBar);

    //放标签控件
    QLabel * label = new QLabel("提示信息",this);
    stBar->addWidget(label);


    QLabel * label2 = new QLabel("右侧提示信息",this);
    stBar->addPermanentWidget(label2);

    //铆接部件 （浮动窗口） 可以有多个
    QDockWidget * dockWidget = new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);

    //设置后期停靠区域，只允许上下
    dockWidget->setAllowedAreas( Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea );

    //设置中心部件 只能一个
    QTextEdit * edit = new QTextEdit(this);
    setCentralWidget(edit);

}

MainWindow::~MainWindow()
{
}

