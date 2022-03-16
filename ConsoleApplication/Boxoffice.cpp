#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Boxoffice.h"

void Boxoffice::init(int w, int c, char f[100]) { //Метод создания 
	workers = w;
	count = c;
	strcpy(fio, f);
}

void Boxoffice::enter() {
	printf("Введите кол-во касс рабочих: ");
	scanf("%d", &workers);
	printf("\nВведите кол-во касс: ");
	scanf("%d", &count);
	printf("\nВведите ФИО старшего кассира: ");
	scanf("%s", fio);
}

void Boxoffice::print() {
	printf("\nКасса:\nКол-во рабочих - %d\nКол-во касс - %d\nФИО старшего кассира - %s\n", workers, count, fio);
}
int Boxoffice::cloakBoxoffice(int x) {
	if (count - workers < 0)
		return (x / count) * 2;
	return (x / workers) * 2;
}
