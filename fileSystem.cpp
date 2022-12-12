// Pobiera 2 liczby z plikow i zapisuje sume w trzecim pliku
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv){
    ifstream odczyt("transformator");
    ifstream odczyt2("magnetron");
    int o1,o2,suma;
    odczyt >> o1;
    odczyt2 >> o2;
    suma=o1+o2;
    cout << "Suma:" << suma << "\no1:" << o1 << "\no2:" << o2;
    ofstream cfvgb("mikrofalówka",ios_base::out | ios_base::app);
    cfvgb << suma << endl;
    cfvgb.close();
    odczyt.close();
    odczyt2.close();
    return 0;
} 
