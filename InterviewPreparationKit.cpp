#include <iostream>
#include <vector>

using namespace std;


void countSwaps(vector<int> a) {
	int x=0;
	for (int i = 0; i < a.size(); i++) {

		for (int j = 0; j < a.size() - 1; j++) {
			// Swap adjacent elements if they are in decreasing order
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				x++;
			}
		}
	}
	cout << "Array is sorted in "<<x<< " swaps."<<endl;
	cout << "First Element: "<<a[0]<<endl;
	cout << "Last Element: "<<a[a.size()-1]<<endl;
	}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	countSwaps(a);
	return 0;
}

