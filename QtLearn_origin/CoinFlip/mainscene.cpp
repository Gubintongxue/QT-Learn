#include "mainscene.h"
#include "ui_mainscene.h"
#include <QPainter>
#include <mybutton.h>
#include <QDebug>
#include <chooselevelscene.h>
#include <QTime>
#include <QApplication>
#include <QSound>
#include <QMediaPlayer>
#include <QMediaPlaylist>

MainScene::MainScene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScene)
{
    ui->setupUi(this);
    // 0. 设置窗口标题
    this->setWindowTitle("CoinFlip");
    // 1. 设置窗口固定大小
    this->setFixedSize(420, 680);
    // 2. 设置窗口图标
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));

    // 3. 退出
    connect(ui->actionQuit, &QAction::triggered, [=](){
        this->close();
    });

    // 添加音效
    QSound *startSound = new QSound(":/res/TapButtonSound.wav",this);
    startSound->play();

    //设置背景音乐
//    QSound *myMusic=new QSound(":/res/myDouDZ.wav",this);//声音还可以减小点
//    myMusic->setLoops(-1);
//    myMusic->play();
    //多曲
    QMediaPlaylist *playList=new QMediaPlaylist(this);

    playList->addMedia(QUrl("qrc:/res/myDouDZ.wav"));
//    playList->addMedia(QUrl("qrc:/res2/xiaShan.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/xy.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/fk.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/bm.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/nsyw.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/xiaShan.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/xy.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/gs.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/fk.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/nsyw.mp3"));
//    playList->addMedia(QUrl("qrc:/res2/bm.mp3"));
//    playList->setCurrentIndex(0);

    QMediaPlayer *player=new QMediaPlayer(this);
    player->setVolume(60);
    player->setPlaylist(playList);
    player->play();

    // 4. 创建Start按钮
    myButton* startBtn = new myButton(":/res/MenuSceneStartButton.png");
    ChooseLevelScene* choice = new ChooseLevelScene();
    connect(choice, &ChooseLevelScene::chooseBackScene,this,[=]()->void{

        sleep(700);
        // 设置固定窗口
        this->setGeometry(choice->geometry());
        choice->close();
        //choice->hide();
        this->show();
    });

    startBtn->setParent(this);

    startBtn->move(this->width()*0.5-startBtn->width()*0.5, this->height()*0.5);

    connect(startBtn, &QPushButton::clicked, [=](){

        startSound->play();

        startBtn->downBounce();
        startBtn->upBounce();

        sleep(500);

        // 设置窗口固定
        choice->setGeometry(this->geometry());

        this->hide();
        choice->show();

    });
}

void MainScene::sleep(int ms){
    QTime reachTime = QTime::currentTime().addMSecs(ms);
    while(QTime::currentTime() < reachTime){
        QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
    }
}

void MainScene::paintEvent(QPaintEvent *){
    // 1. 加载背景图片
    QPixmap pix;
    pix.load(":/res/PlayLevelSceneBg.png");

    // 2. 创建画家
    QPainter painter(this);
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);

    // 3. 加载游戏图标
    pix.load(":/res/Title.png");
    pix = pix.scaled( pix.width()*0.8, pix.height()*0.8);
    painter.drawPixmap(10, 30, pix);
}

MainScene::~MainScene()
{
    delete ui;
}
