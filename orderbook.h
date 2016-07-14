#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <QtWidgets/QMainWindow>
#include "ui_orderbook.h"

#include <QTableView>
#include <QItemDelegate>
#include <QStandardItemModel>
#include <QStringList>
#include <QString>

#include "mydelegate.h"
#include "order.h"

namespace Ui {
class OrderBook;
}

class OrderBook : public QMainWindow
{
	Q_OBJECT

public:
	explicit OrderBook(QWidget *parent = 0);
	~OrderBook();
	void generateData(QList<Order> *list, int side);
	void LoadData();
	void setupControls();
	void attachModelToView();

public slots:
	void addOrder();

private:
	Ui::OrderBookClass ui;
	QStandardItemModel *model1;
	QStandardItemModel *model2;
	// Make a member pointer to a new MyDelegate instance
    MyDelegate *myDelegate;
	int buyId;
	int sellId;
	Order *buyOrder;
	Order *sellOrder;
	QStringList headerList;
};

#endif // ORDERBOOK_H
