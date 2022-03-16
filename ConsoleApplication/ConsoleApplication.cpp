#define _CRT_SECURE_NO_WARNINGS
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <iostream>
#include <Windows.h>
#include "Shop.h"


int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    char x[] = "dada";
    Shop* Ashan;
    Ashan = new Shop[5];
    for (int i = 0; i < 5; i++)
    {
        Ashan[i].enter();
        Ashan[i].print();
        Ashan[i].cloakShop();
    }
    delete[] Ashan;
    _getch;
}