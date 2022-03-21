#pragma once

class Owner
{
private:
	std::string fio;
	int income;
	int expenses;
public:
	void init(std::string fio, int income, int expenses);
	void enter();
	void print();
	int profitOwner();
};


