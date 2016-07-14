#pragma once
class Order
{
public:

	double orderPrice;
	int noOfShares;
	int orderId;

	Order(void);
	Order(int id,double price,int shares);
	~Order(void);
};

