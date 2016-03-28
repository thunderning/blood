#include "getmessage.h"
#include "qmessagebox.h"

getmessage::getmessage(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

getmessage::~getmessage()
{
}



bool readin(string fn_src, vector<Train*>* data)
{
	ifstream fin;
	fin.open(fn_src);
	if (!fin.good()) return false;
	int i = 0;
	while (fin.eof() == 0)
	{
		string st;
		fin >> st;
		(*data).emplace_back();
		(*data)[i] = new Train(st);
		i++;
	}
	fin.close();
	return true;
}
//录入信息

void sort(vector<Train*>* data)
{
	int size = (*data).size() - 1;
	for (int i = size; i > 0; i--)
		for (int j = 0; j < i; j++)
		{
			if ((*data)[j]->num>(*data)[j + 1]->num)
			{
				Train* temp = (*data)[j];
				(*data)[j] = (*data)[j + 1];
				(*data)[j + 1] = temp;
			}
		}
	return;
}
//排序，按照升序

void getmessage::on_buttonBox_accepted()
{
	QString a = ui.lineEdit->text();
	string b = a.toStdString();
	if(!readin(b, &traindata)) QMessageBox::information(this,QString(u8"错误"),QString(u8"<font size=5>您的输入路径有误，请重新输入</font>"));
	else
	{
		QMessageBox::information(this, QString(u8"成功"), QString(u8"<font size=5>录入成功！</font>"));
		ssort(&traindata);
	}
	ui.lineEdit->clear(); 
	return;
}

void getmessage::on_buttonBox_rejected()
{
	ui.lineEdit->clear();
	return;
}
