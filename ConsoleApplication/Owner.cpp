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
	std::cout << "\nВведите ФИО владельца: ";
	getline(std::cin, fio);
	std::cout << "\nВведите доходы: ";
	std::cin >> income;
	while (getchar() != '\n');
	std::cout << "\nВведите расходы: ";
	std::cin >> expenses;
	while (getchar() != '\n');
}

void Owner::print() {
	std::cout <<"\nИнформация о владельце:\nФИО - "<<fio<<"\nДоходы - "<<income<<"\nРасходы - "<<expenses<<"\nПрибыль - "<< profitOwner() <<"\n\n";
}
int Owner::profitOwner() {
	return income - expenses;
}
