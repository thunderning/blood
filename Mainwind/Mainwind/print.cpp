#include "print.h"
#include "qmessagebox.h"


print::print(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.table1->setRowCount(Formms.size());
	ui.table1->setColumnCount(5);
	QStringList headers;
	headers << u8"订单号" << u8"车次"<<u8"出发站"<<u8"到达站"<<u8"票数";
	ui.table1->setHorizontalHeaderLabels(headers);
	for (int i = 0; i < Formms.size(); i++)
	{
		QString s;
		if (Formms[i]->fn < 10)
		{
			s = "00";
			s.push_back(QString::number(Formms[i]->fn, 10));
		}
		else if (Formms[i]->fn < 100)
		{
			s = "0";
			s.push_back(QString::number(Formms[i]->fn, 10));
		}
		else s = QString::number(Formms[i]->fn, 10);
		ui.table1->setItem(i, 0, new QTableWidgetItem(s));
		ui.table1->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(Formms[i]->num)));
		ui.table1->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(Formms[i]->sta)));
		ui.table1->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(Formms[i]->des)));
		ui.table1->setItem(i, 4, new QTableWidgetItem(QString::number(Formms[i]->n)));
	}
}

print::~print()
{
}
