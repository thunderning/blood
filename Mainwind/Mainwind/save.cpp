#include "save.h"
#include "qmessagebox.h"


save::save(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

save::~save()
{
}

void saveit(string train, string form)
{
	ofstream fout1, fout2;
	fout1.open(train);
	fout2.open(form);
	for (int i = 0; i < traindata.size(); i++) traindata[i]->out(&fout1);
	fout2 << "������\t" << "����\t" << "��ʼվ\t\t\t" << "�յ�վ\t\t\t" << "Ʊ��\n";
	for (int i = 0; i < Formms.size(); i++) Formms[i]->out(&fout2);
	fout1.close();
	fout2.close();
	return;
}
//���������ݷֱ𱣴浽�ļ�

void save::on_okButton_clicked()
{
	QString s1 = ui.lineEdit->text();
	QString s2 = ui.lineEdit_2->text();
	string fl1, fl2;
	if (s1.isEmpty()) s1.push_back("TrainNew.txt");
	else s1.push_back(".txt");
	if (s2.isEmpty()) s2.push_back("Form.txt");
	else s2.push_back(".txt");
	fl1 = s1.toStdString();
	fl2 = s2.toStdString();
	saveit(fl1, fl2);
	QMessageBox::information(this, QString(u8"�ɹ�"), QString(u8"<font size=5>����ɹ���</font>"));
	ui.lineEdit->clear();
	ui.lineEdit_2->clear();
	return;
}

void save::on_cancelButton_clicked()
{
	ui.lineEdit->clear();
	ui.lineEdit_2->clear();
	return;
}