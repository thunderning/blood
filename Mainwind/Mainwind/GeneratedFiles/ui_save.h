/********************************************************************************
** Form generated from reading UI file 'save.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_H
#define UI_SAVE_H

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

class Ui_saveClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *saveClass)
    {
        if (saveClass->objectName().isEmpty())
            saveClass->setObjectName(QStringLiteral("saveClass"));
        saveClass->resize(665, 458);
        saveClass->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.532, y1:0, x2:0.497199, y2:1, stop:0 rgba(172, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));"));
        layoutWidget = new QWidget(saveClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 390, 461, 33));
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

        label = new QLabel(saveClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 20, 201, 61));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"background-color: none;"));
        label_5 = new QLabel(saveClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 90, 641, 71));
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        lineEdit = new QLineEdit(saveClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 170, 421, 41));
        label_2 = new QLabel(saveClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(470, 170, 91, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        label_6 = new QLabel(saveClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 220, 641, 71));
        label_6->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));
        lineEdit_2 = new QLineEdit(saveClass);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 300, 421, 41));
        label_3 = new QLabel(saveClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 300, 91, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"background-color: none"));

        retranslateUi(saveClass);
        QObject::connect(okButton, SIGNAL(clicked()), saveClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), saveClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(saveClass);
    } // setupUi

    void retranslateUi(QDialog *saveClass)
    {
        saveClass->setWindowTitle(QApplication::translate("saveClass", "Dialog", 0));
        okButton->setText(QApplication::translate("saveClass", "\344\277\235\345\255\230", 0));
        cancelButton->setText(QApplication::translate("saveClass", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("saveClass", "\344\277\241\346\201\257\344\277\235\345\255\230", 0));
        label_5->setText(QApplication::translate("saveClass", "\350\257\267\350\276\223\345\205\245\350\275\246\346\254\241\344\277\241\346\201\257\344\277\235\345\255\230\347\233\256\345\275\225<br/>\357\274\210\350\213\245\344\270\215\350\276\223\345\205\245\357\274\214\345\210\231\351\273\230\350\256\244\346\234\254\346\226\207\344\273\266\344\270\213TrainNew.txt\357\274\211", 0));
        label_2->setText(QApplication::translate("saveClass", ".txt", 0));
        label_6->setText(QApplication::translate("saveClass", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\350\256\242\345\215\225\344\277\241\346\201\257\344\277\235\345\255\230\347\233\256\345\275\225<br/>\357\274\210\350\213\245\344\270\215\350\276\223\345\205\245\357\274\214\345\210\231\351\273\230\350\256\244\346\234\254\346\226\207\344\273\266\344\270\213Form.txt\357\274\211</p></body></html>", 0));
        label_3->setText(QApplication::translate("saveClass", ".txt", 0));
    } // retranslateUi

};

namespace Ui {
    class saveClass: public Ui_saveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_H
