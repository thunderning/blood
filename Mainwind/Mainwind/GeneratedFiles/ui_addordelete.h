/********************************************************************************
** Form generated from reading UI file 'addordelete.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORDELETE_H
#define UI_ADDORDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addordeleteClass
{
public:
    QPushButton *deleteButton;
    QPushButton *addButton;
    QLabel *label;
    QPushButton *pushButton_comeback;

    void setupUi(QDialog *addordeleteClass)
    {
        if (addordeleteClass->objectName().isEmpty())
            addordeleteClass->setObjectName(QStringLiteral("addordeleteClass"));
        addordeleteClass->resize(400, 304);
        addordeleteClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        deleteButton = new QPushButton(addordeleteClass);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(150, 210, 111, 51));
        deleteButton->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;"));
        addButton = new QPushButton(addordeleteClass);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(150, 130, 111, 51));
        addButton->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;"));
        label = new QLabel(addordeleteClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 201, 51));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        pushButton_comeback = new QPushButton(addordeleteClass);
        pushButton_comeback->setObjectName(QStringLiteral("pushButton_comeback"));
        pushButton_comeback->setGeometry(QRect(0, 260, 93, 28));
        pushButton_comeback->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));\n"
"font: 12pt \"Agency FB\";\n"
"font-weight: bold;\n"
""));

        retranslateUi(addordeleteClass);
        QObject::connect(pushButton_comeback, SIGNAL(clicked()), addordeleteClass, SLOT(reject()));
        QObject::connect(addButton, SIGNAL(clicked()), addordeleteClass, SLOT(accept()));
        QObject::connect(deleteButton, SIGNAL(clicked()), addordeleteClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(addordeleteClass);
    } // setupUi

    void retranslateUi(QDialog *addordeleteClass)
    {
        addordeleteClass->setWindowTitle(QApplication::translate("addordeleteClass", "Dialog", 0));
        deleteButton->setText(QApplication::translate("addordeleteClass", "\345\210\240\351\231\244\347\217\255\346\254\241", 0));
        addButton->setText(QApplication::translate("addordeleteClass", "\345\242\236\346\224\271\347\217\255\346\254\241", 0));
        label->setText(QApplication::translate("addordeleteClass", "\350\257\267\351\200\211\346\213\251\350\257\246\347\273\206\345\212\237\350\203\275", 0));
        pushButton_comeback->setText(QApplication::translate("addordeleteClass", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class addordeleteClass: public Ui_addordeleteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORDELETE_H
