#include "addordelete.h"

addordelete::addordelete(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

addordelete::~addordelete()
{
}

void addordelete::on_addButton_clicked()
{
	this->hide();
	ad.show();
	ad.exec();
}

void addordelete::on_deleteButton_clicked()
{
	this->hide();
	de.show();
	de.exec();
}