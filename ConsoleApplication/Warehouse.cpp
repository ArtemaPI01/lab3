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
	printf("���-�� ������� �� ������: ");
	scanf("%d", &count);
	printf("\n�����: ");
	getchar();
	gets_s(products);
	printf("\n���� ��������: ");
	scanf("%s", data);
}

void Warehouse::print() {
	printf("\n�����\n���-�� ������� - %d\n����� - %s\n���� - %s\n", count, products, data);
}

int Warehouse::cloakWarehouse(int x) {
	return (x * 10 / count) * 10;
}