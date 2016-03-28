/********************************************************************************
** Form generated from reading UI file 'back.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACK_H
#define UI_BACK_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_backClass
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *backClass)
    {
        if (backClass->objectName().isEmpty())
            backClass->setObjectName(QStringLiteral("backClass"));
        backClass->resize(400, 300);
        backClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_3 = new QLabel(backClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 180, 331, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        layoutWidget = new QWidget(backClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 240, 351, 33));
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

        pushButton = new QPushButton(backClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 130, 93, 28));
        label = new QLabel(backClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 201, 51));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        lineEdit = new QLineEdit(backClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 120, 161, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color:none;\n"
""));
        label_2 = new QLabel(backClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 191, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));

        retranslateUi(backClass);
        QObject::connect(okButton, SIGNAL(clicked()), backClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), backClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(backClass);
    } // setupUi

    void retranslateUi(QDialog *backClass)
    {
        backClass->setWindowTitle(QApplication::translate("backClass", "Dialog", 0));
        label_3->setText(QString());
        okButton->setText(QApplication::translate("backClass", "\346\230\257", 0));
        cancelButton->setText(QApplication::translate("backClass", "\345\217\226\346\266\210", 0));
        pushButton->setText(QApplication::translate("backClass", "\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("backClass", "\351\200\200\345\233\236\350\275\246\347\245\250", 0));
        label_2->setText(QApplication::translate("backClass", "\350\257\267\350\276\223\345\205\245\350\256\242\345\215\225\345\217\267", 0));
    } // retranslateUi

};

namespace Ui {
    class backClass: public Ui_backClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACK_H
