#pragma once
class Security
{
private:
	char org[100];
	int count;
	char items[100];
public:
	void init(char org[100], int count, char items[100]);
	void enter();
	void print();
};

