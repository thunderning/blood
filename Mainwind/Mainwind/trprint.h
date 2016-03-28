#ifndef TRPRINT_H
#define TRPRINT_H

#include <QtWidgets/QDialog>
#include "ui_trprint.h"
#include "Train.h"
#include "Formm.h"
class trprint : public QDialog
{
	Q_OBJECT

public:
	trprint(QWidget *parent = 0);
	~trprint();
private:
	Ui::trprintClass ui;
};



#endif // TRPRINT_H