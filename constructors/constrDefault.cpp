#include <iostream>
using namespace std; 
// Definicja struktury Data:
struct Data {
 // Deklaracje pól struktury:
 int dd, mm, rr;
};
// Definicja klasy Pracownik:
class Pracownik {
public:
 int id;
 string imie, nazwisko;
 Data data_urodzenia;
};
/* UWAGA
* Należy zwrócić uwagę na to, że wewnątrz klasy Pracownik nie jest zawarta definicja żadnego konstruktora.
* Ponadto żadna ze zmiennych członkowskich klasy Pracownik nie została zainicjowana.
*/
int main() {
 // Utworzenie obiektu pracownik jako instancji klasy Pracownik:
 Pracownik pracownik;//niejawne wywołanie konstruktora niejawnego
 // Pracownik pracownik1=Pracownik();wywołanie niejawnego konstruktora klasy Pracownik w sposób jawny 
// wywołanie niejawnego konstruktora klasy Pracownik w sposób niejawny
 /* UWAGA
 * Pomimo że w klasie Pracownik nie zdefiniowano żadnego konstruktora, to po utworzenia obiektu pracownik —
 * czyli po zaalokowaniu dla niego niezbędnej pamięci operacyjnej przez kompilator — 
 * następuje automatyczne wywołanie konstruktora domyślnego bezparametrowego,
 * czyli konstruktora niejawnego. Zmienne członkowskie obiektu nie zostały w tym przypadku zainicjowane!
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