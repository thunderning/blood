/********************************************************************************
** Form generated from reading UI file 'trprint.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRPRINT_H
#define UI_TRPRINT_H

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

class Ui_trprintClass
{
public:
    QLabel *label;
    QPushButton *cancelButton;
    QTableWidget *table1;

    void setupUi(QDialog *trprintClass)
    {
        if (trprintClass->objectName().isEmpty())
            trprintClass->setObjectName(QStringLiteral("trprintClass"));
        trprintClass->resize(841, 613);
        trprintClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(trprintClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 351, 91));
        label->setStyleSheet(QString::fromUtf8("font: 50pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        cancelButton = new QPushButton(trprintClass);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(240, 550, 349, 28));
        table1 = new QTableWidget(trprintClass);
        table1->setObjectName(QStringLiteral("table1"));
        table1->setGeometry(QRect(10, 140, 821, 371));

        retranslateUi(trprintClass);
        QObject::connect(cancelButton, SIGNAL(clicked()), trprintClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(trprintClass);
    } // setupUi

    void retranslateUi(QDialog *trprintClass)
    {
        trprintClass->setWindowTitle(QApplication::translate("trprintClass", "Dialog", 0));
        label->setText(QApplication::translate("trprintClass", "\350\275\246\346\254\241\346\265\217\350\247\210", 0));
        cancelButton->setText(QApplication::translate("trprintClass", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class trprintClass: public Ui_trprintClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRPRINT_H
