#ifndef PRINT_H
#define PRINT_H

#include <QtWidgets/QDialog>
#include "ui_print.h"
#include "Train.h"
#include "Formm.h"
class print : public QDialog
{
	Q_OBJECT

public:
	print(QWidget *parent = 0);
	~print();
private:
	Ui::printClass ui;
};



#endif // PRINT_H