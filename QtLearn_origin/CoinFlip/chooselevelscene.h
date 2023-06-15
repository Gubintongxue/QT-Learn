#ifndef CHOOSELEVELSCENE_H
#define CHOOSELEVELSCENE_H

#include <QMainWindow>
#include <playscene.h>
// 选择关卡类
class ChooseLevelScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelScene(QWidget *parent = 0);

    // 重写绘画事件函数
    void paintEvent(QPaintEvent *);

    PlayScene* playScene = NULL;

    // 延时方法.
    void sleep(int ms);
signals:
    // 选择返回的信号函数
    void  chooseBackScene();
public slots:

};

#endif // CHOOSELEVELSCENE_H
