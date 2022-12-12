#include <cmath>
#include <iostream>
using namespace std; 
// Definicja szablonu klasy (klasy uogólnionej) Oceny:
template <class T> // szablon ma jeden parametr szablonowy T
class Oceny {
public:
 // Definicja konstruktora domyślnego:
 Oceny() {
 cout << "Wywołanie konstruktora klasy ogólnej ..." << endl;
 }
 // Definicje szablonów zmiennych członkowskich:
 T wyklad;
 T cwiczenia;
 T laboratorium;
 T seminarium;
 // Definicja szablonu funkcji członkowskiej:
 T srednia () {
 return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
 /* UWAGA
 * Jeżeli zmienne członkowskie: wyklad, cwiczenia, laboratorium i seminarium należą do typu całkowitego,
 * mamy do czynienia z dzieleniem całkowitym.
 */
 } 
};
// Definicja specjalizacji szablonu klasy Oceny dla typu double:
// template <> class 
// Oceny <double> { 
// public: 
//  // Definicja konstruktora domyślnego:
//  Oceny() {
//  cout << "Wywołanie konstruktora klasy specjalizowanej ..." << endl;
//  }
//  // Deklaracje zmiennych członkowskich:
//  double wyklad;
//  double cwiczenia;
//  double laboratorium;
//  double seminarium;
//  // Definicja funkcji członkowskiej:
//  double srednia () {
//  return (round(wyklad) + 
//  round(cwiczenia) + 

//  round(laboratorium) +
//  round(seminarium)) / 4;
//  }
 /* UWAGA
 * Kod (implementacja) metody srednia() w klasie specjalizowanej różni się od kodu szablonu metody o tej samej
 * nazwie zdefiniowanej w klasie uogólnionej.
 */
// };
int main() {
 // Utworzenie obiektu oceny1:
 Oceny<int> oceny1 = Oceny<int>(); // jawne wywołanie konstruktora domyślnego
 /* UWAGA
 * Obiekt oceny1 został utworzony na podstawie klasy ogólnej Oceny po jej konkretyzacji dla typu danych int.
 * Wcześniej kompilator sprawdził, że nie jest dostępna specjalizacja szablonu Oceny dla typu int.
 */
 oceny1.wyklad = 3;
 oceny1.cwiczenia = 4;
 oceny1.laboratorium = 3;
 oceny1.seminarium = 4;
 cout << "Średnia ocen semestralnych: " << oceny1.srednia() << endl;
 
 // Utworzenie obiektu oceny2:
 Oceny<double> oceny2; // niejawne wywołanie konstruktora domyślnego
 /* UWAGA
 * Obiekt oceny2 zostaje utworzony na podstawie specjalizacji szablonu klasy Oceny dla typu danych double.
 */
 oceny2.wyklad = 3.3;
 oceny2.cwiczenia = 4.3;
 oceny2.laboratorium = 3.3;
 oceny2.seminarium = 4.3;
 cout << "Średnia ocen semestralnych: " << oceny2.srednia() << endl;
 return 0;
}