#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Owner.h"

void Owner::init(char n[100], int i, int e) { //Метод создания 
	strcpy(fio, n);
	income = i;
	expenses = e;
}

void Owner::enter() {
	printf("Введите ФИО владельца: ");
	scanf("%s", fio);
	printf("\nВведите доходы: ");
	scanf("%d", &income);
	printf("\nВведите расходы: ");
	scanf("%d", &expenses);
}

void Owner::print() {
	printf("\nИнформация о владельце:\nФИО - %s\nДоходы - %d\nРасходы - %d\nПрибыль - %d\n", fio, income, expenses, profitOwner());
}
int Owner::profitOwner() {
	return income - expenses;
}
