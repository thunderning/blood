#include "Mainwind.h"
#include "Train.h"
#include "Formm.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Mainwind w;
	w.show();
	return a.exec();
}
