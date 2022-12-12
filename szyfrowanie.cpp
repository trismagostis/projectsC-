#include <iostream>
#include <cstring>
using namespace std;

int szyfrowanie(char *wprowNapis, char *wyjscNapis)
{
	char klucz[] = {"GADERPOLUKIgaderpoluki"};

	for (int i = 0; i < strlen(wprowNapis); i++)
	{
		for (int j = 0; j < strlen(klucz); j++)
		{
			if (wprowNapis[i] == klucz[j])
			{
				if (j % 2 == 0)
				{
					wyjscNapis[i] = klucz[j + 1];
					break;
				}
				else
				{
					wyjscNapis[i] = klucz[j - 1];
					break;
				}
			}
			else
			{
				wyjscNapis[i] = wprowNapis[i];
			}
		}
	}
	return 0;
}

int odszyfrowanie(char *wprowNapis, char *wyjscNapis)
{
	char klucz[] = {"GADERPOLUKIgaderpoluki"};

	for (int i = 0; i < strlen(wprowNapis); i++)
	{
		for (int j = 0; j < strlen(klucz); j++)
		{
			if (wprowNapis[i] == klucz[j])
			{
				if (j % 2 == 0)
				{
					wyjscNapis[i] = klucz[j + 1];
					break;
				}
				else
				{
					wyjscNapis[i] = klucz[j - 1];
					break;
				}
			}
			else
			{
				wyjscNapis[i] = wprowNapis[i];
			}
		}
	}
	return 0;
}

int main()
{
	char wprowNapis[20];
	char wyjscNapis[20];

	cout << "Podaj napis" << endl;
	cin >> wprowNapis;

	szyfrowanie(wprowNapis, wyjscNapis);

	cout << "Zaszyfrowane: " << wyjscNapis << endl;

	odszyfrowanie(wprowNapis, wyjscNapis);

	cout << "Odszyfrowane: " << wprowNapis << endl;

	return 0;
}