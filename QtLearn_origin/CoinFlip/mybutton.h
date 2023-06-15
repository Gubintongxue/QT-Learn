#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>
#include <QString>

// myButton类，主要用于实现Start，Back按钮
class myButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit myButton(QWidget *parent = 0);
    myButton(QString normalImgPath, QString pressedImgPath = "");
//    myButton(QString normalImgPath, QString pressedImgPath);

    // 下坠
    void downBounce();
    // 上弹
    void upBounce();

    // 正常显示的图片路径
    QString normalImgPath;
    // 按压时的图片路径
    QString pressedImgPath;

    // 鼠标按下事件
    void mousePressEvent(QMouseEvent *e);
    // 鼠标释放事件
    void mouseReleaseEvent(QMouseEvent *e);

signals:

public slots:

};

#endif // MYBUTTON_H
