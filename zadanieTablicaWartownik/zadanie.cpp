#include <iostream>
#include <random>
#include "source.h"
using namespace std;

// void wypelnijTablice(int tablica[]) {
// 	srand (time(NULL));
// 	for (int i =0; i< 50; i++) {
// 		tablica[i] = rand() % 100 +1;
// 	}
// }

// int Wyszukaj(int tablica[], int szukanaLiczba) {
// 	int liczba = 0;
// 	tablica[50] = szukanaLiczba;
// 	while (tablica[liczba] != szukanaLiczba) {
// 		liczba++;
// 	}
// 	return liczba;
// }

int main() {
	int tablica[51];
	wypelnijTablice(tablica);
	int podanaLiczba;
	cout << "Podaj liczbe: " << endl;
	cin >> podanaLiczba;
	int liczba = Wyszukaj(tablica, podanaLiczba);
	
	if (liczba != 50) {
		cout << "Znaleziono liczbe " << podanaLiczba << " na: " << liczba << endl;
	} else {
		cout << "Nie znaleziono" << endl;
	}
	cout << "Liczby: ";
	for (int i =0; i <50; i++) {
		cout << tablica[i];
		if (i != 49) {
			cout << ", ";
		}
	}
	return 0;
}
