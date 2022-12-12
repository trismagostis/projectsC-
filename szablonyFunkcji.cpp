#include <iostream>
using namespace std; 
// Definicja szablonu — wzorca funkcji polePr():
template <typename T> // deklaracja parametru T szablonu
T polePr(T pBok1, T pBok2) {
 return (pBok1 * pBok2);
}
/* UWAGA 
* Szablon (wzorzec) funkcji polePr() został sparametryzowany za pomocą jednego parametru szablonowego, 
* którym jest uogólniony typ danych o nazwie T.
* Oprócz parametru szablonowego T funkcja szablonowa polePr() ma dwa „zwykłe” parametry wejściowe, 
* odpowiadające danym (długościom boków prostokąta) przekazywanym do funkcji: pBok1 i pBok2.
* Parametry te należą do uogólnionego typu danych T. 
* Wartość zwracana na zewnątrz funkcji również należy do typu uogólnionego T.
*/ 
// Definicja szablonu — wzorca funkcji polePr():
template <typename T> // deklaracja parametru szablonowego T
T obwodPr(T pBok1, T pBok2) {
 return (2 * pBok1 + 2 * pBok2);
}
int main() {
 float bok1 {1.5}, bok2 {2.5}; // zmienne pomocnicze reprezentujące boki prostokąta
 // Wywołania funkcji szablonowych polePr() i obwodPr():
 cout << "Pole wynosi " << polePr<int>(bok1, bok2) << endl; 
 cout << "Obwód wynosi " << obwodPr<int>(bok1, bok2) << endl;

 /* UWAGA
 * Wywołania funkcji szablonowych polePr() i obwodPr() mają po trzy argumenty (czyli parametry aktualne).
 * Pierwszym z nich jest typ int. Tym samym typ int jest skonkretyzowanym parametrem szablonowym,
 * czyli skonkretyzowanym typem uogólnionym T.
 * Dwa pozostałe argumenty (bok1 i bok2) należą do typu float, co wynika bezpośrednio z ich deklaracji.
 * Jednakże instancje szablonów funkcji polePr() i obwodPr() zostaną wygenerowane dla skonkretyzowanego 
 * typu szablonowego int, ponieważ właśnie typ int został przekazany do obu funkcji w ich wywołaniach
 * w sposób jawny — bezpośredni. Dlatego też kompilator wykona niejawną konwersję typu argumentów 
 * bok1 i bok2 z typu float na typ int. 
 */
 cout << endl; 
 cout << "Pole wynosi " << polePr(bok1, bok2) << endl;
 cout << "Obwód wynosi " << obwodPr(bok1, bok2) << endl;
 /* UWAGA
 * Wywołania funkcji szablonowych polePr() oraz obwodPr() zostały określone dla argumentów (danych) 
 * należących do typu float. Jednocześnie argument odpowiadający parametrowi szablonowemu T nie jest 
 * przekazywany do funkcji w sposób bezpośredni (jawny). Dlatego też w celu obsługi odpowiedniego typu 
 * danych kompilator wykona konkretyzację funkcji szablonowych polePr() oraz obwodPr() w sposób 
 * automatyczny („po cichu”) — na podstawie typu argumentów, czyli typu float.
 */
 return 0;
}