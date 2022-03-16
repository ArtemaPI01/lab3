#pragma once
class Boxoffice
{
private:
	int workers;
	int count;
	char fio[100];
public:
	void init(int workers, int count, char fio[100]);
	void enter();
	void print();
	int cloakBoxoffice(int x);
};

