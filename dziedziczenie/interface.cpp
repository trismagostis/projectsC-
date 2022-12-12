#include <iostream>
using namespace std;
// Definicja interfejsu (interface to klasa ktora moze zawierac tylko metody abstrakcyjne, zmienne i metody statyczne oraz stale) Info:
class Info
{
public:
    // Deklaracja metody abstrakcyjnej:
    virtual void wyswietlDane() = 0;
};
/* UWAGA
 * Klasa abstrakcyjna — interfejs Info zawiera wyłącznie deklarację metody abstrakcyjnej wyswietlDane(),
 * natomiast nie zawiera definicji żadnych innych zmiennych ani funkcji członkowskich.
 */

// Definicja klasy bazowej Osoba:
class Osoba
{
public:
    string imie;
    string nazwisko;
    string szkola;
};
// Definicja klasy pochodnej Pracownik:
class Pracownik : public Info, public Osoba
{
    /* UWAGA
     * Klasa pochodna Pracownik dziedziczy po interfejsie Info oraz klasie Osoba. Jest to dziedziczenie wielokrotne.
     */
public:
    // Deklaracja zmiennej członkowskiej:
    string stanowisko;
    // Definicja metody wyswietlDane() zadeklarowanej w interfejsie Info jako metoda abstrakcyjna:
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Stanowisko: " << stanowisko << endl;
    }
};
// Definicja klasy pochodnej Uczen:
class Uczen : public Info, public Osoba
{
    /* UWAGA
     * Klasa pochodna Uczen dziedziczy po interfejsie Info i klasie Osoba.
     */
public:
    string klasa;
    // Definicja metody wyswietlDane() zadeklarowanej w interfejsie Info jako metoda abstrakcyjna:
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Klasa: " << klasa << endl;
    }
};
void showData(Info &bob){
bob.wyswietlDane();
}

int main()
{
    // Utworzenie obiektu pracownik jako instancji klasy pochodnej Pracownik:
    // Info *dane;
    Pracownik pracownik;
    // Nadanie wartości początkowych zmiennym instancyjnym obiektu pracownik:
    pracownik.imie = "Jan";
    pracownik.nazwisko = "Kowalski";
    pracownik.stanowisko = "nauczyciel";
    // dane = &pracownik;
    cout << "DANE PRACOWNIKA:" << endl;
    // Wywołanie metody wyswietlDane() zdefiniowanej w klasie Pracownik:
    // dane->wyswietlDane();
    showData(pracownik);
    cout << endl;
    Uczen uczen;
    uczen.imie = "Julia";
    uczen.nazwisko = "Nowak";
    uczen.klasa = "4GT";
    // dane = &uczen;
    cout << "DANE UCZNIA:" << endl;
    showData(uczen);
    // dane->wyswietlDane();
    return 0;
}