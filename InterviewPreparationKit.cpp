#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int wielkosc;
	cin >> wielkosc;
	int* szuflada = new int[wielkosc];
	for (int i = 0; i < wielkosc; i++)
		cin >> szuflada[i];
	int suma = 1;
	int wynik = 0;
	int buffor = -1;
	for (int j = 0; j < wielkosc; j++)
	{
		for (int i = 1; i < wielkosc - j; i++)
		{
			if (szuflada[j] == szuflada[i + j])
			{
				szuflada[i + j] = buffor--;
				suma++;
			}
		}
		wynik += suma / 2;
		suma = 1;
	}
	cout << wynik;
	delete[]szuflada;
	return 0;
}