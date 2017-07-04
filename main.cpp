#include "mainwindow.h"
#include <QApplication>
#include "QSharedMemory"
#include "QMessageBox"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //    ��������һ��ʵ��
    QSharedMemory mem(QString::fromLocal8Bit("SystemObject"));
    if (!mem.create(1) && mem.error() == QSharedMemory::AlreadyExists) {
        QMessageBox::information(0,  QString::fromLocal8Bit("����"), QString::fromLocal8Bit("�Բ��𣬳����Ѿ����У�"), QMessageBox::Ok);
        return 0;
    }
    return a.exec();
}
