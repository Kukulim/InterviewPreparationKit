#include <iostream>
#include <vector>

using namespace std;

int jumpingOnClouds(vector<int> tablica) {
	int pozycja = 0;
	int licznik = 0;
	int i = 0;
	while (pozycja != tablica.size() - 1) {
		if (pozycja+2 > tablica.size() - 1) {
			licznik++;
			i++;
			pozycja++;
			break;
		}
		else if (tablica[i + 2] == 0) {
			pozycja = pozycja+2;
			i = i + 2;
			licznik++;
		}
		else {
			licznik++;
			i++;
			pozycja++;
		}
	}
	return licznik;
}

int main()
{
	int n;
	cin >> n;
	vector<int> tablica(n);
	for (int i = 0; i < n; i++) {
		
		cin>> tablica[i];
	}

	cout << jumpingOnClouds(tablica);

	return 0;
}