#ifndef SAVE_H
#define SAVE_H

#include <QtWidgets/QDialog>
#include "ui_save.h"
#include "Train.h"
#include "Formm.h"
class save : public QDialog
{
	Q_OBJECT

public:
	save(QWidget *parent = 0);
	~save();
private:
	Ui::saveClass ui;
	private slots:
	void on_okButton_clicked();
	void on_cancelButton_clicked();
};

void saveit(string train, string form);

#endif // SAVE_H