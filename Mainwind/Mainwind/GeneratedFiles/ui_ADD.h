/********************************************************************************
** Form generated from reading UI file 'ADD.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

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

class Ui_ADDClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *ADDClass)
    {
        if (ADDClass->objectName().isEmpty())
            ADDClass->setObjectName(QStringLiteral("ADDClass"));
        ADDClass->resize(400, 300);
        ADDClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        layoutWidget = new QWidget(ADDClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 250, 351, 33));
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

        lineEdit = new QLineEdit(ADDClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 130, 281, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color:none;\n"
""));
        pushButton = new QPushButton(ADDClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 140, 93, 28));
        label_2 = new QLabel(ADDClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 80, 411, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        label = new QLabel(ADDClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 201, 51));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        label_3 = new QLabel(ADDClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 190, 331, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));

        retranslateUi(ADDClass);
        QObject::connect(okButton, SIGNAL(clicked()), ADDClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ADDClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(ADDClass);
    } // setupUi

    void retranslateUi(QDialog *ADDClass)
    {
        ADDClass->setWindowTitle(QApplication::translate("ADDClass", "Dialog", 0));
        okButton->setText(QApplication::translate("ADDClass", "\346\230\257", 0));
        cancelButton->setText(QApplication::translate("ADDClass", "\345\217\226\346\266\210", 0));
        lineEdit->setText(QString());
        pushButton->setText(QApplication::translate("ADDClass", "\347\241\256\350\256\244", 0));
        label_2->setText(QApplication::translate("ADDClass", "\350\257\267\350\276\223\345\205\245\345\242\236\346\224\271\344\277\241\346\201\257\357\274\210\345\275\242\345\274\217\345\246\202XXX,XXX|XXX|)", 0));
        label->setText(QApplication::translate("ADDClass", "\345\242\236\346\224\271\347\217\255\346\254\241", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ADDClass: public Ui_ADDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
