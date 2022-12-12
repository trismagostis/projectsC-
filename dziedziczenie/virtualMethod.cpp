#include <iostream>
using namespace std; 
// Definicja klasy bazowej Pracownik:
class Pracownik {
public:
 // Prototyp metody wirtualnej zwrocDane():
   virtual void zwrocDane(); 
};
// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel: public Pracownik {
public: 
 // Prototyp metody zwrocDane():

 void zwrocDane();
};
// Definicja klasy pochodnej Wychowawca:
class Wychowawca: public Nauczyciel {
public:
 // Prototyp metody zwrocDane():
 void zwrocDane();
};
/* UWAGA
* W każdej z klas wchodzących w skład łańcucha dziedziczenia zadeklarowano metodę publiczną o takiej samej nazwie 
* oraz identycznych parametrach (liczbie i typie) i typie zwracanej wartości.
* Przy tym metoda zdefiniowana w klasie bazowej Pracownik jest metodą wirtualną.
*/
// Definicje metod zadeklarowanych w klasach Pracownik, Nauczyciel i Wychowawca:
void Pracownik::zwrocDane() {
 cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik" 
 << endl;
}
void Nauczyciel::zwrocDane() {
 cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel" 
 << endl;
}
void Wychowawca::zwrocDane() {
 cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca" 
 << endl;
}
int main() {
 // Deklaracja wskaźnika w_pracownik typu statycznego Pracownik:
 Pracownik *w_pracownik;
 // Utworzenie obiektu pracownik1 jako instancji klasy Pracownik:
 Pracownik pracownik1;
 // Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik1:
 w_pracownik = &pracownik1;
 // Wywołanie metody zwrocDane():
 w_pracownik->zwrocDane(); // Zostanie wywołana metoda z klasy bazowej Pracownik.
 
 // Utworzenie obiektu pracownik2 jako instancji klasy Nauczyciel:
 Nauczyciel pracownik2; 
 w_pracownik = &pracownik2;
 /* UWAGA
 * Realizacja przypisania w_pracownik = &pracownik2; powoduje zmianę typu dynamicznego wskaźnika
 * w_pracownik z typu Pracownik na typ Nauczyciel. Po wykonaniu przypisania wskaźnik ten wskazuje 
 * na obiekt pracownik2 należący do typu Nauczyciel.
 */

 // Wywołanie metody zwrocDane():
 w_pracownik->zwrocDane(); 
 /* UWAGA
 * Ze względu na to, że typem dynamicznym wskaźnika w_pracownik jest typ Nauczyciel, wywołana 
 * zostaje metoda zwrocDane() zdefiniowana w klasie pochodnej Nauczyciel. 
 * Tym samym metoda wirtualna zwrocDane() zdefiniowana w klasie bazowej została przesłonięta przez metodę
 * zwrocDane() z klasy pochodnej.
 */
 // Utworzenie obiektu pracownik3 jako instancji klasy Wychowawca:
 Wychowawca pracownik3; 
 w_pracownik = &pracownik3; // zmiana typu dynamicznego wskaźnika w_pracownik na typ 
// Wychowawca 
 // Wywołanie metody zwrocDane():
 w_pracownik->zwrocDane(); // zostanie wywołana metoda z klasy pochodnej Wychowawca
 return 0;
}//slowo virtual daje nam dostęp do funkcji zwroc dane w klasach potomnych