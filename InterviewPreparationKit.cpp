#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;


void countSwaps(vector<int> a, int kasa) {
	int suma = 0;
	sort(a.begin(), a.end());
	int i = 0;
	while (suma < kasa) {
		suma += a[i];
		i++;
	}
	cout << i-1<<endl;
	}

int main()
{
	int n,kasa;
	cin >> n>>kasa;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	countSwaps(a,kasa);
	return 0;
}

