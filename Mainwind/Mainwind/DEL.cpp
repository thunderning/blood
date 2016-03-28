#include "DEL.h"
#include "qmessagebox.h"


DEL::DEL(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.okButton->hide();
}

DEL::~DEL()
{
}


void del(vector<Train*>* data, string des)
{
	int pos = search1(data, des, 0, (*data).size()-1);
	if (pos == -1) return;                          //要加入输入错误
	else if ((*data)[pos]->flag == 0) (*data).erase(data->begin() + pos);          //要加入 票已售出，无法删除
	return;
}

void DEL::on_pushButton_clicked()
{
	QString a = ui.lineEdit->text();
	string b = a.toStdString();
	int pos = search1(&traindata, b, 0, (traindata).size()-1);
	if (pos == -1)
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>该车次不存在，请重新输入</font>"));
		ui.lineEdit->clear();
		return;
	}
	else if (traindata[pos]->flag == 1)
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>该车次票已售出，无法删除</font>"));
		ui.lineEdit->clear();
		return;
	}
	else
	{
		ui.label_3->setText(QString(u8"车次存在，是否删除？"));
		ui.okButton->show();
	}
	return;
}

void DEL::on_okButton_clicked()
{
	QString a = ui.lineEdit->text();
	string b = a.toStdString();
	del(&traindata, b);
	QMessageBox::information(this, QString(u8"成功"), QString(u8"<font size=5>删除成功！</font>"));
	saveit("TrainNew.txt", "Form.txt");
	ui.lineEdit->clear();
	ui.label_3->clear();
	ui.okButton->hide();
	return;
}
void DEL::on_cancelButton_clicked()
{
	ui.lineEdit->clear();
	ui.label_3->clear();
	ui.okButton->hide();
	return;
}