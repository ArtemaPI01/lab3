#pragma once
class Security
{
private:
	std::string org;
	int count;
	std::string items;
public:
	void init(std::string org, int count, std::string items);
	void enter();
	void print();
};