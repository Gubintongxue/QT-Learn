﻿#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionnew->setIcon(QIcon("E:/Qtprojects/learnQt/QtLearn/day2/Code/02_QtSource/Image/Luffy.png"));

    //使用添加Qt资源 ": + 前缀名 + 文件名 "
    ui->actionnew->setIcon(QIcon(":/Image/Luffy.png"));
    ui->actionopen->setIcon(QIcon(":/Image/LuffyQ.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

