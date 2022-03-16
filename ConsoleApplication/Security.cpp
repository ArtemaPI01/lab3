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
	printf("Введите организацию: ");
	scanf("%s", org);
	printf("\nВведите кол-во сотрудников: ");
	scanf("%d", &count);
	printf("\nВведите оборудование: ");
	getchar();
	gets_s(items);
}

void Security::print() {
	printf("\nИнформация об охране:\nОрганизация - %s\nКол-во охранников - %d\nОборудование - %s\n", org, count, items);
}