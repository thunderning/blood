#include "mainwind.h"

Mainwind::Mainwind(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Mainwind::~Mainwind()
{
}

void Mainwind::on_pushButton_read_clicked()
{
	getmessage gtm;
	this->hide();
	gtm.show();
	gtm.exec();
	this->show();
}

void Mainwind::on_pushButton_addordelete_clicked()
{
	addordelete aol;
	this->hide();
	aol.show();
	aol.exec();
	this->show();
}

void Mainwind::on_pushButton_buy_clicked()
{
	buy bu;
	this->hide();
	bu.show();
	bu.exec();
	this->show();
}

void Mainwind::on_pushButton_back_clicked()
{
	back ba;
	this->hide();
	ba.show();
	ba.exec();
	this->show();
}

void Mainwind::on_pushButton_print_clicked()
{
	print pr;
	this->hide();
	pr.show();
	pr.exec();
	this->show();
}

void Mainwind::on_pushButton_save_clicked()
{
	save sa;
	this->hide();
	sa.show();
	sa.exec();
	this->show();
}

void Mainwind::on_pushButton_trprint_clicked()
{
	trprint tp;
	this->hide();
	tp.show();
	tp.exec();
	this->show();
}