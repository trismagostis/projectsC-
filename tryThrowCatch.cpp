#include <iostream>
using namespace std;
int main() {
 try { // początek bloku kodu, w którym jest realizowana inspekcja kodu źródłowego
 // Dane wejściowe:
 double licznik = 1, mianownik = 0;
 if (mianownik == 0) // próba wykrycia wyjątku — błędu
 throw mianownik; // zgłoszenie wyjątku
 /* UWAGA
 * Obiektem zgłaszającym wyjątek (błąd) jest zmienna mianownik należąca do typu double.
 */
 cout << "Licznik = " << licznik << endl;
 cout << "Mianownik = " << mianownik << endl;
 cout << "Iloraz wynosi " << licznik/mianownik << endl;
 /* UWAGA
 * Jeśli zostanie zgłoszony wyjątek, zestaw instrukcji powyżej nie zostanie wykonany.
 */
 }
 catch (double bob) { // nagłówek procedury obsługi wyjątku
 cout << "Błąd! Próba dzielenia przez zero!" << endl;
 /* UWAGA
 * Jeżeli w treści procedury obsługi parametr formalny nie jest wykorzystywany — czyli jak tutaj — 
 * to w nagłówku procedury obsługi można go pominąć. 
 * W takim przypadku nagłówek procedury obsługi błędu miałby postać: catch (double).
 */
 }

 return 0;
}