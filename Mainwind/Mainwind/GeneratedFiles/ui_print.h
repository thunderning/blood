/********************************************************************************
** Form generated from reading UI file 'print.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_H
#define UI_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_printClass
{
public:
    QPushButton *cancelButton;
    QLabel *label;
    QTableWidget *table1;

    void setupUi(QDialog *printClass)
    {
        if (printClass->objectName().isEmpty())
            printClass->setObjectName(QStringLiteral("printClass"));
        printClass->resize(843, 612);
        printClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        cancelButton = new QPushButton(printClass);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(240, 540, 349, 28));
        label = new QLabel(printClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 351, 91));
        label->setStyleSheet(QString::fromUtf8("font: 50pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        table1 = new QTableWidget(printClass);
        table1->setObjectName(QStringLiteral("table1"));
        table1->setGeometry(QRect(100, 130, 651, 371));

        retranslateUi(printClass);
        QObject::connect(cancelButton, SIGNAL(clicked()), printClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(printClass);
    } // setupUi

    void retranslateUi(QDialog *printClass)
    {
        printClass->setWindowTitle(QApplication::translate("printClass", "Dialog", 0));
        cancelButton->setText(QApplication::translate("printClass", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("printClass", "\350\256\242\345\215\225\346\265\217\350\247\210", 0));
    } // retranslateUi

};

namespace Ui {
    class printClass: public Ui_printClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_H
