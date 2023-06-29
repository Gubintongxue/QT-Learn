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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *page_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QWidget *page_5;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton_16;
    QWidget *page_2;
    QToolButton *toolButton;
    QWidget *page_3;
    QToolButton *toolButton_2;
    QPushButton *btn_scrollArea;
    QPushButton *btn_ToolBox;
    QPushButton *btn_TabWidget;
    QComboBox *comboBox;
    QPushButton *btn_select;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_2;
    QLabel *lbl_Image;
    QLabel *lbl_movie;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(740, 580);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 20, 301, 321));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        tabWidget = new QTabWidget(page_6);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 50, 241, 261));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        stackedWidget->addWidget(page_6);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        scrollArea = new QScrollArea(page_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 50, 151, 341));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 149, 339));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_15 = new QPushButton(scrollAreaWidgetContents);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        verticalLayout->addWidget(pushButton_15);

        pushButton_14 = new QPushButton(scrollAreaWidgetContents);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        verticalLayout->addWidget(pushButton_14);

        pushButton_13 = new QPushButton(scrollAreaWidgetContents);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        toolBox = new QToolBox(page_5);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(50, 20, 141, 331));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 141, 259));
        pushButton_16 = new QPushButton(page);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(40, 80, 75, 23));
        toolBox->addItem(page, QString::fromUtf8("\345\256\266\344\272\272"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 141, 259));
        toolButton = new QToolButton(page_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(20, 90, 37, 18));
        toolBox->addItem(page_2, QString::fromUtf8("\346\234\213\345\217\213"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 141, 259));
        toolButton_2 = new QToolButton(page_3);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(20, 100, 37, 18));
        toolBox->addItem(page_3, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        stackedWidget->addWidget(page_5);
        btn_scrollArea = new QPushButton(Widget);
        btn_scrollArea->setObjectName(QString::fromUtf8("btn_scrollArea"));
        btn_scrollArea->setGeometry(QRect(320, 30, 75, 23));
        btn_ToolBox = new QPushButton(Widget);
        btn_ToolBox->setObjectName(QString::fromUtf8("btn_ToolBox"));
        btn_ToolBox->setGeometry(QRect(320, 100, 75, 23));
        btn_TabWidget = new QPushButton(Widget);
        btn_TabWidget->setObjectName(QString::fromUtf8("btn_TabWidget"));
        btn_TabWidget->setGeometry(QRect(320, 180, 75, 23));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 370, 69, 22));
        btn_select = new QPushButton(Widget);
        btn_select->setObjectName(QString::fromUtf8("btn_select"));
        btn_select->setGeometry(QRect(50, 430, 75, 23));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 350, 113, 20));
        lineEdit->setEchoMode(QLineEdit::Password);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(160, 420, 42, 22));
        timeEdit = new QTimeEdit(Widget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(220, 410, 118, 22));
        dateEdit = new QDateEdit(Widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(220, 450, 110, 22));
        dateTimeEdit = new QDateTimeEdit(Widget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(150, 490, 194, 22));
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(360, 280, 160, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        spinBox_2 = new QSpinBox(Widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(310, 280, 42, 22));
        lbl_Image = new QLabel(Widget);
        lbl_Image->setObjectName(QString::fromUtf8("lbl_Image"));
        lbl_Image->setGeometry(QRect(360, 350, 191, 141));
        lbl_movie = new QLabel(Widget);
        lbl_movie->setObjectName(QString::fromUtf8("lbl_movie"));
        lbl_movie->setGeometry(QRect(450, 30, 241, 211));

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(2);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\347\231\276\345\272\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\350\260\267\346\255\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "\344\274\240\346\231\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Widget", "\345\256\266\344\272\272", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Widget", "\346\234\213\345\217\213", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Widget", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("Widget", "\351\273\221\345\220\215\345\215\225", nullptr));
        btn_scrollArea->setText(QCoreApplication::translate("Widget", "scrollArea", nullptr));
        btn_ToolBox->setText(QCoreApplication::translate("Widget", "ToolBox", nullptr));
        btn_TabWidget->setText(QCoreApplication::translate("Widget", "Tab Widget", nullptr));
        btn_select->setText(QCoreApplication::translate("Widget", "\351\200\211\344\270\255\346\213\226\346\213\211\346\234\272", nullptr));
        lbl_Image->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        lbl_movie->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
