#include <iostream>
using namespace std;

int main()
{
	int dlugosc_wycieczki;
	cin >> dlugosc_wycieczki;
	int poziom = 0;
	int doliny = 0;
	char* wycieczka = new char[dlugosc_wycieczki];
	for (int i = 0; i < dlugosc_wycieczki; i++)
	{
		cin >> wycieczka[i];
	}
	for (int i = 0; i < dlugosc_wycieczki; i++)
	{
		if (wycieczka[i] == 'U')
		{
			poziom++;
			if (poziom == 0)
				doliny++;
		}
		else if (wycieczka[i] == 'D')
			poziom--;
	}

	cout << doliny;

	return 0;
}