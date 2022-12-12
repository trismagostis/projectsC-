#include <iostream>
using namespace std;
// Definicja klasy Pracownik:
class Pracownik {
public:
 string imie;
 string nazwisko;
 // Definicje konstruktorów:
 Pracownik() {
 cout << "Komunikat kontrolny: wywołanie konstruktora domyślnego ..." 
 << endl;
 imie = "Imię domyślne";
 nazwisko = "Nazwisko domyślne";
 }; 
 Pracownik(string pImie, string pNazwisko) { 
 cout << "Komunikat kontrolny: wywołanie konstruktora parametrycznego ..."
 << endl;
 imie = pImie;
 nazwisko = pNazwisko;
 };
 // Definicja destruktora:
 ~Pracownik() {
 cout << "Komunikat kontrolny: wywołanie destruktora obiektu ..." 
 << endl;
 };
 // Definicja funkcji członkowskiej:
 void wyswietlDane() {
 cout << "Imię: " << imie << endl;
 cout << "Nazwisko: " << nazwisko << endl;
 }
};
// Definicja zewnętrznej funkcji pomocniczej:
void funkcjaPomocnicza() {
 cout << "Komunikat kontrolny: wywołanie funkcji pomocniczej ..." << endl;
 Pracownik pracownik;
 pracownik.wyswietlDane();
}
int main() {
 { // początek bloku kodu
 // Utworzenie obiektu pracownik1 należącego do klasy Pracownik:
 Pracownik pracownik1;
 pracownik1.wyswietlDane();
 } // koniec bloku 
 /* UWAGA
 * Koniec bloku oznacza koniec życia obiektu pracownik1, 
 * co wiąże się z wywołaniem destruktora i zniszczeniem obiektu.
 */
 cout << endl;
 // Utworzenie obiektu typu Pracownik wskazywanego przez wskaźnik w_pracownik2:
 Pracownik *w_pracownik2 = new Pracownik("Jan", "Kowalski"); 
 w_pracownik2->wyswietlDane(); 
 // Usunięcie obiektu wskazywanego przez wskaźnik w_pracownik2;
 delete w_pracownik2;
 /* UWAGA
 * Użycie operatora delete spowoduje wywołanie destruktora obiektu.
 */
 cout << endl;
 // Wywołanie zewnętrznej funkcji pomocniczej:
 funkcjaPomocnicza();
 cout << endl;
 cout << "Wykonanie pozostałych instrukcji w programie ...";
 return 0;
}