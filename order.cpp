#include "order.h"


Order::Order(void)
{
}

Order::Order(int id,double price,int shares){
	orderPrice = price;
	noOfShares = shares;
	orderId = id;
}

Order::~Order(void)
{
}
