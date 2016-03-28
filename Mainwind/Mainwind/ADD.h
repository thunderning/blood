#ifndef ADD_H
#define ADD_H

#include <QtWidgets/QDialog>
#include "ui_ADD.h"
#include "Train.h"

class ADD : public QDialog
{
	Q_OBJECT

public:
	ADD(QWidget *parent = 0);
	~ADD();
	
private:
	Ui::ADDClass ui;
private slots:
	void on_pushButton_clicked();
	void on_okButton_clicked();
	void on_cancelButton_clicked();
};
void ssort(vector<Train*>* data);

void ins(vector<Train*>* data, string des);

void saveit(string train, string form);

int search1(vector<Train*>* data, string des, int first, int last);
#endif // ADD_H
