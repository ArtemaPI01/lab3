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
#include "Warehouse.h"
#include "Boxoffice.h"


int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    char x[] = "dada";
    Shop* Ashan;
    Owner* Alisher;
    Security ALFA;
    Warehouse *a;
    Boxoffice *b;
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
    a = new Warehouse;
    (*a).init(20, x,x);
    (*a).print();
    printf("\nВремя разгрузки %d (тонн) - %d минут", 10, (*a).cloakWarehouse(10));
    delete a;
    b = new Boxoffice;
    b->init(20, 13, x);
    b->print();
    printf("\nВремя обслуживания 100 клиентов - %d минуты\n", b->cloakBoxoffice(100));
    delete b;
    _getch;
}