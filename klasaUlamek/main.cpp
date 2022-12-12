#include <iostream>
#include <cmath>
#include "ulamek.h"
using namespace std;

int main()
{
int l1,m1,l2,m2;	
cout <<"podaj licznik i mianownik pierwszego ulamka\n";
cin>>l1;
cin>>m1;
cout <<"podaj licznik i mianownik drugiego ulamka\n";
cin>>l2;
cin>>m2;
Ulamek ul1; // pierwszy rodzaj deklaracji obiektu klasy Ulamek
ul1.zapisz(l1,m1); 
Ulamek ul(l2,m2);//drugi rodzaj deklaracji obiektu klasy Ulamek
cout<<endl;
 
ul1.wypisz(); // mamy dwa rodzaje deklaracji poniewaz mamy dwa konstruktory
cout<<" * ";
ul.wypisz();//tylko przez funkcje zapisz i wypisz mamy dostep do licznika i  mianownika
cout<<" = ";
pomnoz(ul1,ul).wypisz();
cout<<endl;
dodaj(ul1,ul).wypisz();
return 0; // dzieki temu uzytkownik moze korzystac z wlasnosci licznik i mianownik tylko w taki sposob
}         // w jaki mu pozwolilismy definiujac metody zapisz i wypisz