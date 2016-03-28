#include "buy.h"
#include "qmessagebox.h"

buy::buy(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

buy::~buy()
{
}

bool search2(vector<Train*>* data, string sta, string des)
{
	for (int i = 0; i < (*data).size(); i++)
	{
		if ((*data)[i]->find(sta, des)) return true;
	}
	return false;
}
//按始终站查找，找到输出true并输出查询结果,缺少输出结果



void buy::on_pushButton_clicked()
{
	QString s = ui.lineEdit->text(), d = ui.lineEdit_2->text();
	string sta = s.toStdString(), des = d.toStdString();
	if (search2(&traindata, sta, des))
	{
		int count = 0;
		for (int i = 0; i < traindata.size(); i++)
			if (traindata[i]->find(sta, des))
				count++;
		ui.table1->setRowCount(count);
		ui.table1->setColumnCount(2);
		QStringList headers;
		headers<< u8"车次" << u8"余票数";
		ui.table1->setHorizontalHeaderLabels(headers);
		count = 0;
		for (int i = 0; i < traindata.size(); i++)
		{
			if (traindata[i]->find(sta, des))
			{
				int min = 10000, j, k;
				for (j = 0; traindata[i]->station[j] != sta; j++);
				for (k = j; traindata[i]->station[k] != des; k++);
				for (; j < k; j++) if (traindata[i]->leave[j] < min) min = traindata[i]->leave[j];
				ui.table1->setItem(count, 0, new QTableWidgetItem(QString::fromStdString(traindata[i]->num)));
				ui.table1->setItem(count, 1, new QTableWidgetItem(QString::number(min,10)));
				count++;
			}
		}
	}
	else
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>没有直达的车次！</font>"));
		ui.lineEdit->clear();
		ui.lineEdit_2->clear();
	}
}

void buy::on_pushButton_2_clicked()
{
	QString s = ui.lineEdit_5->text();
	string x = s.toStdString();
	int i=search1(&traindata, x, 0, traindata.size() - 1);
	if (i == -1)
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>没有该车次，请重新输入！</font>"));
		ui.lineEdit_5->clear();
		ui.lineEdit_6->clear();
	}
	else
	{
		s = QString::fromStdString(traindata[i]->num);
		s.push_back(',');
		s.push_back(QString::number(traindata[i]->max, 10));
		s.push_back('|');
		for (int j = 0; j < traindata[i]->station.size(); j++)
		{
			s.push_back(QString::fromStdString(traindata[i]->station[j]));
			s.push_back(',');
			s.push_back(QString::number(traindata[i]->leave[j], 10));
			s.push_back('|');
		}
		ui.lineEdit_6->setText(s);
	}
}

void buy::on_okButton_clicked()
{
	QString s = ui.lineEdit->text(), d = ui.lineEdit_2->text(), m = ui.lineEdit_3->text(), n = ui.lineEdit_4->text();
	string sta = s.toStdString(), des = d.toStdString(), num = m.toStdString(); 
	int pos = search1(&traindata, num, 0, traindata.size() - 1);
	int nz = n.toInt();
	if (nz <= 0)
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>票数格式错误，请重新输入正整数！</font>"));
		ui.lineEdit_3->clear();
		ui.lineEdit_4->clear();
		return;
	}
	if (s.isEmpty()) sta = traindata[pos]->station[0];
	if (d.isEmpty()) des = traindata[pos]->station[traindata[pos]->station.size() - 1];
	if (pos == -1)
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>车次不存在，请重新输入！</font>"));
		ui.lineEdit_3->clear();
		ui.lineEdit_4->clear();
		return;
	}
	else if (!traindata[pos]->find(sta, des))
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>车次中不包含始终站，请重新输入！</font>"));
		ui.lineEdit_3->clear();
		ui.lineEdit_4->clear();
		return;
	}
	else if (!traindata[pos]->sell(sta, des, nz))
	{
		QMessageBox::information(this, QString(u8"错误"), QString(u8"<font size=5>余票不足，请重新输入！</font>"));
		ui.lineEdit_3->clear();
		ui.lineEdit_4->clear();
		return;
	}
	else
	{
		Formms.emplace_back();
		Formms[Formms.size() - 1] = new Formm(num, sta, des, nz);
		QMessageBox::information(this, QString(u8"成功"), QString(u8"<font size=5>购买成功！</font>"));
		saveit("TrainNew.txt", "Form.txt");
		ui.lineEdit->clear();
		ui.lineEdit_2->clear();
		ui.lineEdit_3->clear();
		ui.lineEdit_4->clear();
		ui.table1->clearContents();
		return;
	}
}

void buy::on_cancelButton_clicked()
{
	ui.lineEdit->clear();
	ui.lineEdit_2->clear();
	ui.lineEdit_3->clear();
	ui.lineEdit_4->clear();
	ui.table1->clearContents();

	return;
}