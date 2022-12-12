#include <iostream>
using namespace std; 
// Definicja struktury Data:
struct Data {
 int dd, mm, rr;
};
// Definicja klasy Pracownik:
class Pracownik {
public:
 // Deklaracje zmiennych członkowskich:
 int id;
 string imie, nazwisko;
 // Deklaracja zmiennej członkowskiej data_urodzenia połączona z inicjalizacją jej elementów składowych 
 // wartościami domyślnymi:
 Data data_urodzenia {31, 12, 1899};
 // Prototyp konstruktora domyślnego:
 Pracownik();
 // Prototypy konstruktorów parametrycznych:
 Pracownik(int, string, string);
 Pracownik(int, string, string, Data);
 // Prototyp publicznej metody dostępowej:
 void wyswietlDane();
};
// Definicja konstruktora domyślnego:
Pracownik::Pracownik() {
 id = -1;
 imie = "Imię domyślne";
 nazwisko = "Nazwisko domyślne";
 data_urodzenia = {1, 1, 1900};
}
// Definicje konstruktorów parametrycznych:
Pracownik::Pracownik(int pId, string pImie, string pNazwisko) {
 id = pId;
 imie = pImie;
 nazwisko = pNazwisko;
}
Pracownik::Pracownik(int pId, string pImie, string pNazwisko, 
 Data pDataUrodzenia) {
 id = pId;
 imie = pImie;
 nazwisko = pNazwisko;
 data_urodzenia = pDataUrodzenia;
} 
// Definicja metody wyswietlDane()
void Pracownik::wyswietlDane() {
 cout << "Numer identyfikacyjny: " << id << endl;
 cout << "Imię: " << imie << endl;
 cout << "Nazwisko: " << nazwisko << endl;
 cout << "Data urodzenia:" << endl;
 cout << "dzień = " << data_urodzenia.dd << endl;
 cout << "miesiąc = " << data_urodzenia.mm << endl;
 cout << "rok = " << data_urodzenia.rr << endl;
}

// PROGRAM GŁÓWNY
int main() {
 // Utworzenie obiektu pracownik1 będącego instancją klasy Pracownik:
 Pracownik pracownik1=Pracownik();
 /* UWAGA
 * Po zaalokowaniu pamięci dla obiektu pracownik1 został wywołany w sposób jawny konstruktor domyślny 
 * zdefiniowany przez programistę. Zmienne członkowskie tego obiektu zostały zainicjowane wartościami
 * domyślnymi określonymi w definicji tego konstruktora.
 */
 // Wyświetlenie wartości przechowywanych w zmiennych członkowskich obiektu pracownik1:
 pracownik1.wyswietlDane();
 cout << endl;
 
 // Utworzenie obiektu pracownik2 jako instancji klasy Pracownik:
 Pracownik pracownik2=Pracownik(1, "Jan", "Kowalski");
 /* UWAGA
 * Po zarezerwowaniu pamięci operacyjnej dla obiektu pracownik2 został wywołany w sposób jawny 
 * konstruktor parametryczny zdefiniowany przez programistę. Zmienne członkowskie id, imie i nazwisko obiektu
 * zostały zainicjowane zadanymi wartościami argumentów wywołania tego konstruktora. 
 * Zmienna członkowska data_urodzenia została zainicjowana wartościami domyślnymi jej składowych, które
 * zostały ustalone w obrębie definicji klasy.
 */
 pracownik2.wyswietlDane();
 cout << endl;
 
 // Utworzenie obiektu pracownik3 jako instancji klasy Pracownik:
 Pracownik pracownik3(10, "Adam", "Nowak", {10, 10, 2000});
 /* UWAGA
 * Konstruktor parametryczny został wywołany w sposób niejawny. Wszystkie zmienne członkowskie obiektu
 * pracownik3 zostały zainicjowane zadanymi wartościami argumentów wywołania tego konstruktora.
 */
 pracownik3.wyswietlDane();
 return 0;
}