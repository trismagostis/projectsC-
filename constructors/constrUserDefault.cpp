#include <iostream>
using namespace std; 
// Definicja struktury Data:
struct Data {
 int dd, mm, rr;
};
// Definicja klasy Pracownik:
class Pracownik {
public:
 int id {2};
 string imie {"bob"};
 string nazwisko {"the bill"};
 Data data_urodzenia {7,7,1971};
 // Definicja konstruktora domyślnego:
 Pracownik() {
 id = -1;
 imie = "Imię domyślne", nazwisko = "Nazwisko domyślne";
 data_urodzenia = {31, 12, 1899};
 }
 //inicjacja konstruktora ma prio nad inicjacja wewnatrz klasy
/* UWAGA
* W konstruktorze domyślnym zdefiniowanym samodzielnie przez programistę zainicjowano zadanymi wartościami 
* domyślnymi wszystkie zmienne członkowskie klasy Pracownik. Nie jest to jednak wymagane. W ogólności 
* ciało konstruktora domyślnego może być puste.
*/
};
 
int main() {
 // Utworzenie obiektu pracownik jako instancji klasy Pracownik:
 Pracownik pracownik;
 /* UWAGA
 * Po utworzeniu obiektu pracownik przez kompilator następuje automatyczne wywołanie konstruktora 
 * domyślnego zdefiniowanego samodzielnie przez programistę. Wszystkie zmienne członkowskie obiektu 
 * pracownik zostały zainicjowane wartościami domyślnymi określonymi w definicji tego konstruktora.
 */
 // Wyświetlenie wartości zmiennych członkowskich obiektu pracownik:
 cout << "Numer identyfikacyjny " << pracownik.id << endl;
 cout << "Imię: " << pracownik.imie << endl;
 cout << "Nazwisko: " << pracownik.nazwisko << endl;
 cout << "Data urodzenia:" << endl;
 cout << "dzień = " << pracownik.data_urodzenia.dd << endl;
 cout << "miesiąc = " << pracownik.data_urodzenia.mm << endl;
 cout << "rok = " << pracownik.data_urodzenia.rr << endl;
 return 0;
}