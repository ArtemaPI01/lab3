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
	std::cout << "������� ���-�� ���� �������: ";
	std::cin >> workers;
	std::cout << "\n������� ���-�� ����: ";
	std::cin >> count;
	std::cout << "\n������� ��� �������� ������� : ";
	getline(std::cin, fio);
}

void Boxoffice::print() {
	std::cout << "\n�����:\n���-�� ������� - "<< workers <<"\n��� - �� ���� - "<< count <<"\n��� �������� ������� - "<< fio <<"\n";
}
void Boxoffice::cloakBoxoffice(int x) {
	int a;
	if (count - workers < 0)
		a = (x / count) * 2;
	a = (x / workers) * 2;
	std::cout << "\n����� ������������ "<<x<<" �������� - "<<a<<" ������\n";
}
