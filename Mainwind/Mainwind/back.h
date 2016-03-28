#ifndef BACK_H
#define BACK_H

#include <QtWidgets/QDialog>
#include "ui_back.h"
#include "Train.h"

class back : public QDialog
{
	Q_OBJECT

public:
	back(QWidget *parent = 0);
	~back();

private:
	Ui::backClass ui;
	private slots:
	void on_pushButton_clicked();
	void on_okButton_clicked();
	void on_cancelButton_clicked();
};

int search1(vector<Train*>* data, string des, int first, int last);

void saveit(string train, string form);

void getback(vector<Train*>* data, vector<Formm*>* Formms, int des);
#endif // BACK_H
