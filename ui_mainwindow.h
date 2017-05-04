/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QWidget *page_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QLabel *label;
    QToolButton *closeButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QLabel#label_3,QLabel#label_4,QLabel#label_5{color: rgb(72, 144, 254);}\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 60, 401, 241));
        stackedWidget->setMinimumSize(QSize(20, 20));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(229, 223, 214);"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        layoutWidget = new QWidget(page_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 100, 261, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(40, 40));
        lineEdit->setMaximumSize(QSize(40, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(40, 40));
        lineEdit_2->setMaximumSize(QSize(40, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(40, 40));
        lineEdit_3->setMaximumSize(QSize(40, 40));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(40, 40));
        lineEdit_4->setMaximumSize(QSize(40, 40));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(lineEdit_4);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 172, 181, 41));
        pushButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"background-color: rgb(112, 162, 255);\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(72, 144, 254);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:4px;\n"
"}"));
        pushButton->setFlat(false);
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(71, 71, 70, 30));
        label_3->setMinimumSize(QSize(70, 30));
        lineEdit_5 = new QLineEdit(page_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(147, 71, 160, 30));
        lineEdit_5->setMinimumSize(QSize(160, 30));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(71, 107, 70, 30));
        label_4->setMinimumSize(QSize(70, 30));
        lineEdit_6 = new QLineEdit(page_4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(147, 107, 160, 30));
        lineEdit_6->setMinimumSize(QSize(160, 30));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        stackedWidget->addWidget(page_4);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 401, 61));
        label->setStyleSheet(QStringLiteral("background-color: rgb(72, 144, 254);"));
        closeButton = new QToolButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(362, 0, 38, 30));
        closeButton->setMinimumSize(QSize(30, 30));
        closeButton->setStyleSheet(QLatin1String("QToolButton:hover{\n"
"background-color: rgb(112, 162, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setIconSize(QSize(30, 30));
        closeButton->setAutoRaise(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\206\215\346\254\241\350\276\223\345\205\245\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\257\206 \347\240\201 \347\256\241 \347\220\206 \345\267\245 \345\205\267</span></p></body></html>", Q_NULLPTR));
        closeButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
