#define _CRT_SECURE_NO_WARNINGS
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <iostream>
#include <Windows.h>
#include "Shop.h"
#include "Owner.h"
#include "Security.h"


int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    char x[] = "dada";
    Shop* Ashan;
    Owner* Alisher;
    Security ALFA;
    Ashan = new Shop[5];
    for (int i = 0; i < 5; i++)
    {
        Ashan[i].enter();
        Ashan[i].print();
        Ashan[i].cloakShop();
    }
    delete[] Ashan;
    Alisher = new Owner;
    Alisher->enter();
    Alisher->print();
    delete Alisher;
    ALFA.enter();
    ALFA.print();
    _getch;
}