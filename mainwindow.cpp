#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QPushButton>
#include <QMessageBox>
#include "horse.h"
#include "struct.h"
#include <QTextEdit>
#include <QString>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //找到所有的棋盘位置，并存入链表
    labelList = ui->widget_ChessBoard->findChildren<QLabel * >();//

    //初始化画黑白棋盘图
    int i = 0;
    foreach(QLabel * la,labelList){
        if(i == 64) break;
        la->setText("");
        //la->setText(QString::number(i));
        this->paintBlackAndWhite(i,la);
        la->setAlignment(Qt::AlignCenter);
        i++;
    }

    ui->_ButtonStart->setStyleSheet("QPushButton{border-image: url(:/control/playeStart.png);}"
                                    "QPushButton:hover{border-image: url(:/control/playeStart.png);}");
    //"QPushButton:pressed{border-image: url(:/control/playeStart2.png);}"

    connect(ui->_ButtonStart,SIGNAL(clicked(bool)),this,SLOT(on__ButtonStart_clicked()));
    connect(ui->actionClear,SIGNAL(triggered(bool)),this,SLOT(on_actionClear_triggered()));

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on__ButtonStart_clicked(bool)
{
    bool isIntX,isIntY;
    int x = ui->_EditX->text().toInt(&isIntX,10);
    int y = ui->_EditY->text().toInt(&isIntY,10);

    if(isIntX && isIntY && x>=0 && x<=8 && y>=0 && y<=8){
        this->_flagStart = !_flagStart;
        if(this->_flagStart){

            ui->horseWord->setStyleSheet("border-image: url(:/chat/chat_Start.png);""font: 87 20pt \"Arial Black\";");
            ui->horseWord->setText("  开始奔跑!");

            ui->_ButtonStart->setStyleSheet("QPushButton{border-image: url(:/control/playeStart2.png);}");

            this->runing(x,y);
        }else{
            this->_flagStop = true;

            ui->_ButtonStart->setStyleSheet("QPushButton{border-image: url(:/control/playeStart.png);}"
                                            "QPushButton:hover{border-image: url(:/control/playeStart.png);}");

            ui->horseWord->setStyleSheet("border-image: url(:/chat/chat_Stop.png);""font: 87 18pt \"Arial Black\";");
            ui->horseWord->setText("  跑累了,歇会!");
        }


    }else{
        QMessageBox::warning(this,tr("Warning"),tr("您的输入不符合规范"),QMessageBox::Ok);
    }
}

void MainWindow::runing(int x,int y){


    //处理输入的开始位置
    QPoint start(x-1,y-1);
    int _route = start.y() * 8 + start.x();
    //初始化，开始步数为0 开始点 -1
    int nextPoint = -1;
    int _step = 0;

    //如果刚刚是暂停
    if(this->_flagStop){
        this->_flagStop = false;
        _step = this->_justStep;
        nextPoint = this->_jusetPoint;
    }

    //画出路径
    for(; _step <=64 ;_step++){

        if(this->_flagStart){

            //处理开始结束
            if(nextPoint != -1){
                //下马
                this->paintBlackAndWhite(nextPoint,this->labelList.at(nextPoint));
                //                this->labelList.at(nextPoint)->setText();
            }

            //画完路径，恢复初始
            if(_step == 64) {
                this->_flagStart = false;
                this->_justStep = -1;
                this->_jusetPoint = -1;

                this->labelList.at((_horse.route[_route].point[0][1]) * 8 + ( _horse.route[_route].point[0][0]))->setStyleSheet("image: url(:/smallhorse.png)");

                ui->_ButtonStart->setStyleSheet("QPushButton{border-image: url(:/control/playeStart.png);}"
                                                "QPushButton:hover{border-image: url(:/control/playeStart2.png);}");

                ui->horseWord->setStyleSheet("border-image: url(:/chat/chat_Finish.png);""font: 87 18pt \"Arial Black\";");
                ui->horseWord->setText("跑完了,吁吁!");
                //延时
                QTime _Timer = QTime::currentTime().addMSecs(1000);

                while( QTime::currentTime() < _Timer )
                    QCoreApplication::processEvents();

                ui->horseWord->setStyleSheet("");
                ui->horseWord->setText("");
                break;
            }

            //上马
            nextPoint = ( _horse.route[_route].point[_step][1]) * 8 + ( _horse.route[_route].point[_step][0]);
            this->labelList.at(nextPoint)->setStyleSheet("image: url(:/smallhorse.png);""font: 87 22pt \"Arial Black\";");
            this->labelList.at(nextPoint)->setText(QString::number(_step));

            //延时
            QTime _Timer = QTime::currentTime().addMSecs(700);
            while( QTime::currentTime() < _Timer )
                QCoreApplication::processEvents();

            this->_justStep = _step;
            this->_jusetPoint = nextPoint;
        }
    }




}

void MainWindow::paintBlackAndWhite(int i , QLabel * la){
    //la->setText(QString::number(i));
    //la->setStyleSheet("font: 87 15pt \"Arial Black\"");
    if(i/8 %2 == 0)
    {
        if(i%2 == 0){
            la->setStyleSheet("background-color: rgb(255, 255, 255)");
        }else{
            la->setStyleSheet("background-color: rgb(113, 204, 255)");
        }
    }else{
        if(i%2 == 0){
            la->setStyleSheet("background-color: rgb(113, 204, 255)");
        }else{
            la->setStyleSheet("background-color: rgb(255, 255, 255)");
        }
    }
}

void MainWindow::on_actionClear_triggered()
{
    int i = 0;
    foreach(QLabel * la,labelList){
        if(i == 64) break;
        la->setText("");
        this->paintBlackAndWhite(i,la);
        i++;
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    int mouse_x = QCursor::pos().x();//鼠标点击处横坐标

    int mouse_y = QCursor::pos().y();//鼠标点击处纵坐标


    int y = (mouse_x - 600)/60;

    int x = (mouse_y - 240)/60;

    if(x>=0 && x<=8 && y>=0 && y<=8){
        this->_flagStart = true;

        if(this->_flagStart){

            ui->horseWord->setStyleSheet("border-image: url(:/chat/chat_Start.png);""font: 87 20pt \"Arial Black\";");
            ui->horseWord->setText("  开始奔跑!");
            ui->_EditX->setText(QString::number(x));
            ui->_EditY->setText(QString::number(y));
            ui->_ButtonStart->setStyleSheet("QPushButton{border-image: url(:/control/playeStart2.png);}");

            this->runing(x,y);
        }
    }else{
        QMessageBox::warning(this,tr("Warning"),tr("您的输入不符合规范"),QMessageBox::Ok);
    }

//    QString point = QString::number(mouse_x) + "," + QString::number(mouse_y) + " " +QString::number(x) +","+ QString::number(y);
//    QMessageBox::information(this,tr("坐标"),point,QMessageBox::Yes);
}
