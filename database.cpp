#include "database.h"
#include "ui_database.h"
#include "QDebug"
#include "QSqlError"
#include "QFile"
#include "QHBoxLayout"
#include "QPushButton"
#include "QLineEdit"
#include "QVBoxLayout"
#include "QDateTime"
#include "QSettings"
#include "QDir"
#include "QProcess"

database::database(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::database)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowIcon(QIcon(":/key.png"));
    widget=new QWidget;
    init();
    ui->stackedWidget->setCurrentIndex(0);
    //创建托盘图标
    QIcon icon = QIcon(":/key.png");
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(icon);
    trayIcon->setToolTip(tr("密码管理"));
    //trayIcon->show();


    //添加单/双击鼠标相应
    connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
            this,SLOT(trayiconActivated(QSystemTrayIcon::ActivationReason)));
    //创建监听行为
    minimizeAction = new QAction(tr("最小化 (&I)"), this);
    connect(minimizeAction, SIGNAL(triggered()), this, SLOT(hide()));
    restoreAction = new QAction(tr("还原 (&R)"), this);
    connect(restoreAction, SIGNAL(triggered()), this, SLOT(encryption()));
    quitAction = new QAction(tr("退出 (&Q)"), this);
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    //创建右键弹出菜单
    trayIconMenu = new QMenu(this);
    trayIconMenu->setStyleSheet("background-color: rgb(72, 144, 254)");
    trayIconMenu->addAction(minimizeAction);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);
    trayIcon->setContextMenu(trayIconMenu);

    createLink();
    createTable();
    searchAllData();
}
void database::trayiconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
    case QSystemTrayIcon::Trigger:
        //单击托盘图标
        qDebug()<<"click";
        ui->lineEdit->setFocus();
        //        encryption();
    case QSystemTrayIcon::DoubleClick:
        //双击托盘图标
        //        this->showNormal();
        //        this->raise();
        //        this->hide();
        //        ui->stackedWidget->setCurrentIndex(1);
        //        this->show();
        ui->lineEdit->setFocus();
        qDebug()<<"doubleclick";
        encryption();
        break;
    default:
        break;
    }
}
database::~database()
{
    delete ui;
}

