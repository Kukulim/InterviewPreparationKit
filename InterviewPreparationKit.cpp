#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

long countInversions(vector<int> arr) {


}

int main()
{
	int t;
	cin >> t;
	for (int t_itr = 0; t_itr < t; t_itr++) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin>>arr[i];
		}
		cout << countInversions(arr);
	}
	return 0;
}
