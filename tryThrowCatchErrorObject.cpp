#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
// Definicja struktury (klasy) abstrakcyjnej Wyjatek:
struct Wyjatek {
 // Deklaracja metody abstrakcyjnej message():
 virtual void komunikat() = 0;

 /* UWAGA
 * Definicje metody komunikat() o różnej funkcjonalności są zawarte w klasach Format i Zakres, 
 * które są klasami pochodnymi klasy Wyjatek.
 */
};
// Definicja klasy Format, która jest klasą pochodną klasy Wyjatek:
class Format : public Wyjatek {
 // Deklaracja prywatnej zmiennej członkowskiej:
 string sOcena;
public:
 // Definicja konstruktora:
 Format(string psOcena)  {
    sOcena=psOcena;

 }
 // Definicja metody komunikat() odziedziczonej po klasie abstrakcyjnej Wyjatek:
void komunikat() {
  cout << "Uwaga błąd! Format danej wejściowej " << sOcena 
 << " nie odpowiada liczbie całkowitej!" << endl;
  }
};
// Definicja klasy Zakres, która jest klasą pochodną klasy Wyjatek:
class Zakres : public Wyjatek {
int ocena;
public:
 Zakres(int pocena)  {
    ocena=pocena;
 }
 // Definicja metody komunikat() odziedziczonej po klasie abstrakcyjnej Wyjatek:
void komunikat() {

 cout << "Uwaga błąd! Wartość danej wejściowej " << ocena 
 << " nie mieści się w zakresie <1, 6>!" << endl;

 }
};

// Definicje funkcji pomocniczych:
bool wejscieFormat(string sDana) {
 for (int i = 0; i < sDana.length(); i++) {
 if (isdigit(sDana[i]) == false) {
 return false;
 }
 }
 return true;
}
bool wejscieZakres(int iDana) {
 if ((iDana >= 1) && (iDana <= 6)) return true; 
 else return false; 
}
int main() {
 try {
 // Deklaracja i inicjalizacja danych wejściowych reprezentujących ocenę semestralną:
 string sOcena = "1a0"; // Wartość danych wejściowych celowo nie odpowiada ocenie szkolnej.
 // Inspekcja kodu źródłowego w celu wykrycia błędu związanego z nieprawidłowym formatem 
 // danych wejściowych:
 if (wejscieFormat(sOcena) == false) 
 throw Format(sOcena); // zgłoszenie obiektu stanowiącego instancję klasy Format
 // Konwersja łańcucha na liczbę całkowitą:
 int ocena = stoi(sOcena);
 // Inspekcja kodu źródłowego w celu wykrycia błędu wynikającego z błędnej wartości danych wejściowych: 
 if (wejscieZakres(ocena) == false)
 throw Zakres(ocena); // zgłoszenie obiektu należącego do klasy Zakres 
 // Zestaw instrukcji, który zostanie wykonany, jeśli nie wykryto (i nie zgłoszono) żadnego błędu:
 switch (ocena) {
 case 1:
 cout << "Uczeń nie otrzymuje promocji do następnej klasy ..."
 << endl;
 break;
 case 2: 
 case 3:
 case 4:
 case 5:
 case 6:
 cout << "Uczeń otrzymuje promocję do następnej klasy ..." 
 << endl;
 break;
 }

 }
 // Procedura obsługi błędu należącego do klasy Wyjatek:
 catch(Wyjatek& wyjatek) {
wyjatek.komunikat();
 /* UWAGA
 * Strumień cerr jest standardowym strumieniem błędów. 
 */
 }
}