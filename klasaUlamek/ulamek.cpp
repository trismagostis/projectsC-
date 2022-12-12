#include "ulamek.h"
#include <iostream>
#include <cmath>
using namespace std;

Ulamek::Ulamek()
{
    licznik = 1;
    mianownik = 1;
};

Ulamek::Ulamek(int l, int m)
{
    licznik = l;
    if (m != 0)
        mianownik = m;
    else
    {
        cout << "Mianownik nie moze miec wartosci 0 ";
        exit(1);
    }
};

void Ulamek::skracaj()
{
    int a, b;
    a = abs(licznik);
    b = abs(mianownik);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    licznik = licznik / a;
    mianownik = mianownik / a;
};
void Ulamek::zapisz(int l, int m)
{
    licznik = l;
    if (m != 0)
        mianownik = m;
    else
    {
        cout << "Mianownik nie moze miec wartosci 0 ";
        exit(1);
    }
};

void Ulamek::wypisz() // przeciazane nazwy funkcji musza roznic sie lista parametrow
{
    skracaj();
    cout << licznik << "/" << mianownik; // definicja metody wypisz
};

Ulamek pomnoz(Ulamek ul1, Ulamek ul2)
{
    Ulamek wynik;
    wynik.licznik = ul1.licznik * ul2.licznik;
    wynik.mianownik = ul1.mianownik * ul2.mianownik;
    return wynik;
};

Ulamek dodaj(Ulamek ul1, Ulamek ul2)
{
    Ulamek wynik;
    wynik.licznik = ul1.licznik * ul2.mianownik + ul2.licznik * ul1.mianownik;
    wynik.mianownik = ul1.mianownik * ul2.mianownik;
    return wynik;
};
