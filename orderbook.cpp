#include "orderbook.h"
#include "order.h"

QList<Order> buyOrderList;
QList<Order> sellOrderList;

OrderBook::OrderBook(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	myDelegate = new MyDelegate(this);

	setupControls();

	// Create new models
    model1 = new QStandardItemModel(this);
	model2 = new QStandardItemModel(this);

	model1->setColumnCount(3);
	model2->setColumnCount(3);

	buyId = 0;
	sellId = 0;

	headerList << "Order Id" << "# of Shares" <<"Price per Share";

	//setting model headers
	model1->setHorizontalHeaderLabels(headerList);
	model2->setHorizontalHeaderLabels(headerList);

	attachModelToView();
}

OrderBook::~OrderBook()
{

}

void OrderBook::setupControls(){

	ui.centralWidget->setMaximumHeight(this->geometry().height());//Qt::Window
	ui.centralWidget->setMinimumHeight(this->height());	
	ui.centralWidget->setMaximumWidth(this->geometry().width());//Qt::Window
	ui.centralWidget->setMinimumWidth(this->width());

	//add order controls
	ui.comboBoxOrderTypeL->addItem("Buy Order");
	ui.comboBoxOrderTypeL->addItem("Sell Order");
	ui.spinBoxNoSharesL->setMaximum(10000);
	ui.spinBoxNoSharesL->setMinimum(1);
	ui.doubleSpinBoxSharePriceL->setMaximum(1000);
	ui.doubleSpinBoxSharePriceL->setMinimum(1);

	//edit order controls
	ui.comboBoxOrderTypeR->addItem("Buy Order");
	ui.comboBoxOrderTypeR->addItem("Sell Order");
	ui.spinBoxOrderIdR->setMinimum(1);
	ui.spinBoxNoSharesR->setMinimum(1);
}

void OrderBook::attachModelToView(){

	// Attach the models to the views
	ui.tableView_2->setModel(model1);
	ui.tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tableView_2->verticalHeader()->setVisible(false);
	ui.tableView->setModel(model2);
	ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tableView->verticalHeader()->setVisible(false);
	
    
    // Tie the View with the new MyDelegate instance
    // If we do not set this, it will use default delegate
    ui.tableView->setItemDelegate(myDelegate);
	ui.tableView_2->setItemDelegate(myDelegate);
}

void OrderBook::addOrder(){

	//QString type = ui.comboBoxOrderTypeL->currentText();
	int type = ui.comboBoxOrderTypeL->currentIndex();
	double price = ui.doubleSpinBoxSharePriceL->value();
	int shares = ui.spinBoxNoSharesL->value();

	if(type==0){//buy order
		
		buyId++;
		buyOrder = new Order(buyId,price,shares);
		buyOrderList.append(*buyOrder);  //buyOrderList.insert(buyOrderList.size(),buyOrder);
		model1->setRowCount(buyId);
		generateData(&buyOrderList,1);
		ui.tableView_2->setModel(model1);
	}
	else if(type==1){//sell order
	
		sellId++;
		sellOrder = new Order(sellId,price,shares);
		sellOrderList.append(*sellOrder);
		model2->setRowCount(sellId);
		generateData(&sellOrderList,2);
		ui.tableView->setModel(model2);
	}
}

void OrderBook::generateData(QList<Order> *list, int side){

   	QModelIndex index1,index2,index3;

	for(int row = 0; row < list->size(); row++)//row < 4
    {
        
		if(side==1){

			if(row>=4){
				//number of rows should get incremented
			}

			index1 = model1->index(row,0,QModelIndex());
			index2 = model1->index(row,1,QModelIndex());
			index3 = model1->index(row,2,QModelIndex());
              
			model1->setData(index1,list->at(row).orderId);
			model1->setData(index2,list->at(row).noOfShares);
			model1->setData(index3,list->at(row).orderPrice);
		}
		else if(side==2){

			index1 = model2->index(row,0,QModelIndex());
			index2 = model2->index(row,1,QModelIndex());
			index3 = model2->index(row,2,QModelIndex());
              
			model2->setData(index1,list->at(row).orderId);
			model2->setData(index2,list->at(row).noOfShares);
			model2->setData(index3,list->at(row).orderPrice);
		}
    }
}

void OrderBook::LoadData(){

}
