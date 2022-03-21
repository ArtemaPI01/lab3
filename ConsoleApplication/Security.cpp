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
	std::cout << "Введите организацию: ";
	getline(std::cin, org);
	std::cout << "\nВведите оборудование: ";
	getline(std::cin, items);
	std::cout << "\nВведите кол-во сотрудников: ";
	std::cin >> count;
	while (getchar() != '\n');
}

void Security::print() {
	std::cout << "\nИнформация об охране:\nОрганизация - "<<org<<"\nКол-во охранников - "<<count<<"\nОборудование - "<<items<<"\n", org, count, items;
}