#include <iostream>
using namespace std; 
// Definicja klasy Prostokat:
class Prostokat {
private:
 // Deklaracja prywatnych zmiennych członkowskich:
 double bok1; 
 double bok2;
 string kolor;
public: 
 // Prototyp konstruktora domyślnego:
 Prostokat();
 // Prototyp konstruktora z parametrami:
 Prostokat(double, double);
 // Prototypy metod publicznych:
 void ustawKolor(string);
 void wyswietlDane();
}; 
// Definicja konstruktora domyślnego:
Prostokat::Prostokat() {
 // Wyświetlenie komunikatu kontrolnego:
 cout << "Komunikat kontrolny: został wywołany konstruktor domyślny ..." 
 << endl;
 // Inicjalizacja zmiennej członkowskiej kolor:
 kolor = "biały";
 bok1=3; 
}
// Definicja konstruktora z parametrami z delegacją konstruktora domyślnego:
Prostokat::Prostokat(double pBok1, double pBok2) : Prostokat::Prostokat() {
 // Wyświetlenie komunikatu kontrolnego:
 cout << "Komunikat kontrolny: został wywołany konstruktor parametryczny ..." 
 << endl;
 // Inicjalizacja zmiennych członkowskich bok1 i bok2:
 bok1 = pBok1;
 bok2 = pBok2;
}
/* UWAGA
* W celu uniknięcia powielania kodu, który jest zawarty w konstruktorze domyślnym,
* wywołanie konstruktora domyślnego umieszczono na liście inicjalizacyjnej konstruktora parametrycznego.
*/ 
// Definicje metod publicznych należących do klasy Prostokat:
void Prostokat::ustawKolor(string pKolor) {
 kolor = pKolor;
}
void Prostokat::wyswietlDane() {
 cout << "Pierwszy bok: " << bok1 << endl;
 cout << "Drugi bok: " << bok2 << endl;
 cout << "Kolor: " << kolor << endl;
}
int main() {
 // Utworzenie obiektu p1: 
 Prostokat p1;
 // Wyświetlenie parametrów prostokąta p1:
 p1.wyswietlDane();
 cout << endl;
 
 // Utworzenie obiektu p2:
 Prostokat p2(1, 2);
 // Wyświetlenie parametrów prostokąta p2:
 p2.wyswietlDane();
 // Ustawienie (modyfikacja) wartości zmiennej członkowskiej kolor dla prostokąta p2:
 p2.ustawKolor("czarny");
 /* UWAGA
 * Modyfikacja wartości prywatnej zmiennej członkowskiej kolor została wykonana przez wywołanie
 * publicznej metody dostępowej ustawKolor().
 */
 // Ponowne wyświetlenie parametrów prostokąta p2:
 p2.wyswietlDane();
 return 0;
}
