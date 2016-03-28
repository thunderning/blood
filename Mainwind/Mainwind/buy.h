#ifndef BUY_H
#define BUY_H

#include <QtWidgets/QDialog>
#include "ui_buy.h"
#include "Train.h"
#include "Formm.h"
class buy : public QDialog
{
	Q_OBJECT

public:
	buy(QWidget *parent = 0);
	~buy();
private:
	Ui::buyClass ui;
	private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void on_okButton_clicked();
	void on_cancelButton_clicked();
};

int search1(vector<Train*>* data, string des, int first, int last);

void saveit(string train, string form);

bool search2(vector<Train*>* data, string sta, string des);

#endif // BUY_H