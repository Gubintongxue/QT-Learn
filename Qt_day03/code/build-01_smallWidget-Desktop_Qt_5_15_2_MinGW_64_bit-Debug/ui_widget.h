/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <smallwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    SmallWidget *widget;
    SmallWidget *widget_2;
    QPushButton *btn_get;
    QPushButton *btn_set;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(414, 295);
        widget = new SmallWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 231, 51));
        widget_2 = new SmallWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(30, 90, 211, 51));
        btn_get = new QPushButton(Widget);
        btn_get->setObjectName(QString::fromUtf8("btn_get"));
        btn_get->setGeometry(QRect(40, 170, 80, 18));
        btn_set = new QPushButton(Widget);
        btn_set->setObjectName(QString::fromUtf8("btn_set"));
        btn_set->setGeometry(QRect(40, 220, 80, 18));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btn_get->setText(QCoreApplication::translate("Widget", "\350\216\267\345\217\226\345\275\223\345\211\215\345\200\274", nullptr));
        btn_set->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\210\260\344\270\200\345\215\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
