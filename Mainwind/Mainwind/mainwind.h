#ifndef MAINWIND_H
#define MAINWIND_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwind.h"
#include "getmessage.h"
#include "addordelete.h"
#include "buy.h"
#include "back.h"
#include "print.h"
#include "save.h"
#include "trprint.h"

class Mainwind : public QMainWindow
{
	Q_OBJECT

public:
	Mainwind(QWidget *parent = 0);
	~Mainwind();
private slots:
	void on_pushButton_read_clicked();
	void on_pushButton_addordelete_clicked();
	void on_pushButton_buy_clicked();
	void on_pushButton_back_clicked();
	void on_pushButton_print_clicked();
	void on_pushButton_save_clicked();
	void on_pushButton_trprint_clicked();
private:
	Ui::MainwindClass ui;
};

#endif // MAINWIND_H
