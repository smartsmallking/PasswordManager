/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_database
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QTableWidget *tableWidget;
    QPushButton *closeButton;
    QWidget *widget;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *btn_AllClear;
    QPushButton *btn_encrypteFile;
    QWidget *page_4;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QPushButton *closeButton_2;

    void setupUi(QMainWindow *database)
    {
        if (database->objectName().isEmpty())
            database->setObjectName(QStringLiteral("database"));
        database->setWindowModality(Qt::NonModal);
        database->resize(901, 394);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(database->sizePolicy().hasHeightForWidth());
        database->setSizePolicy(sizePolicy);
        database->setMouseTracking(false);
        database->setFocusPolicy(Qt::NoFocus);
        database->setAcceptDrops(false);
        database->setStyleSheet(QString::fromUtf8("QWidget:focus{outline: none;}\n"
"QWidget{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"		background-color: rgb(255, 255, 255);\n"
"}\n"
"QScrollBar:vertical\n"
"{\n"
"    width:0px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(112, 162, 255);\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(72, 144, 254);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:4px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-radius:4px;\n"
"border:1px solid #1B89CA;\n"
"}\n"
"\n"
"QTableWidget{\n"
"border:1px solid #1B89CA;\n"
"selection-color: rgb(90, 90, 90);\n"
"selection-background-color: rgb(170, 255, 255);\n"
"}\n"
"\n"
""));
        database->setAnimated(true);
        database->setDocumentMode(false);
        database->setTabShape(QTabWidget::Rounded);
        database->setDockNestingEnabled(false);
        database->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(database);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, -10, 911, 411));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tableWidget = new QTableWidget(page_3);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(152, 81, 760, 323));
        tableWidget->setMinimumSize(QSize(760, 0));
        tableWidget->setMaximumSize(QSize(760, 16777215));
        tableWidget->setStyleSheet(QStringLiteral(""));
        tableWidget->verticalHeader()->setVisible(false);
        closeButton = new QPushButton(page_3);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(880, 10, 30, 31));
        closeButton->setMinimumSize(QSize(30, 31));
        closeButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setIconSize(QSize(30, 30));
        closeButton->setAutoRepeat(false);
        closeButton->setAutoExclusive(false);
        widget = new QWidget(page_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 901, 71));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(72,144, 254);"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 20, 211, 31));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(page_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 81, 144, 323));
        groupBox->setMinimumSize(QSize(144, 0));
        groupBox->setStyleSheet(QLatin1String("border:1px solid #ACACFF;\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 230, 100, 30));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 280, 100, 30));
        pushButton_2->setMinimumSize(QSize(100, 30));
        pushButton_2->setMaximumSize(QSize(100, 30));
        btn_AllClear = new QPushButton(groupBox);
        btn_AllClear->setObjectName(QStringLiteral("btn_AllClear"));
        btn_AllClear->setGeometry(QRect(20, 10, 101, 31));
        btn_encrypteFile = new QPushButton(groupBox);
        btn_encrypteFile->setObjectName(QStringLiteral("btn_encrypteFile"));
        btn_encrypteFile->setGeometry(QRect(20, 50, 101, 31));
        stackedWidget->addWidget(page_3);
        tableWidget->raise();
        widget->raise();
        groupBox->raise();
        closeButton->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        widget_2 = new QWidget(page_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 901, 401));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(72, 144, 255);"));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 160, 261, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(40, 40));
        lineEdit->setMaximumSize(QSize(40, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

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

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 120, 261, 31));
        closeButton_2 = new QPushButton(widget_2);
        closeButton_2->setObjectName(QStringLiteral("closeButton_2"));
        closeButton_2->setGeometry(QRect(870, 0, 30, 31));
        closeButton_2->setMinimumSize(QSize(30, 31));
        closeButton_2->setStyleSheet(QStringLiteral(""));
        closeButton_2->setIcon(icon);
        closeButton_2->setIconSize(QSize(30, 30));
        closeButton_2->setAutoRepeat(false);
        closeButton_2->setAutoExclusive(false);
        stackedWidget->addWidget(page_4);
        database->setCentralWidget(centralwidget);

        retranslateUi(database);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(database);
    } // setupUi

    void retranslateUi(QMainWindow *database)
    {
        database->setWindowTitle(QApplication::translate("database", "\345\257\206\347\240\201\347\256\241\347\220\206\345\267\245\345\205\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("database", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("database", "\350\264\246\346\210\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("database", "\345\257\206\347\240\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("database", "\345\244\207\346\263\2501", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("database", "\345\244\207\346\263\2502", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("database", "\344\270\212\346\254\241\344\277\256\346\224\271\346\227\266\351\227\264", Q_NULLPTR));
        closeButton->setText(QString());
        label->setText(QApplication::translate("database", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\345\257\206 \347\240\201 \347\256\241 \347\220\206 \345\267\245 \345\205\267</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("database", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("database", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_AllClear->setText(QApplication::translate("database", "\344\270\200\351\224\256\346\270\205\347\251\272\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        btn_encrypteFile->setText(QApplication::translate("database", "\345\212\240\345\257\206\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266", Q_NULLPTR));
        lineEdit_3->setText(QString());
        label_2->setText(QApplication::translate("database", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\257\267\345\205\210\350\247\243\344\270\252\351\224\201\345\225\246\357\274\232</span></p></body></html>", Q_NULLPTR));
        closeButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class database: public Ui_database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