void database::init()
{
    QSettings setting(QDir::currentPath()+"/config.ini",QSettings::IniFormat);
    QString isEncrypte=setting.value("passwordManager/isEncrypte").toString();
    if(isEncrypte=="yes")
    {
        ui->btn_encrypteFile->setText(tr("文件已加密"));
        ui->btn_encrypteFile->setStyleSheet("background-color: rgb(134, 134, 134);");
        ui->btn_encrypteFile->setEnabled(false);
    }

    ui->lineEdit->setMaxLength(1);
    ui->lineEdit_2->setMaxLength(1);
    ui->lineEdit_3->setMaxLength(1);
    ui->lineEdit_4->setMaxLength(1);
    ui->lineEdit->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit_2->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit_3->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit_4->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    ui->lineEdit->setFocus();

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//整行选中
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//只能选中一行
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//禁止编辑
    ui->tableWidget->setAlternatingRowColors(true);               //设置隔一行变一颜色，即：一灰一白
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);//去除虚线框
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setColumnWidth(0,30);
    ui->tableWidget->setColumnWidth(1,150);
    ui->tableWidget->setColumnWidth(2,150);
    ui->tableWidget->setColumnWidth(3,100);
    ui->tableWidget->setColumnWidth(4,150);

    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    accountLineEdit=new QLineEdit(tr(""));
    passwordLineEdit=new QLineEdit(tr(""));
    beizhu1LineEdit=new QLineEdit(tr(""));
    beizhu2LineEdit=new QLineEdit(tr(""));

    accountLineEdit->setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);}");
    passwordLineEdit->setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);}");
    beizhu1LineEdit->setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);}");
    beizhu2LineEdit->setStyleSheet("QLineEdit{background-color: rgb(255, 255, 255);}");\

    //初始化添加数据界面
    widget=new QWidget(this);
    widget->setWindowFlags(Qt::FramelessWindowHint);
    //    widget->setWindowModality(Qt::mod);
    widget->setStyleSheet("background-color: rgb(72, 144, 254)");
    QVBoxLayout *vLayout=new QVBoxLayout;

    hLayout1=new QHBoxLayout;
    hLayout2=new QHBoxLayout;
    hLayout3=new QHBoxLayout;
    hLayout4=new QHBoxLayout;
    hLayout5=new QHBoxLayout;

    accountLabel=new QLabel(tr("账户："));
    passwordLabel=new QLabel(tr("密码："));
    beizhu1Label=new QLabel(tr("备注1:"));
    beizhu2Label=new QLabel(tr("备注2:"));

    button1=new QPushButton(tr("确定"));
    button2=new QPushButton(tr("取消"));
    button1->setStyleSheet("QPushButton:hover{background-color: rgb(112, 162, 255);}"
                           "QPushButton{background-color: rgb(52, 124, 234)}");
    button1->setFixedSize(QSize(60,20));
    button2->setStyleSheet("QPushButton:hover{background-color: rgb(112, 162, 255);}"
                           "QPushButton{background-color: rgb(52, 124, 234)}");
    button2->setFixedSize(QSize(60,20));


    hLayout1->addWidget(accountLabel);
    hLayout1->addWidget(accountLineEdit);
    hLayout2->addWidget(passwordLabel);
    hLayout2->addWidget(passwordLineEdit);
    hLayout3->addWidget(beizhu1Label);
    hLayout3->addWidget(beizhu1LineEdit);
    hLayout4->addWidget(beizhu2Label);
    hLayout4->addWidget(beizhu2LineEdit);
    hLayout5->addWidget(button1);
    hLayout5->addWidget(button2);

    vLayout->addLayout(hLayout1,0);
    vLayout->addLayout(hLayout2,1);
    vLayout->addLayout(hLayout3,2);
    vLayout->addLayout(hLayout4,3);
    vLayout->addLayout(hLayout5,4);
    //    vLayout->addWidget(button);

    widget->setLayout(vLayout);
    widget->setFixedSize(200,200);
    widget->move(this->x()+(this->width()/2)-(widget->width()/2),this->y()+(this->height()/2)-(widget->height()/2));
    connect(button1,SIGNAL(clicked()),this,SLOT(insertData()));
    connect(button1,SIGNAL(clicked()),widget,SLOT(close()));
    connect(button2,SIGNAL(clicked()),widget,SLOT(close()));
    widget->hide();

    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
}

void database::createLink()
{
    //创建数据库文件
    QString dbFileName = "myDB.db";
    QFile dbFile(dbFileName);
    if (false == dbFile.open(QIODevice::Append))
    {
        qDebug()<<QString::fromLocal8Bit("打开数据库文件失败。");
    }
    dbFile.close();

    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbFileName);
    db.setHostName("test");
    if(db.open())
    {
        qDebug()<<"open database success";
    }
    else
    {
        qDebug()<<"open database fail";
    }
}

void database::createTable()
{
    //创建表
    QSqlQuery query;
    QString command="create table if not exists 'table1' (id integer primary key autoincrement,account varchar,password vachar,beizhu1 vachar,beizhu2 vachar,lastChangeTime vachar)";
    bool success=query.exec(command);
    if(success)
    {
        qDebug()<<"create table success";
    }
    else
    {
        qDebug()<<"cerate table fail";
    }
}

