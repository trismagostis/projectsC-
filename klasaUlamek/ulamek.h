class Ulamek 
{ 
int licznik; //prywatne wlasnosci klasy
int mianownik;
void skracaj(); // deklaracja prywatnej metody skracaj (prototyp)
public:
Ulamek();
Ulamek(int l, int m); // deklaracja konstruktora (przeciazamy nazwe Ulamek) przeciazamy konstruktor
friend Ulamek pomnoz(Ulamek,Ulamek); // deklaracja przyjazni funkcji pomnoz z klasa Ulamek
friend Ulamek dodaj(Ulamek,Ulamek);// deklaracja przyjazni funkcji dodaj z klasa Ulamek
void zapisz(int l,int m); //deklaracja metody publicznej
void wypisz();    // przeciazane nazwy funkcji musza roznic sie lista parametrow 
};
Ulamek pomnoz(Ulamek,Ulamek);
Ulamek dodaj(Ulamek,Ulamek);

