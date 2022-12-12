#include <iostream>
using namespace std;
class Egzamin
{
private:
    string data;
    double godzina_rozpoczecia;
    double godzina_zakonczenia;

public:
    Egzamin(){};
    Egzamin(string pData, double pgodzina_rozpoczecia, double pgodzina_zakonczenia, string pnazwa_przedmiotu)
    {
        data = pData;
        godzina_rozpoczecia = pgodzina_rozpoczecia;
        godzina_zakonczenia = pgodzina_zakonczenia;
        nazwa_przedmiotu = pnazwa_przedmiotu;
    };
    ~Egzamin(){};
    double getGodzina_rozpoczecia()
    {
        return godzina_rozpoczecia;
    }
    double getGodzina_zakonczenia()
    {
        return godzina_zakonczenia;
    }
    string nazwa_przedmiotu;
    void start(double pgodzina_rozpoczecia)
    {
        godzina_rozpoczecia = pgodzina_rozpoczecia;
    }

    void stop(double czas_egzaminu)
    {
        godzina_zakonczenia = godzina_rozpoczecia + czas_egzaminu;
    }
};
class Egzamin_praktyczny : public Egzamin
{
public:
    string forma, opis;
    void stop()
    {
        Egzamin::stop(2.5);
    }
};

int main()
{
    Egzamin e_programowanie = Egzamin();
    e_programowanie.nazwa_przedmiotu = "programowanie aplikacji";
    e_programowanie.start(12);
    cout << "egzamin z przedmiotu " << e_programowanie.nazwa_przedmiotu << " rozpocznie sie dzis o godz. " << e_programowanie.getGodzina_rozpoczecia() << " i zgodnie z regulaminem zakonczy sie po uplywie 120 minut"<<endl;
    Egzamin_praktyczny e_programowanie_praktyczny;
    e_programowanie_praktyczny.start(12);
    e_programowanie_praktyczny.stop();
    cout<<e_programowanie_praktyczny.getGodzina_zakonczenia();
    return 0;
}