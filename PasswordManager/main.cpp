#include "mainwindow.h"
#include <QApplication>
#include "QSharedMemory"
#include "QMessageBox"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //    程序运行一个实例
    QSharedMemory mem(QString::fromLocal8Bit("SystemObject"));
    if (!mem.create(1) && mem.error() == QSharedMemory::AlreadyExists) {
        QMessageBox::information(0,  QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("对不起，程序已经运行！"), QMessageBox::Ok);
        return 0;
    }
    return a.exec();
}
