#include <iostream>

using namespace std;

int main()
{
	int wielkosc_tablicy, przeuniecie;
	cin >> wielkosc_tablicy >> przeuniecie;

	int* tablica = new int[wielkosc_tablicy];
	int* tablica_buffor = new int[wielkosc_tablicy - przeuniecie];
	int* tablica_buffor_minus = new int[przeuniecie];

	for (int i = 0; i < wielkosc_tablicy; i++)
		cin >> tablica[i];
	for (int i = 0; i < (wielkosc_tablicy - przeuniecie); i++)
	{
		tablica_buffor[i] = tablica[i + przeuniecie];
	}
	for (int i = 0; i < (przeuniecie); i++)
	{
		tablica_buffor_minus[i] = tablica[i];
	}


	for (int i = 0; i < (wielkosc_tablicy - przeuniecie); i++)
	{
		cout << tablica_buffor[i] << " ";
	}
	for (int i = 0; i < (przeuniecie); i++)
	{
		cout << tablica_buffor_minus[i] << " ";
	}



	delete[] tablica;
	delete[] tablica_buffor;
	delete[] tablica_buffor_minus;

}
