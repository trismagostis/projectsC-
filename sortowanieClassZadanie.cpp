#include <iostream>
using namespace std;

class Sortowanie
{
    int tablicaDoSortowania[10];
    void searchMaxVal()
    {
        int maxVal = tablicaDoSortowania[0];
        for (int i = 1; i < 10; ++i)
        {

            if (maxVal < tablicaDoSortowania[i])
                maxVal = tablicaDoSortowania[i];
        }
        cout << "Największy element = " << maxVal << endl;
    };

public:
    void setTab()
    {
        for (int x = 0; x < 10; x++)
        {
            cout << "Podaj " << x + 1 << " element tablicy:" << endl;
            cin >> tablicaDoSortowania[x];
        }
        cout << "Nieposortowana tablica wyglada tak: " << endl;
        for (int x = 0; x < 10; x++)
        {
            cout << tablicaDoSortowania[x] << endl;
        }
    }
    void getTab()
    {
        cout << "Posortowana tablica wyglada tak: " << endl;
        for (int x = 0; x < 10; x++)
        {
            cout << tablicaDoSortowania[x] << endl;
        }
    };
    void getMaxVal()
    {
        searchMaxVal();
    }
    void posortuj()
    {
        int max;
        for (int i = 0; i < 10; i++)
        {
            max = i;
            for (int j = i + 1; j < 10; j++)
                if (tablicaDoSortowania[j] > tablicaDoSortowania[max])
                    max = j;

            swap(tablicaDoSortowania[max], tablicaDoSortowania[i]);
        }
    }
};
int main()
{
    Sortowanie sort1;
    sort1.setTab();
    sort1.getMaxVal();
    sort1.posortuj();
    sort1.getTab();
    return 0;
}