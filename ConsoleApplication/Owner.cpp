#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Owner.h"

void Owner::init(char n[100], int i, int e) { //����� �������� 
	strcpy(fio, n);
	income = i;
	expenses = e;
}

void Owner::enter() {
	printf("������� ��� ���������: ");
	scanf("%s", fio);
	printf("\n������� ������: ");
	scanf("%d", &income);
	printf("\n������� �������: ");
	scanf("%d", &expenses);
}

void Owner::print() {
	printf("\n���������� � ���������:\n��� - %s\n������ - %d\n������� - %d\n������� - %d\n", fio, income, expenses, profitOwner());
}
int Owner::profitOwner() {
	return income - expenses;
}
