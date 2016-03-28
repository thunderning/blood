/********************************************************************************
** Form generated from reading UI file 'buy.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_H
#define UI_BUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QTableWidget *table1;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *buyClass)
    {
        if (buyClass->objectName().isEmpty())
            buyClass->setObjectName(QStringLiteral("buyClass"));
        buyClass->resize(892, 731);
        buyClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        layoutWidget = new QWidget(buyClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(440, 640, 351, 33));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        label_6 = new QLabel(buyClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(460, 470, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        label_7 = new QLabel(buyClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(460, 530, 101, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        lineEdit_3 = new QLineEdit(buyClass);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(610, 470, 181, 31));
        lineEdit_4 = new QLineEdit(buyClass);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(610, 530, 181, 31));
        label_4 = new QLabel(buyClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 270, 111, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        label_5 = new QLabel(buyClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(420, 390, 411, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        label_3 = new QLabel(buyClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 270, 111, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        lineEdit = new QLineEdit(buyClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 270, 181, 31));
        label = new QLabel(buyClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 20, 351, 91));
        label->setStyleSheet(QString::fromUtf8("font: 50pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        lineEdit_2 = new QLineEdit(buyClass);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(510, 270, 181, 31));
        pushButton = new QPushButton(buyClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(720, 270, 93, 28));
        label_2 = new QLabel(buyClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 220, 731, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        table1 = new QTableWidget(buyClass);
        table1->setObjectName(QStringLiteral("table1"));
        table1->setGeometry(QRect(30, 340, 271, 371));
        label_8 = new QLabel(buyClass);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 120, 271, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        lineEdit_5 = new QLineEdit(buyClass);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(380, 120, 181, 31));
        pushButton_2 = new QPushButton(buyClass);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 120, 93, 28));
        lineEdit_6 = new QLineEdit(buyClass);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(30, 170, 841, 31));

        retranslateUi(buyClass);
        QObject::connect(okButton, SIGNAL(clicked()), buyClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), buyClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(buyClass);
    } // setupUi

    void retranslateUi(QDialog *buyClass)
    {
        buyClass->setWindowTitle(QApplication::translate("buyClass", "Dialog", 0));
        okButton->setText(QApplication::translate("buyClass", "\350\264\255\344\271\260", 0));
        cancelButton->setText(QApplication::translate("buyClass", "\345\217\226\346\266\210", 0));
        label_6->setText(QApplication::translate("buyClass", "\347\217\255\346\254\241\357\274\232", 0));
        label_7->setText(QApplication::translate("buyClass", "\347\245\250\346\225\260\357\274\232", 0));
        label_4->setText(QApplication::translate("buyClass", "\347\273\210\347\202\271\347\253\231\357\274\232", 0));
        label_5->setText(QApplication::translate("buyClass", "\350\257\267\350\276\223\345\205\245\350\246\201\350\264\255\344\271\260\347\232\204\347\217\255\346\254\241\345\222\214\347\245\250\346\225\260", 0));
        label_3->setText(QApplication::translate("buyClass", "\350\265\267\345\247\213\347\253\231\357\274\232", 0));
        label->setText(QApplication::translate("buyClass", "\350\264\255\344\271\260\350\275\246\347\245\250", 0));
        pushButton->setText(QApplication::translate("buyClass", "\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("buyClass", "\350\257\267\350\276\223\345\205\245\345\247\213\347\273\210\347\253\231\357\274\210\350\213\245\344\270\215\350\276\223\345\205\245\357\274\214\350\264\255\347\245\250\346\227\266\351\273\230\350\256\244\345\205\250\347\250\213\347\245\250\357\274\211", 0));
        label_8->setText(QApplication::translate("buyClass", "\345\217\257\350\276\223\345\205\245\350\275\246\346\254\241\345\217\267\346\237\245\350\257\242", 0));
        pushButton_2->setText(QApplication::translate("buyClass", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class buyClass: public Ui_buyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_H
