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
	if (pos == -1) return;                          //Ҫ�����������
	else if ((*data)[pos]->flag == 0) (*data).erase(data->begin() + pos);          //Ҫ���� Ʊ���۳����޷�ɾ��
	return;
}

void DEL::on_pushButton_clicked()
{
	QString a = ui.lineEdit->text();
	string b = a.toStdString();
	int pos = search1(&traindata, b, 0, (traindata).size()-1);
	if (pos == -1)
	{
		QMessageBox::information(this, QString(u8"����"), QString(u8"<font size=5>�ó��β����ڣ�����������</font>"));
		ui.lineEdit->clear();
		return;
	}
	else if (traindata[pos]->flag == 1)
	{
		QMessageBox::information(this, QString(u8"����"), QString(u8"<font size=5>�ó���Ʊ���۳����޷�ɾ��</font>"));
		ui.lineEdit->clear();
		return;
	}
	else
	{
		ui.label_3->setText(QString(u8"���δ��ڣ��Ƿ�ɾ����"));
		ui.okButton->show();
	}
	return;
}

void DEL::on_okButton_clicked()
{
	QString a = ui.lineEdit->text();
	string b = a.toStdString();
	del(&traindata, b);
	QMessageBox::information(this, QString(u8"�ɹ�"), QString(u8"<font size=5>ɾ���ɹ���</font>"));
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