//查询全部数据
void database::searchAllData()
{
    ui->tableWidget->setRowCount(0);
    QSqlQuery query("SELECT * from table1");
    int rowCount=0;
    bool success=query.exec();
    if(success)
    {
        while (query.next())
        {
            ui->tableWidget->setRowCount(++rowCount);
            QTableWidgetItem *item=new QTableWidgetItem;
            QTableWidgetItem *item1=new QTableWidgetItem;
            QTableWidgetItem *item2=new QTableWidgetItem;
            QTableWidgetItem *item3=new QTableWidgetItem;
            QTableWidgetItem *item4=new QTableWidgetItem;
            QTableWidgetItem *item5=new QTableWidgetItem;
            QString Id=QString::number(query.value("id").toInt());
            QString account=query.value("account").toString();
            QString password=query.value("password").toString();
            QString beizhu1=query.value("beizhu1").toString();
            QString beizhu2=query.value("beizhu2").toString();
            QString lastChangeTime=query.value("lastChangeTime").toString();
            item->setText(Id);
            item1->setText(account);
            item2->setText(password);
            item3->setText(beizhu1);
            item4->setText(beizhu2);
            item5->setText(lastChangeTime);
            item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            item3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            item4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            item5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            ui->tableWidget->setItem(rowCount-1,0,item);
            ui->tableWidget->setItem(rowCount-1,1,item1);
            ui->tableWidget->setItem(rowCount-1,2,item2);
            ui->tableWidget->setItem(rowCount-1,3,item3);
            ui->tableWidget->setItem(rowCount-1,4,item4);
            ui->tableWidget->setItem(rowCount-1,5,item5);
        }
    }
    else
    {
        qDebug()<<"search fail";
    }
    qDebug()<<"over";
}

void database::encryption()
{
    if(this->isHidden())
    {
        ui->stackedWidget->setCurrentIndex(1);
        this->show();
    }
    else
    {
        qDebug()<<"is show now";
    }
}

//删除
void database::on_pushButton_2_clicked()
{
    qDebug()<<ui->tableWidget->currentRow();
    if(ui->tableWidget->currentRow()>-1)
    {
        int currentRow=ui->tableWidget->currentRow();
        int id=ui->tableWidget->item(currentRow,0)->text().toInt();
        QSqlQuery query;
        query.prepare(QString("delete from table1 where id = %1").arg(id));
        if(!query.exec())
        {
            qDebug() << "删除记录失败！";
        }
        searchAllData();
    }
    else
    {
        qDebug()<<"no item seleted!";
        return;
    }
}

//添加数据
void database::on_pushButton_clicked()
{
    widget->show();
    //    widget->exec();
}

void database::insertData()
{
    str1=accountLineEdit->text();
    str2=passwordLineEdit->text();
    str3=beizhu1LineEdit->text();
    str4=beizhu2LineEdit->text();
    qDebug()<<str1<<str2<<str3<<str4;
    QString str5=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    QSqlQuery query;
    query.prepare("insert into table1 values(?,?,?,?,?,?)");
    query.bindValue(1,str1);
    query.bindValue(2,str2);
    query.bindValue(3,str3);
    query.bindValue(4,str4);
    query.bindValue(5,str5);
    bool success=query.exec();
    if(success)
    {
        searchAllData();
    }
    else
    {
        qDebug()<<success;
    }
    accountLineEdit->clear();
    passwordLineEdit->clear();
    beizhu1LineEdit->clear();
    beizhu2LineEdit->clear();
}

void database::on_closeButton_clicked()
{
    accountLineEdit->clear();
    passwordLineEdit->clear();
    beizhu1LineEdit->clear();
    beizhu2LineEdit->clear();
    widget->close();
    hide();
    trayIcon->show();
    //弹出气泡提示
    if(isTrayIconShow)
    {
        trayIcon->showMessage(NULL,"软件收藏到托盘啦！",QSystemTrayIcon::Information,2000);
    }
}

void database::mousePressEvent(QMouseEvent *e)
{
    windowPos = this->pos();       // 获得部件当前位置
    mousePos = e->globalPos();     // 获得鼠标位置
    dPos = mousePos - windowPos;   // 移动后部件所在的位置
}

void database::mouseMoveEvent(QMouseEvent *e)
{
    this->move(e->globalPos() - dPos);
}

void database::on_lineEdit_textChanged(const QString &arg1)
{
    if(ui->lineEdit->text().length()==1)
    {
        ui->lineEdit_2->setFocus();
    }
}

void database::on_lineEdit_2_textChanged(const QString &arg1)
{
    if(ui->lineEdit_2->text().length()==1)
    {
        ui->lineEdit_3->setFocus();
    }
}

