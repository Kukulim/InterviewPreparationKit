#include <iostream>
#include<string>
#include<vector>

using namespace std;
int minimumSwaps(vector<int> arr) {
	int licznik = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != i+1)
		{
			
			int pozycja = 0;
			while (arr[i + pozycja] != (i + 1))
			{
				pozycja++ ;
			}
			int bufor = arr[i];
			arr[i] = i+1;
			arr[i+pozycja] = bufor;
			licznik++;
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
		cin >> tablica[i];
	}
	cout<<minimumSwaps(tablica);
	return 0;
}
