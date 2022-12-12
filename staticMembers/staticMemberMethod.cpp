#include <iostream>
using namespace std; 
// Definicja klasy Pracownik:
class Pracownik {
 // Deklaracja prywatnej zmiennej członkowskiej statycznej o nazwie s_szkola:
 private:
static string s_szkola;
public:

 // Deklaracje zmiennych członkowskich instancyjnych:
 string imie;
 string nazwisko;
 // Prototyp metody statycznej s_zwrocSzkola():
 static string s_zwrocSzkola();
 // Definicja metody statycznej s_ustawSzkola():
 static void s_ustawSzkola(string pSzkola) {
 s_szkola = pSzkola;
 } 
 // Definicja metody instancyjnej wyswietlDane():
 void wyswietlDane() {
 cout << "Imię: " << imie << endl;
 cout << "Nazwisko: " << nazwisko << endl;
 cout << "Szkoła :" << s_szkola << endl;
 }
};
// Inicjalizacja zmiennej klasowej s_szkola:
string Pracownik::s_szkola = "Technikum Informatyczne";
// Definicja metody statycznej s_pobierzSzkola():
string Pracownik::s_zwrocSzkola() {
 return s_szkola;
}
// PROGRAM GŁÓWNY
int main() {
 // Utworzenie obiektu pracownik1:

 Pracownik pracownik1;
 // Nadanie wartości zmiennym członkowskim instancyjnym obiektu pracownik1:
 pracownik1.imie = "Jan";
 pracownik1.nazwisko = "Kowalski";
 cout << "Dane pracownika: " << endl;
 // Odwołanie się do zmiennych instancyjnych obiektu pracownik1:
 cout << "Imię: " << pracownik1.imie << endl;
 cout << "Nazwisko: " << pracownik1.nazwisko << endl;

 // Odwołanie się do zmiennej klasowej s_szkola za pośrednictwem metody statycznej s_pobierzSzkola():
 cout << "Szkoła: " << Pracownik::s_zwrocSzkola()<< endl;//tak używamy statycznej wlasnosci prywatnej
 // Utworzenie obiektu pracownik2:
 Pracownik pracownik2;
 // Nadanie wartości zmiennym instancyjnym obiektu pracownik2:
 pracownik2.imie = "Adam";
 pracownik2.nazwisko = "Nowak";
 // Zmiana wartości zmiennej klasowej s_szkola za pośrednictwem metody statycznej s_ustawSzkola():
 Pracownik::s_ustawSzkola("Technikum Elektroniczne");
 cout << "Dane pracownika: " << endl;
 cout << "Imię: " << pracownik2.imie << endl;
 cout << "Nazwisko: " << pracownik2.nazwisko << endl;
 cout << "Szkoła: " << Pracownik::s_zwrocSzkola() << endl;
 return 0;
}