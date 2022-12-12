#include <iostream>
using namespace std; 
void zmien(int &liczba) {
    liczba = liczba+3;
    cout<<"wartosc zmiennej liczba wewnatrz funkcji "<<liczba<<endl;
}
int main(){
    int liczba=3;
    cout<<"wartosc zmiennej liczba przed wywołaniem funcji "<<liczba<<endl;
    zmien(liczba);
    cout<<"wartosc zmiennej liczba poza funkcja "<<liczba<<endl;
}