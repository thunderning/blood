/********************************************************************************
** Form generated from reading UI file 'getmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETMESSAGE_H
#define UI_GETMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_getmessageClass
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *getmessageClass)
    {
        if (getmessageClass->objectName().isEmpty())
            getmessageClass->setObjectName(QStringLiteral("getmessageClass"));
        getmessageClass->resize(399, 303);
        getmessageClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(getmessageClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 311, 61));
        label->setStyleSheet(QString::fromUtf8("font: 25pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        lineEdit = new QLineEdit(getmessageClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 150, 321, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color:none;\n"
""));
        buttonBox = new QDialogButtonBox(getmessageClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(getmessageClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), getmessageClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), getmessageClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(getmessageClass);
    } // setupUi

    void retranslateUi(QDialog *getmessageClass)
    {
        getmessageClass->setWindowTitle(QApplication::translate("getmessageClass", "getmessage", 0));
        label->setText(QApplication::translate("getmessageClass", "\350\257\267\350\276\223\345\205\245\344\277\241\346\201\257\350\267\257\345\276\204", 0));
    } // retranslateUi

};

namespace Ui {
    class getmessageClass: public Ui_getmessageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETMESSAGE_H
