#include "smallwidget.h"
#include "ui_smallwidget.h"

SmallWidget::SmallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmallWidget)
{
    ui->setupUi(this);

    //QSpinBox移动 QSlider跟着移动

    void(QSpinBox:: * spSignal )(int) = &QSpinBox::valueChanged;
    //第二个参数如果&QSpinBox::valueChanged使用，就不知道用哪个函数重载
    connect(ui->spinBox , spSignal , ui->horizontalSlider , &QSlider::setValue);

    //QSlider滑动  QSpinBox数字跟着改变
    //&QSlider::valueChanged只有一个重载
    connect(ui->horizontalSlider, &QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);

}

//设置数字
void SmallWidget::setNum(int num)
{
    ui->spinBox->setValue(num);

}

//获取数字
int SmallWidget::getNum()
{
    return ui->spinBox->value();
}


SmallWidget::~SmallWidget()
{
    delete ui;
}
