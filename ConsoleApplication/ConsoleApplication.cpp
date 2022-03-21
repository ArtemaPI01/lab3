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
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    Shop* Ashan;
    Owner* Alisher;
    Security ALFA;
    Warehouse *a;
    Boxoffice *b;
    Ashan = new Shop[2];
    for (int i = 0; i < 2; i++)
    {
        Ashan[i].enter();
        Ashan[i].print();
        Ashan[i].cloakShop();
    }
    delete[] Ashan;
    Alisher = new Owner();
    Alisher->enter();
    Alisher->print();
    delete Alisher;
    ALFA.enter();
    ALFA.print();
    a = new Warehouse;
    (*a).init("Арбуз Тыква Огурец", 7);
    (*a).print(); 
    (*a).cloakWarehouse(20);
    (*a).Poisk("Тыква");
    delete a;
    b = new Boxoffice;
    b->init(20, 13, "АБВ");
    b->print();
    b->cloakBoxoffice(100);
    delete b;
    _getch;
}