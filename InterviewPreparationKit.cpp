#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int activityNotifications(vector<int> &tablica, int d) {
	int wynikBanku = 0;
	int length;
	length = tablica.size() - d;
	for (int i = 0; i < length; i++)
	{
		vector<int>tabliczka(d);
		for (int j = 0; j < d; j++)
		{
			tabliczka[j]=tablica[j+i];		
		}
		double wynik = 0;
		double a = 0, b = 0;
		sort(tabliczka.begin(), tabliczka.end());
		if (tabliczka.size() % 2 != 0)
			wynik = tabliczka[tabliczka.size() / 2];
		else
		{
			a = tabliczka[tabliczka.size() / 2 - 1];
			b = tabliczka[tabliczka.size() / 2];
			wynik = (a + b) / 2;
		}
		if (wynik * 2 <= tablica[d+i])
			wynikBanku++;
	}
	return wynikBanku;
}

int main()
{

	int n, d;
	cin >> n >> d;
	vector<int> tablicaWynikow(n);
	for (int i = 0; i < n; i++) {

		cin >> tablicaWynikow[i];
	}
	cout<< activityNotifications(tablicaWynikow, d);


	return 0;
}

