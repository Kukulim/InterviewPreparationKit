#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void calc(vector<int> q)
{
	int ans = 0;
	for (int i = q.size() - 1; i >= 0; i--) {
		if (q[i] - (i + 1) > 2) {
			cout << "Too chaotic" << endl;
			return;
		}
		for (int j = 0; j < i; j++)
			if (q[j] > q[i]) ans++;
	}
	cout << ans << endl;
}
int main()
{
	int licznik;
	cin >> licznik;
	for (int i = 0; i < licznik; i++)
	{
		int n;
		cin >> n;
		vector<int> tablica(n);
		for (int i = 0; i < n; i++) {
			cin >> tablica[i];
		}

		calc(tablica);	
	}
	return 0;
}
