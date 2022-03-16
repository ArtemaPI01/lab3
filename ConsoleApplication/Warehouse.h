#pragma once
class Warehouse
{
private:
	int count;
	char products[100];
	char data[100];
public:
	void init(int count, char products[100], char data[100]);
	void enter();
	void print();
	int cloakWarehouse(int x);
};

