#ifndef GETMESSAGE_H
#define GETMESSAGE_H

#include <QtWidgets/QDialog>
#include "ui_getmessage.h"
#include "Train.h"

class getmessage : public QDialog
{
	Q_OBJECT

public:
	getmessage(QWidget *parent = 0);
	~getmessage();
private:
	Ui::getmessageClass ui;
private slots:
void on_buttonBox_accepted();
void on_buttonBox_rejected();
};

bool readin(string fn_src, vector<Train*>* data);
void ssort(vector<Train*>* data);

//¬º»Î–≈œ¢
#endif // GETMESSAGE_H
