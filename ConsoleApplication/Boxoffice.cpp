#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Boxoffice.h"

void Boxoffice::init(int w, int c, char f[100]) { //����� �������� 
	workers = w;
	count = c;
	strcpy(fio, f);
}

void Boxoffice::enter() {
	printf("������� ���-�� ���� �������: ");
	scanf("%d", &workers);
	printf("\n������� ���-�� ����: ");
	scanf("%d", &count);
	printf("\n������� ��� �������� �������: ");
	scanf("%s", fio);
}

void Boxoffice::print() {
	printf("\n�����:\n���-�� ������� - %d\n���-�� ���� - %d\n��� �������� ������� - %s\n", workers, count, fio);
}
int Boxoffice::cloakBoxoffice(int x) {
	if (count - workers < 0)
		return (x / count) * 2;
	return (x / workers) * 2;
}
