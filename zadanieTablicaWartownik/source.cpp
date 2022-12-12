#include <iostream>
#include <random>
#include "source.h"
using namespace std;

void wypelnijTablice(int tablica[]) {
	srand (time(NULL));
	for (int i =0; i< 50; i++) {
		tablica[i] = rand() % 100 +1;
	}
}
int Wyszukaj(int tablica[], int szukanaLiczba) {
	int liczba = 0;
	tablica[50] = szukanaLiczba;
	while (tablica[liczba] != szukanaLiczba) {
		liczba++;
	}
	return liczba;
}