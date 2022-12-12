#include <iostream>
using namespace std;
// Definicja klasy bazowej Pracownik:
class Pracownik
{
public:
    string imie;
    string nazwisko;
    // Definicje konstruktorów:
    Pracownik(){}; // konstruktor domyślny
    Pracownik(string pImie, string pNazwisko)
    { // konstruktor z parametrami
        imie = pImie;
        nazwisko = pNazwisko;
    }

    string zwrocDane()
    {
        return imie + " " + nazwisko;
    }
};
// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel : public Pracownik
{
public:
    string przedmiot;
    // DEFINICJE KONSTRUKTORÓW:
    Nauczyciel(){}; // konstruktor domyślny
    /* UWAGA
     * Przy wywołaniu konstruktora domyślnego zdefiniowanego powyżej zostanie wywołany konstruktor domyślny
     * klasy bazowej, ponieważ nie zdecydowano inaczej.
     */
    //  Nauczyciel(string pImie, string pNazwisko, string pPrzedmiot) { // konstruktor
    //  // z parametrami
    //  imie = pImie;
    //  nazwisko = pNazwisko;
    //  przedmiot = pPrzedmiot;
    //  }
    /* UWAGA
     * Przy wywołaniu konstruktora parametrycznego zdefiniowanego powyżej zostanie wywołany konstruktor
     * domyślny klasy bazowej, ponieważ nie zdecydowano inaczej.
     */
    // Definicja konstruktora parametrycznego z określeniem konstruktora klasy bazowej:
    Nauczyciel(string pImie, string pNazwisko, string pPrzedmiot) : Pracownik(pImie, pNazwisko) { przedmiot = pPrzedmiot; }
    // konstruktor z parametrami
    /* UWAGA
     * Przy wywołaniu konstruktora parametrycznego zdefiniowanego powyżej zostanie wywołany określony —
     * zdefiniowany konstruktor klasy bazowej.
     */
    string zwrocDane()
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
    }
};

int main()
{
    // Utworzenie obiektu nauczyciel jako instancji klasy Nauczyciel:
    Nauczyciel nauczyciel1;
    /* UWAGA
     * Przy tworzeniu obiektu nauczyciel1 z wykorzystaniem konstruktora domyślnego zostaje wywołany
     * automatycznie konstruktor domyślny (bezparametrowy) klasy bazowej Pracownik.
     */
    // Nadanie wartości polom obiektu nauczyciel1:
    nauczyciel1.imie = "Jan";
    nauczyciel1.nazwisko = "Kowalski";
    nauczyciel1.przedmiot = "język angielski";
    // Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej Nauczyciel:
    cout << "Dane nauczyciela: " << nauczyciel1.zwrocDane() << endl;
    // Utworzenie obiektu nauczyciel2 klasy Nauczyciel przez użycie konstruktora z parametrami:
    Nauczyciel nauczyciel2("Adam", "Nowak", "język niemiecki");
    /* UWAGA
     * Przy tworzeniu obiektu nauczyciel2 z użyciem konstruktora z parametrami zostanie wywołany automatycznie
     * konstruktor domyślny (bezparametrowy) klasy bazowej Pracownik.
     */
    cout << "Dane nauczyciela: " << nauczyciel2.zwrocDane() << endl;
    // Utworzenie obiektu nauczyciel3 klasy Nauczyciel:
    Nauczyciel nauczyciel3 = Nauczyciel("Jan", "Nowak", "zawodowy");
    /* UWAGA
     * Przy tworzeniu obiektu nauczyciel3 z użyciem konstruktora z parametrami zostanie wywołany zdefiniowany
     * konstruktor parametryczny klasy bazowej Pracownik.
     */
    //  nauczyciel3.przedmiot = "język francuski";
    cout << "Dane nauczyciela: " << nauczyciel3.zwrocDane() << endl;
    return 0;
}