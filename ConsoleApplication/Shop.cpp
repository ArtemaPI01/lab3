#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Shop.h"

void Shop::init(char n[100], char t[100], char s[100], char c[100]) { //����� �������� 
	strcpy(name, n);
	strcpy(type, t);
	strcpy(street, s);
	strcpy(cloak, c);
}

void Shop::enter() {
	printf("������� ��������: ");
	scanf("%s", name);
	printf("\n������� ���: ");
	scanf("%s", type);
	printf("\n������� �����: ");
	getchar();
	gets_s(street);
	printf("\n������� ���� ������: ");
	scanf("%s", cloak);
}

void Shop::print() {
	printf("\n���������� � ��������:\n�������� - %s\n��� - %s\n����� - %s\n���� ������ - %s\n", name, type, street, cloak);
}
void Shop::cloakShop() {
	char str1[5];
	char str2[5];
	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		if (i == 2) i++;
		str1[k] = cloak[i];
		str2[k] = cloak[i + 6];
		k++;
	}
	int a = atoi(str2) / 100 - atoi(str1) / 100;
	int b = atoi(str2) % 100 - atoi(str1) % 100;
	if (b < 0) {
		b += 60;
		a--;
	}
	printf("\n���� ������ - %s\n���� - %d\n������ - %d\n", cloak, a, b);
}
