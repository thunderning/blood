#include "back.h"
#include "qmessagebox.h"


back::back(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.okButton->hide();
}

back::~back()
{
}

void getback(vector<Train*>* data, vector<Formm*>* Formms, int des)
{
	int posfom;
	for (posfom = 0; posfom < Formms->size(); posfom++) if ((*Formms)[posfom]->fn == des) break;
	int pos = search1(data, (*Formms)[posfom]->num, 0, data->size() - 1);
	(*data)[pos]->getin((*Formms)[posfom]->sta, (*Formms)[posfom]->des, (*Formms)[posfom]->n);
	Formm* x = (*Formms)[posfom];
	Formms->erase(Formms->begin() + posfom);
	delete x;
}
//退票，删除订单，判断是否重置flag,还差打印订单效果，错误判断

void back::on_pushButton_clicked()
{
	QString a = ui.lineEdit->text();
	int b = a.toInt();
	int posfom;
	for (posfom = 0; posfom < Formms.size(); posfom++) if (Formms[posfom]->fn == b) break;
	if(posfom==Formms.size()) 
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>该订单不存在，请重新输入</font>"));
		ui.lineEdit->clear();
		return;
	}
	else
	{
		ui.label_3->setText(QString(u8"订单存在，是否删除？"));
		ui.okButton->show();
	}
	return;
}

void back::on_okButton_clicked()
{
	QString a = ui.lineEdit->text();
	int b = a.toInt();
	getback(&traindata, &Formms, b);
	QMessageBox::information(this, QString(u8"成功"), QString(u8"<font size=5>退票成功！</font>"));
	saveit("TrainNew.txt", "Form.txt");
	ui.lineEdit->clear();
	ui.label_3->clear();
	ui.okButton->hide();
	return;
}
void back::on_cancelButton_clicked()
{
	ui.lineEdit->clear();
	ui.label_3->clear();
	ui.okButton->hide();
	return;
}