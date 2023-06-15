#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QMainWindow>

namespace Ui {
class MainScene;
}

// 游戏主场景类
class MainScene : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainScene(QWidget *parent = 0);
    ~MainScene();

    // 重写绘画函数
    void paintEvent(QPaintEvent *);

    // 延时方法
    void sleep(int ms);

private:
    Ui::MainScene *ui;
};

#endif // MAINSCENE_H
