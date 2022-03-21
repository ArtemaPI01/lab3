#pragma once
class Boxoffice
{
private:
	int workers;
	int count;
	std::string fio;
public:
	void init(int workers, int count, std::string fio);
	void enter();
	void print();
	void cloakBoxoffice(int x);
};

