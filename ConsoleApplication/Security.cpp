#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Security.h"
#include <string>

void Security::init(std::string org, int count, std::string items) {
	this->org = org;
	this->count = count;
	this->items = items;
}

void Security::enter() {
	std::cout << "������� �����������: ";
	getline(std::cin, org);
	std::cout << "\n������� ������������: ";
	getline(std::cin, items);
	std::cout << "\n������� ���-�� �����������: ";
	std::cin >> count;
	while (getchar() != '\n');
}

void Security::print() {
	std::cout << "\n���������� �� ������:\n����������� - "<<org<<"\n���-�� ���������� - "<<count<<"\n������������ - "<<items<<"\n", org, count, items;
}