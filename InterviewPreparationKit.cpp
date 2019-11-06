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
			
			licznik++;
		}
	}
	return licznik-1;
}

int main()
{
	int n;
	cin >> n;
	vector<int> tablica(n);
	for (int i = 0; i < n; i++) {
		cin >> tablica[i];
	}
	cout << minimumSwaps(tablica);

	return 0;
}
