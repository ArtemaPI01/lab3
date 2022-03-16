#pragma once
class Shop {
private:
	char name[100];
	char type[100];
	char street[100];
	char cloak[100];
public:
	void init(char name[100], char type[100], char street[100], char cloak[100]);
	void enter();
	void print();
	void cloakShop();
};

