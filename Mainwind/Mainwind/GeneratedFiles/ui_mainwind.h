/********************************************************************************
** Form generated from reading UI file 'mainwind.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIND_H
#define UI_MAINWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainwindClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_addordelete;
    QPushButton *pushButton_buy;
    QPushButton *pushButton_print;
    QLabel *label_2;
    QPushButton *pushButton_read;
    QPushButton *pushButton_save;
    QPushButton *pushButton_trprint;
    QPushButton *pushButton_back;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menu_12306;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainwindClass)
    {
        if (MainwindClass->objectName().isEmpty())
            MainwindClass->setObjectName(QStringLiteral("MainwindClass"));
        MainwindClass->resize(577, 421);
        MainwindClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralWidget = new QWidget(MainwindClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 0, 481, 141));
        label->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:rgb(0, 0, 255);\n"
"font: 75 30pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        pushButton_addordelete = new QPushButton(centralWidget);
        pushButton_addordelete->setObjectName(QStringLiteral("pushButton_addordelete"));
        pushButton_addordelete->setGeometry(QRect(210, 210, 93, 28));
        pushButton_addordelete->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));
        pushButton_buy = new QPushButton(centralWidget);
        pushButton_buy->setObjectName(QStringLiteral("pushButton_buy"));
        pushButton_buy->setGeometry(QRect(110, 270, 93, 28));
        pushButton_buy->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));
        pushButton_print = new QPushButton(centralWidget);
        pushButton_print->setObjectName(QStringLiteral("pushButton_print"));
        pushButton_print->setGeometry(QRect(380, 210, 93, 28));
        pushButton_print->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 110, 251, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        pushButton_read = new QPushButton(centralWidget);
        pushButton_read->setObjectName(QStringLiteral("pushButton_read"));
        pushButton_read->setGeometry(QRect(110, 150, 93, 28));
        pushButton_read->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(310, 150, 93, 28));
        pushButton_save->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));
        pushButton_trprint = new QPushButton(centralWidget);
        pushButton_trprint->setObjectName(QStringLiteral("pushButton_trprint"));
        pushButton_trprint->setGeometry(QRect(40, 210, 93, 28));
        pushButton_trprint->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));
        pushButton_back = new QPushButton(centralWidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(310, 270, 93, 28));
        pushButton_back->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 300, 551, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        MainwindClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainwindClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 577, 26));
        menu_12306 = new QMenu(menuBar);
        menu_12306->setObjectName(QStringLiteral("menu_12306"));
        MainwindClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainwindClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainwindClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainwindClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainwindClass->setStatusBar(statusBar);

        menuBar->addAction(menu_12306->menuAction());

        retranslateUi(MainwindClass);

        QMetaObject::connectSlotsByName(MainwindClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainwindClass)
    {
        MainwindClass->setWindowTitle(QApplication::translate("MainwindClass", "mainwin", 0));
        label->setText(QApplication::translate("MainwindClass", "\346\254\242\350\277\216\344\275\277\347\224\250\342\200\234\346\210\221\347\232\20412306\342\200\235", 0));
        pushButton_addordelete->setText(QApplication::translate("MainwindClass", "\345\242\236\345\210\240\347\217\255\346\254\241", 0));
        pushButton_buy->setText(QApplication::translate("MainwindClass", "\350\264\255\344\271\260\350\275\246\347\245\250", 0));
        pushButton_print->setText(QApplication::translate("MainwindClass", "\350\256\242\345\215\225\346\265\217\350\247\210", 0));
        label_2->setText(QApplication::translate("MainwindClass", "\350\257\267\351\200\211\346\213\251\346\202\250\351\234\200\350\246\201\347\232\204\345\212\237\350\203\275", 0));
        pushButton_read->setText(QApplication::translate("MainwindClass", "\345\275\225\345\205\245\344\277\241\346\201\257", 0));
        pushButton_save->setText(QApplication::translate("MainwindClass", "\344\277\241\346\201\257\345\217\246\345\255\230", 0));
        pushButton_trprint->setText(QApplication::translate("MainwindClass", "\350\275\246\346\254\241\346\265\217\350\247\210", 0));
        pushButton_back->setText(QApplication::translate("MainwindClass", "\351\200\200\345\233\236\350\275\246\347\245\250", 0));
        label_3->setText(QApplication::translate("MainwindClass", "<html><head/><body><p>\345\210\227\350\275\246\344\277\241\346\201\257\345\222\214\350\256\242\345\215\225\344\277\241\346\201\257\350\207\252\345\212\250\344\277\235\345\255\230\350\207\263\351\273\230\350\256\244\346\226\207\344\273\266<br/>\350\213\245\346\234\211\346\224\271\345\212\250\350\257\267\347\202\271\345\207\273\344\277\241\346\201\257\345\217\246\345\255\230</p></body></html>", 0));
        menu_12306->setTitle(QApplication::translate("MainwindClass", "\346\210\221\347\232\20412306", 0));
    } // retranslateUi

};

namespace Ui {
    class MainwindClass: public Ui_MainwindClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIND_H
