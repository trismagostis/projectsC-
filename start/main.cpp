#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;




int main()
{
	wypelnianie();
	wyszukiwanie();
	return 0;
}

void wypelnianie()
{
	const int n = 50;
	int tab[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		tab[i] = rand() % 101;

	for (int i = 0; i < n; i++)
		cout << tab[i] << " ";
}

 int wyszukiwanie()
{
	const int n = 50;
	int szukana;
	cout<< "podaj liczbe cakowita z przedzialu od 1 do 100\n";
	cin>>szukana;
	int tab[n];
	tab[n] = szukana;
	int i = 0;
	while (tab[i] != szukana)
		i++;
	if (i == n)
		cout << "Nie znaleziono szukanej wartosci\n";
	else
		cout << "Szukana wartosc znajduje sie na pozycji " << i + 1 << endl;
		return i;
}