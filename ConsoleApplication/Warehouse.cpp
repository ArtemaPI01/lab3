#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Warehouse.h"

void Warehouse::init(int c, char p[100], char d[100]) {
	count = c;
	strcpy(products, p);
	strcpy(data, d);
}

void Warehouse::enter() {
	printf("Кол-во рабочих на складе: ");
	scanf("%d", &count);
	printf("\nТовар: ");
	getchar();
	gets_s(products);
	printf("\nДата поставок: ");
	scanf("%s", data);
}

void Warehouse::print() {
	printf("\nСклад\nКол-во рабочих - %d\nТовар - %s\nДата - %s\n", count, products, data);
}

int Warehouse::cloakWarehouse(int x) {
	return (x * 10 / count) * 10;
}