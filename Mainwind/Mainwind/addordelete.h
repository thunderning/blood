#ifndef ADDORDELETE_H
#define ADDORDELETE_H

#include <QtWidgets/QDialog>
#include "ui_addordelete.h"
#include "ADD.h"
#include "DEL.h"

class addordelete : public QDialog
{
	Q_OBJECT

public:
	addordelete(QWidget *parent = 0);
	~addordelete();
	private slots:
	void on_addButton_clicked();
	void on_deleteButton_clicked();
private:
	Ui::addordeleteClass ui;
	ADD ad;
	DEL de;
};

#endif // ADDORDELETE_H

