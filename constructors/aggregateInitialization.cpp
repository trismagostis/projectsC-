#include <iostream>
using namespace std; 
// Definicja klasy Pracownik:
class Pracownik {
public:
 // Deklaracje zmiennych członkowskich:
 int id;
 string imie;
 string nazwisko;
 // Prototyp funkcji członkowskiej:
 void wyswietlDane();
};
/* UWAGA
* Klasa Pracownik nie zawiera żadnego konstruktora zdefiniowanego przez programistę.
*/
// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik::wyswietlDane() {
 cout << "Numer identyfikacyjny: " << id << endl;
 cout << "Imię: " << imie << endl;
 cout << "Nazwisko: " << nazwisko << endl;
}
int main() {
 // Utworzenie i inicjalizacja agregacyjna obiektu pracownik1:
 Pracownik pracownik1 = {1, "Jan", "Kowalski"};
 /* Uwaga
 * Wszystkie zmienne członkowskie obiektu pracownik1 zainicjowano przy wykorzystaniu inicjalizacji kopiującej 
 * z listą inicjalizacyjną.
 */
 pracownik1.wyswietlDane();
 // Utworzenie i inicjalizacja agregacyjna obiektu pracownik2:
 Pracownik pracownik2 {2, "Adam", "Nowak"};
 /* Uwaga
 * Zmienne członkowskie obiektu pracownik1 zainicjowano z zastosowaniem inicjalizacji bezpośredniej 
 * z listą inicjalizacyjną.
 */
 pracownik2.wyswietlDane();
 return 0;
}