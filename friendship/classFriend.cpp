#include <iostream>
#define _USE_MATH_DEFINES // w celu użycia stałej M_PI, która nie jest zdefiniowana w standardowym C/C++
#include <cmath>
using namespace std; 
// Definicja klasy Promien:
class Promien {
 // Deklaracja prywatnej zmiennej członkowskiej:
 double _r;
public:
 // Prototypy publicznych funkcji dostępowych:
 void setPromien(double); // setter
 double getPromien(); // getter
 
 // Deklaracje klas zaprzyjaźnionych:
 friend class Kolo; 
 friend class Kula;
 /* UWAGA
 * Powyższe deklaracje z użyciem słowa kluczowego friend skutkują ustaleniem relacji przyjaźni pomiędzy klasą 
 * Promien a klasami Kolo i Kula. Klasy Kolo i Kula stanowią klasy zaprzyjaźnione klasy Promien.
 */
};
// Definicje metod klasy Promien:
void Promien::setPromien(double r) {
 _r = r;
}
double Promien::getPromien() {
 return _r;
}
// Definicja klasy Kolo:
class Kolo {
/* UWAGA
* Klasa Kolo jest klasą zaprzyjaźnioną klasy Promien.
*/
public:
 double pole(Promien);
 double obwod(Promien); 
};
// Definicje metod klasy Kolo:
double Kolo::pole(Promien promien) {
 return M_PI * promien._r * promien._r;
 /* UWAGA
 * W ciele funkcji członkowskiej pole() należącej do klasy Kolo, która jest „przyjacielem” klasy Promien, 
 * wykorzystano prywatną zmienną członkowską _r zdefiniowaną w klasie Promien.
 */
}

double Kolo::obwod(Promien promien) {
 return 2 * M_PI * promien._r;
 /* UWAGA
 * Metoda obwod() z klasy Kolo, będącej „przyjacielem” klasy Promien, wykorzystuje prywatną zmienną 
 * członkowską _r zdefiniowaną w klasie Promien.
 */
}
// Definicja klasy Kula, która jest zaprzyjaźniona z klasą Promien:
class Kula {
public:
 double objetosc(Promien);
 double pole(Promien);
};
// Definicje metod klasy Kula:
double Kula::objetosc(Promien promien) {
 return double(4)/double(3) * M_PI * promien._r * promien._r * promien._r;
 /* UWAGA
 * W treści funkcji członkowskiej objetosc() należącej do klasy Kula (która jest „przyjacielem” klasy Promien) 
 * wykorzystano prywatną zmienną członkowską _r zdefiniowaną w klasie Promien.
 */
}
double Kula::pole(Promien promien) {
 return 4 * M_PI * promien._r * promien._r;
}
int main() {
 // Utworzenie obiektu promien jako instancji klasy Promien:
 Promien promien; 
 // Utworzenie obiektu kolo:
 Kolo kolo; // Obiekt kolo jest instancją klasy Kolo, która jest „przyjacielem” klasy Promien.
 // Ustalenie promienia koła na 1:
 promien.setPromien(1); // wywołanie metody instancyjnej klasy Promien
 // Obliczenie i prezentacja pola i obwodu koła dla zadanego promienia: 
 cout << "Pole koła wynosi: " << kolo.pole(promien) << endl;
 cout << "Obwód koła wynosi: " << kolo.obwod(promien) << endl;
 /* UWAGA
 * Za pośrednictwem metod pole() i obwod() obiektu kolo, będącego instancją klasy Kolo (która jest klasą
 * zaprzyjaźnioną klasy Promien), uzyskano dostęp do prywatnej zmiennej członkowskiej _r zdefiniowanej 
 * w klasie Promien.
 * Należy zwrócić uwagę, że argument wywołania metod pole() i obwod() jest obiektem promien klasy Promien.
 */
 
 // Utworzenie obiektu kula:
 Kula kula; // obiekt kula jest instancją klasy Kula, która jest „przyjacielem” klasy Promien
 promien.setPromien(2); // wywołanie metody instancyjnej klasy Promien
 cout << "Objętość kuli wynosi: " << kula.objetosc(promien) << endl;
 cout << "Pole powierzchni kuli wynosi: " << kula.pole(promien) << endl;

 /* UWAGA
 * Dostęp do prywatnej zmiennej członkowskiej _r zdefiniowanej w klasie Promien uzyskano za pomocą metod 
 * objetosc() i pole() obiektu kula, będącego instancją klasy Kula. Przy tym klasa Kula jest klasą 
 * zaprzyjaźnioną klasy Promien.
 * Obiektem promien klasy Promien jest argument wywołania metod objetosc() i pole().
 */
 return 0;
}