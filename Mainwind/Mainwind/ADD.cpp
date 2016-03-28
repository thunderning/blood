#include "ADD.h"
#include "qmessagebox.h"

ADD::ADD(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.okButton->hide();
}

ADD::~ADD()
{
}


void ssort(vector<Train*>* data)
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

void ins(vector<Train*>* data, string des)
{
	string c = des.substr(0, des.find(','));
	int pos = search1(data, c, 0, (*data).size()-1);
	if (pos == -1)
	{
		data->emplace_back();
		(*data)[data->size() - 1] = new Train(des);
		ssort(data);
	}
	else if ((*data)[pos]->flag == 0)
	{
		Train *temp = (*data)[pos];
		(*data)[pos] = new Train(des);
		delete temp;
	}                                 //要加入 票已售出，无法修改
	return;
}
//添加(修改）信息，判断是否可添加，自动查找添加位置，保证数据组有序

int search1(vector<Train*>* data, string des, int first, int last)
{
	int mid = (first + last) / 2;
	if (first>last) return -1;
	if ((*data)[mid]->num == des) return mid;
	if ((*data)[mid]->num < des) return search1(data, des, mid + 1, last);
	if ((*data)[mid]->num > des) return search1(data, des, first, mid - 1);
}
//按车次查找，找到输出存储位置,找不到则输出-1；

void ADD::on_pushButton_clicked()
{
	QString a = ui.lineEdit->text();
	string b = a.toStdString(); 
	string c = b.substr(0, b.find(','));
	if (a.indexOf(',') == -1 || a.indexOf('|') == -1) 
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>格式有误，请按要求重新输入</font>"));
	else
	{
		if (search1(&traindata, c, 0, traindata.size() - 1) == -1)
		{
			ui.label_3->setText(QString(u8"车次不存在，是否添加？"));
			ui.okButton->show();
		}
		else
		{
			ui.label_3->setText(QString(u8"车次存在，是否修改？"));
			ui.okButton->show();
		}
	}
	return;
}

void ADD::on_okButton_clicked()
{
	QString a = ui.lineEdit->text();
	string b = a.toStdString();
	string c = b.substr(0, b.find(','));
	int pos = search1(&traindata, c, 0, traindata.size() - 1);
	if (pos==-1||(pos != -1 && traindata[pos]->flag == 0))
	{
		ins(&traindata, b);
		QMessageBox::information(this, QString(u8"成功"), QString(u8"<font size=5>增改成功！</font>"));
		saveit("TrainNew.txt", "Form.txt");
	}
	else QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>车票已售出，无法修改！</font>"));
	ui.lineEdit->clear();
	ui.label_3->clear();
	return;
}
void ADD::on_cancelButton_clicked()
{
	ui.lineEdit->clear();
	ui.label_3->clear();
	ui.okButton->hide();
	return;
}