#include "trprint.h"
#include "qmessagebox.h"


trprint::trprint(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.table1->setRowCount(traindata.size());
	ui.table1->setColumnCount(1);
	QStringList headers;
	headers << u8"车次信息" ;
	ui.table1->setHorizontalHeaderLabels(headers);
	
	for (int i = 0; i < traindata.size(); i++)
	{
		QString s;
		s = QString::fromStdString(traindata[i]->num);
		s.push_back(',');
		s.push_back(QString::number(traindata[i]->max,10));
		s.push_back('|');
		for (int j = 0; j < traindata[i]->station.size(); j++)
		{
			s.push_back(QString::fromStdString(traindata[i]->station[j]));
			s.push_back(',');
			s.push_back(QString::number(traindata[i]->leave[j], 10));
			s.push_back('|');
		}
		ui.table1->setItem(i, 0, new QTableWidgetItem(s));
	}
	ui.table1->resizeColumnsToContents();
}

trprint::~trprint()
{
}