void database::on_lineEdit_3_textChanged(const QString &arg1)
{
    if(ui->lineEdit_3->text().length()==1)
    {
        ui->lineEdit_4->setFocus();
    }
}

void database::on_lineEdit_4_textChanged(const QString &arg1)
{
    if(ui->lineEdit->text().length()==1)
    {
        QString password=ui->lineEdit->text()+ui->lineEdit_2->text()+ui->lineEdit_3->text()+ui->lineEdit_4->text();
        qDebug()<<"password:"<<password;
        QSettings setting(QDir::currentPath()+"/config.ini",QSettings::IniFormat);
        QString password_ini=setting.value("passwordManager/password").toString();
        if(password==password_ini)
        {
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
            ui->lineEdit_4->clear();
            ui->lineEdit->setFocus();
            trayIcon->hide();
            ui->stackedWidget->setCurrentIndex(0);
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

void database::shake()
{
    QTimer *t=new QTimer(this);
    t->start(40);
    connect(t,SIGNAL(timeout()),this,SLOT(windowShake()));
    QTimer::singleShot(400,t,SLOT(stop()));
}

void database::windowShake()
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
void database::on_btn_AllClear_clicked()
{
    w=new QWidget;
    w->setFixedSize(300,60);
    w->setWindowTitle(tr("输入密码后回车："));
    QHBoxLayout *hl=new QHBoxLayout;
    le=new QLineEdit;
    hl->addWidget(le);
    w->setLayout(hl);
    w->show();
    connect(le,SIGNAL(returnPressed()),this,SLOT(clearDatabaseSlot()));
}

void database::clearDatabaseSlot()
{
    QSettings setting(QDir::currentPath()+"/config.ini",QSettings::IniFormat);
    QString password=setting.value("passwordManager/password").toString();

    if(le->text()==password)
    {
        w->close();
        //删除本地db文件
        db.close();
        QFile::remove(QDir::currentPath()+"/"+"myDB.db");
        qDebug()<<"删除数据库";

        ui->btn_encrypteFile->setEnabled(true);
        ui->btn_encrypteFile->setStyleSheet("QPushButton:hover{background-color: rgb(112, 162, 255);}QPushButton{background-color: rgb(72, 144, 254);color: rgb(255, 255, 255);border-radius:4px;}");
        ui->btn_encrypteFile->setText(tr("加密数据库文件"));
        setting.beginGroup("passwordManager");
        setting.setValue("isEncrypte","no");
        setting.endGroup();
    }
    else
    {
        qDebug()<<"password error";
    }
    createLink();
    createTable();
    searchAllData();
}

void database::on_btn_encrypteFile_clicked()
{
    QString command="attrib "+QDir::currentPath()+"/myDB.db +s +h";
    QProcess p(0);
    //    p.start("attrib D:/Qt/qtcreator-3.5.1/Documents/build-untitled37-Desktop_Qt_5_5_1_MinGW_32bit-Debug/myDB.db +s +h");
    p.start(command);
    p.waitForStarted();
    p.waitForFinished();
    qDebug()<<QString::fromLocal8Bit(p.readAllStandardOutput());
    if(QString::fromLocal8Bit(p.readAllStandardOutput())=="")
    {
        qDebug()<<"加密成功！";
        ui->btn_encrypteFile->setText("文件已加密");
        ui->btn_encrypteFile->setStyleSheet("background-color: rgb(134, 134, 134);");
        ui->btn_encrypteFile->setEnabled(false);
        QSettings setting(QDir::currentPath()+"/config.ini",QSettings::IniFormat);
        setting.beginGroup("passwordManager");
        setting.setValue("isEncrypte","yes");
        setting.endGroup();
    }
}
void database::closeEvent(QCloseEvent *event)
{
    db.close();
    this->hide();
    qDebug()<<"close";
}

void database::on_closeButton_2_clicked()
{
    accountLineEdit->clear();
    passwordLineEdit->clear();
    beizhu1LineEdit->clear();
    beizhu2LineEdit->clear();
    widget->close();
    hide();
}
