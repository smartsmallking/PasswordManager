#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QSettings"
#include "QDir"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    d=new database;

    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowIcon(QIcon(":/key.png"));
    ui->lineEdit->setMaxLength(1);
    ui->lineEdit_2->setMaxLength(1);
    ui->lineEdit_3->setMaxLength(1);
    ui->lineEdit_4->setMaxLength(1);
    ui->lineEdit->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit_2->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit_3->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit_4->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit->setFocus();
    ui->lineEdit_5->setMaxLength(4);
    ui->lineEdit_6->setMaxLength(4);
    //设备回显
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    ui->lineEdit_5->setEchoMode(QLineEdit::Password);
    ui->lineEdit_6->setEchoMode(QLineEdit::Password);
    //读取ini
    QSettings setting(QDir::currentPath()+"/config.ini",QSettings::IniFormat);
    QString isNew =setting.value("passwordManager/isNew").toString();
    password=setting.value("passwordManager/password").toString();
    qDebug()<<password;
    if(isNew=="no")
    {
        //已有密码
        ui->stackedWidget->setCurrentIndex(0);
        d->isTrayIconShow=false;

    }
    else
    {
        //初次运行
        ui->stackedWidget->setCurrentIndex(1);
        d->isTrayIconShow=true;
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    if(ui->lineEdit->text().length()==1)
    {
        ui->lineEdit_2->setFocus();
    }
}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    if(ui->lineEdit_2->text().length()==1)
    {
        ui->lineEdit_3->setFocus();
    }
}

void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    if(ui->lineEdit_3->text().length()==1)
    {
        ui->lineEdit_4->setFocus();
    }
}

void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    if(ui->lineEdit->text().length()==1)
    {
        QString password=ui->lineEdit->text()+ui->lineEdit_2->text()+ui->lineEdit_3->text()+ui->lineEdit_4->text();
        qDebug()<<"password:"<<password;
        QSettings setting(QDir::currentPath()+"/config.ini",QSettings::IniFormat);
        QString password_ini=setting.value("passwordManager/password").toString();
        if(password==password_ini)
        {
            this->close();
            d->show();
        }
        else
        {
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
            ui->lineEdit_4->clear();
            //密码错误，窗口震动
            shake();
            ui->lineEdit->setFocus();
        }
    }
}
void MainWindow::shake()
{
    QTimer *t=new QTimer(this);
    t->start(40);
    connect(t,SIGNAL(timeout()),this,SLOT(windowShake()));
    QTimer::singleShot(400,t,SLOT(stop()));
}
void MainWindow::windowShake()
{
    if(count==0)
    {
        this->setGeometry(this->x()-5,this->y(),this->width(),this->height());
    }
    else if(count==1)
    {
        this->setGeometry(this->x(),this->y()-5,this->width(),this->height());
    }
    else if(count==2)
    {
        this->setGeometry(this->x()+5,this->y(),this->width(),this->height());
    }
    else if(count==3)
    {
        this->setGeometry(this->x(),this->y()+5,this->width(),this->height());
    }
    count++;
    if(count==4)
    {
        count=0;
    }
}
void MainWindow::on_closeButton_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEdit_5->text()==ui->lineEdit_6->text())
    {
        QSettings setting(QDir::currentPath()+"/config.ini",QSettings::IniFormat);
        setting.beginGroup("passwordManager");
        setting.setValue("isNew","no");
        setting.setValue("password",ui->lineEdit_6->text());
        setting.endGroup();
        d=new database;
        this->close();
        d->show();
    }
    else
    {
        qDebug()<<"password不一致";
    }

}
