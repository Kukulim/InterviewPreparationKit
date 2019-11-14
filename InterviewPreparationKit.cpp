
#include<stdlib.h> 
#include<stdio.h> 
#include <iostream>
using namespace std;

void my_sort(vector<int>& ar1, int fro, int mid, int tai, long& res2) {
	int a[mid - fro + 1 + 1] = { 0 }, b[tai - mid + 1] = { 0 };
	for (int i = 0; i < mid + 1 - fro; i++) a[i] = ar1[i + fro];
	for (int i = 0; i < tai - mid; i++) b[i] = ar1[i + mid + 1];
	a[mid - fro + 1] = INT_MAX, b[tai - mid] = INT_MAX;
	int i = 0, j = 0;
	for (int k = fro; k < tai + 1; k++) {
		if (a[i] <= b[j]) {
			ar1[k] = a[i];
			if (i - (k - fro) > 0) res2 += i - (k - fro);
			i++;
		}
		else {
			ar1[k] = b[j];
			if (j + 1 + (mid - fro) - (k - fro) > 0) res2 += j + 1 + (mid - fro) - (k - fro);
			j++;
		}
	}
}
void my_merge(vector<int>& ar, int front, int tail, long& res1) {
	if (tail <= front) return;
	int mid = (tail + front) / 2;
	my_merge(ar, front, mid, res1);
	my_merge(ar, mid + 1, tail, res1);
	my_sort(ar, front, mid, tail, res1);
}
long countInversions(vector<int> arr) {
	long res = 0;
	my_merge(arr, 0, arr.size() - 1, res);
	return res;
}


int main()
{
	int okrazen;
	cin >> okrazen;
	for (int i = 0; i < okrazen; i++)
	{
		int k;
		cin >> k;
		int* arr = new int[k];
		for (int i = 0; i < k; i++)
		{
			cin >> arr[i];
		}
		mergeSort(arr, 0, k - 1);
		cout << licznik<<endl;
	}
	return 0;
}
