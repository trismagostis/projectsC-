#include <iostream>
using namespace std;

class Osoba
{
    int id;
    string imie;

public:
    static int instanceCount;
    Osoba();
    Osoba(int, string);
    Osoba(const Osoba &);
    void greet(string toBeGreeted);
};
int Osoba::instanceCount = 0;
Osoba::Osoba()
{
    id = 0;
    imie = "";
    instanceCount++;
}
Osoba::Osoba(int a_id, string a_imie)
{
    id = a_id;
    imie = a_imie;
    instanceCount++;
}
Osoba::Osoba(const Osoba &temp)
{
    id = temp.id;
    imie = temp.imie;
    instanceCount++;
}
void Osoba::greet(string toBeGreeted)
{
    cout << "Czesc " << toBeGreeted << ", mam na imie ";
    if (imie == "")
        cout << "brak danych";
    else
        cout << imie;
    cout << endl;
}
int main()
{
    Osoba Osoba1;// Osoba1=Osoba()
    Osoba Osoba2(42, "brent");//Osoba Osoba2=Osoba(42,"brent")
    Osoba Osoba3 = Osoba2; //Osoba3=Osoba(Osoba2)
    Osoba1.greet("david");
    Osoba2.greet("david");
    Osoba3.greet("david");
    cout << "Created " << Osoba::instanceCount << " objects";
    return 0;
}