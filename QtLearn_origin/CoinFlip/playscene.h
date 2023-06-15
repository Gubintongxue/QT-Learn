#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include <mycoin.h>

// 关卡界面类
class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
    //explicit PlayScene(QWidget *parent = 0);
    //PlayScene();
    PlayScene(int levelNum);

    // 重写绘画事件
    void paintEvent(QPaintEvent *);

    // 关卡下标
    int levelIndex;

    int gameArray[4][4];

    MyCoin* coinBtn[4][4];

    bool isWin;

    //void sleep(int ms);

signals:
    // 用于返回 选择关卡场景 的信号函数
    void selectLevelScene();
public slots:

};

#endif // PLAYSCENE_H
