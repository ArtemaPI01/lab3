#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Security.h"

void Security::init(char o[100], int c, char i[100]) {
	strcpy(org, o);
	count = c;
	strcpy(items, i);
}

void Security::enter() {
	printf("������� �����������: ");
	scanf("%s", org);
	printf("\n������� ���-�� �����������: ");
	scanf("%d", &count);
	printf("\n������� ������������: ");
	getchar();
	gets_s(items);
}

void Security::print() {
	printf("\n���������� �� ������:\n����������� - %s\n���-�� ���������� - %d\n������������ - %s\n", org, count, items);
}