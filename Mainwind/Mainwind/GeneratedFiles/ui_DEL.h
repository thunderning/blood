/********************************************************************************
** Form generated from reading UI file 'DEL.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_H
#define UI_DEL_H

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

class Ui_DELClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *DELClass)
    {
        if (DELClass->objectName().isEmpty())
            DELClass->setObjectName(QStringLiteral("DELClass"));
        DELClass->resize(400, 300);
        DELClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        layoutWidget = new QWidget(DELClass);
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

        lineEdit = new QLineEdit(DELClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 130, 161, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color:none;\n"
""));
        pushButton = new QPushButton(DELClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 140, 93, 28));
        label_3 = new QLabel(DELClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 190, 331, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        label = new QLabel(DELClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 201, 51));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        label_2 = new QLabel(DELClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 191, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));

        retranslateUi(DELClass);
        QObject::connect(okButton, SIGNAL(clicked()), DELClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DELClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(DELClass);
    } // setupUi

    void retranslateUi(QDialog *DELClass)
    {
        DELClass->setWindowTitle(QApplication::translate("DELClass", "Dialog", 0));
        okButton->setText(QApplication::translate("DELClass", "\346\230\257", 0));
        cancelButton->setText(QApplication::translate("DELClass", "\345\217\226\346\266\210", 0));
        pushButton->setText(QApplication::translate("DELClass", "\346\237\245\350\257\242", 0));
        label_3->setText(QString());
        label->setText(QApplication::translate("DELClass", "\345\210\240\351\231\244\347\217\255\346\254\241", 0));
        label_2->setText(QApplication::translate("DELClass", "\350\257\267\350\276\223\345\205\245\347\217\255\346\254\241\345\217\267", 0));
    } // retranslateUi

};

namespace Ui {
    class DELClass: public Ui_DELClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
