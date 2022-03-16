#pragma once
class Owner
{
private:
	char fio[100];
	int income;
	int expenses;
public:
	void init(char name[100], int income, int expenses);
	void enter();
	void print();
	int profitOwner();
};

