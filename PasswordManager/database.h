#ifndef DATABASE_H
#define DATABASE_H

#include <QMainWindow>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include "QSqlRecord"
#include "QTime"
#include "QLineEdit"
#include "QMouseEvent"
#include "QMenu"
#include "QSystemTrayIcon"
#include "QHBoxLayout"
#include "QVBoxLayout"
#include "QLabel"
#include "QPushButton"
#include "QTimer"

namespace Ui {
class database;
}

class database : public QMainWindow
{
    Q_OBJECT

public:
    explicit database(QWidget *parent = 0);
    ~database();
    Ui::database *ui;
    QSqlDatabase db;
    QTime t;
    QString str1,str2,str3,str4;
    QVBoxLayout *vLayout;
    QHBoxLayout *hLayout1,*hLayout2,*hLayout3,*hLayout4,*hLayout5;
    QLineEdit *accountLineEdit,*passwordLineEdit,*beizhu1LineEdit,*beizhu2LineEdit;
    QLabel *accountLabel,*passwordLabel,*beizhu1Label,*beizhu2Label;
    QPushButton *button1,*button2;
    bool isTrayIconShow=true;
    int count=0;

    void shake();

private:
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
    QAction *minimizeAction;
    QAction *restoreAction;
    QAction *quitAction;
    QWidget *widget,*w;
    QLineEdit *le;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void insertData();

    void on_closeButton_clicked();

    void trayiconActivated(QSystemTrayIcon::ActivationReason reason);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void encryption();

    void on_btn_AllClear_clicked();

    void clearDatabaseSlot();

    void on_btn_encrypteFile_clicked();

    void on_closeButton_2_clicked();

    void windowShake();

private:
    void init();
    void createLink();
    void createTable();
    void searchAllData();

protected:
     void closeEvent(QCloseEvent *event);
     void mousePressEvent(QMouseEvent *);
     void mouseMoveEvent(QMouseEvent *);
     QPoint windowPos;
     QPoint mousePos;
     QPoint dPos;
};

#endif // DATABASE_H
