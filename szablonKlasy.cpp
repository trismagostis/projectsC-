#include <iostream>
using namespace std; 
// Definicja szablonu klasy Oceny:
template <class T, int n> 
/* UWAGA
* Szablon klasy Oceny ma dwa parametry szablonowe: uogólniony typ danych T oraz liczbę całkowitą n.
*/
class Oceny {
public:
 T oceny[n]; // zmienna członkowska
 T max() { // funkcja członkowska
Rozdział 18. t Szablony funkcji i klas 
424
 T temp = oceny[0];
 for (int i = 0; i < n; i++ ) {
 if (oceny[i] > temp) temp = oceny[i];
 }
 return temp;
 }
 T min() { // funkcja członkowska
 T temp = oceny[0];
 for (int i = 0; i < n; i++ ) {
 if (oceny[i] < temp) temp = oceny[i];
 }
 return temp;
 } 
};
int main() {
 // Utworzenie i inicjalizacja obiektu oceny:
 Oceny<int, 3> oceny {3, 5, 4};
 /* UWAGA
 * Szablon klasy Oceny został skonkretyzowany za pomocą argumentów szablonowych: typu danych int 
 * oraz liczby 3. Tym samym została wygenerowana instancja szablonu klasy Oceny — nowa klasa, w której 
 * uogólniony typ danych T został zastąpiony typem całkowitym int, a parametr n — liczbą 3. Obiekt oceny 
 * jest instancją tej właśnie klasy.
 */
 cout << "Najwyższa z ocen: " << oceny.max() << endl;
 cout << "Najniższa z ocen: " << oceny.min() << endl;
 return 0;
}