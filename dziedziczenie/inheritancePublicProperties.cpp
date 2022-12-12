#include <iostream>
using namespace std; 
// Definicja klasy bazowej Pracownik:
class Pracownik {
public: // wszystkie elementy członkowskie klasy są publiczne
 // Definicje zmiennych członkowskich:
 string imie {""};
 string nazwisko {""};
 // Definicja funkcji członkowskiej:
 string zwrocDane() {
 return imie + " " + nazwisko;
 }
};
// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel: public Pracownik { // dziedziczenie publiczne
public:
 // Definicja zmiennej członkowskiej:
 string przedmiot {""};
 // Definicja funkcji członkowskiej:
 string zwrocDane() {
 return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
 }
};

int main() {
 // Utworzenie obiektu nauczyciel jako instancji klasy pochodnej Nauczyciel:
 Nauczyciel nauczyciel; 
 // Nadanie wartości zmiennym członkowskim obiektu nauczyciel:
 nauczyciel.imie = "Jan"; // zmienna odziedziczona po klasie bazowej
 nauczyciel.nazwisko = "Kowalski"; // zmienna odziedziczona
 nauczyciel.przedmiot = "elektronika"; // zmienna natywna — zdefiniowana w klasie pochodnej
 /* UWAGA
 * Ze względu na to, że dziedziczenie jest publiczne, w klasie pochodnej dostępne są wszystkie publiczne zmienne 
 * członkowskie odziedziczone po klasie bazowej. W klasie pochodnej zmienne te (imie i nazwisko) 
 * również są publiczne.
 */
 // Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
 cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
 return 0;
}