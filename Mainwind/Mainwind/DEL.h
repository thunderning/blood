#ifndef DEL_H
#define DEL_H

#include <QtWidgets/QDialog>
#include "ui_DEL.h"
#include "Train.h"

class DEL : public QDialog
{
	Q_OBJECT

public:
	DEL(QWidget *parent = 0);
	~DEL();

private:
	Ui::DELClass ui;
private slots:
	void on_pushButton_clicked();
	void on_okButton_clicked();
	void on_cancelButton_clicked();
};

int search1(vector<Train*>* data, string des, int first, int last);

void saveit(string train, string form);

void del(vector<Train*>* data, string des);
#endif // DEL_H
