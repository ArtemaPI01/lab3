#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Owner.h"
#include <string>


void Owner::init(std::string fio, int income, int expenses) {
	this->fio = fio;
	this->income = income;
	this->expenses = expenses;
}

void Owner::enter() {
	std::cout << "\n������� ��� ���������: ";
	getline(std::cin, fio);
	std::cout << "\n������� ������: ";
	std::cin >> income;
	while (getchar() != '\n');
	std::cout << "\n������� �������: ";
	std::cin >> expenses;
	while (getchar() != '\n');
}

void Owner::print() {
	std::cout <<"\n���������� � ���������:\n��� - "<<fio<<"\n������ - "<<income<<"\n������� - "<<expenses<<"\n������� - "<< profitOwner() <<"\n\n";
}
int Owner::profitOwner() {
	return income - expenses;
}
