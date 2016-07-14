#include "orderbook.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OrderBook w;
	w.show();
	return a.exec();
}
