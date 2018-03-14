#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    database *d;
    int count=0;

    void shake();

    void appAutoRun(bool bAutoRun);


private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_closeButton_clicked();

    void on_pushButton_clicked();

    void windowShake();

private:
    Ui::MainWindow *ui;
    QString password;
};

#endif // MAINWINDOW_H
