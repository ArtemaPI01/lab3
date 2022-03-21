#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Boxoffice.h"
#include <string>

void Boxoffice::init(int workers, int count, std::string fio) {
	this->workers = workers;
	this->count = count;
	this->fio = fio;
}

void Boxoffice::enter() {
	std::cout << "Введите кол-во касс рабочих: ";
	std::cin >> workers;
	std::cout << "\nВведите кол-во касс: ";
	std::cin >> count;
	std::cout << "\nВведите ФИО старшего кассира : ";
	getline(std::cin, fio);
}

void Boxoffice::print() {
	std::cout << "\nКасса:\nКол-во рабочих - "<< workers <<"\nКол - во касс - "<< count <<"\nФИО старшего кассира - "<< fio <<"\n";
}
void Boxoffice::cloakBoxoffice(int x) {
	int a;
	if (count - workers < 0)
		a = (x / count) * 2;
	a = (x / workers) * 2;
	std::cout << "\nВремя обслуживания "<<x<<" клиентов - "<<a<<" минуты\n";
}
