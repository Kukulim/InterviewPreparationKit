#include <iostream>
#include<vector>

using namespace std;

int hourglassSum(vector<vector<int>> arr)
{
	int suma[16] = { 0 };
	int p = 0;
	int suma_max = 0;
	int j = 0;
	for (int w = 0; w < 4; w++)
	{
		for (int k = 0; k < 4; k++)
		{
			for (int i = 0 + k; i < 3 + k; i++)
			{
				suma[p] += arr[j + w][i];
				suma[p] += arr[j + 2 + w][i];
			}
			suma[p] += arr[1 + w][1 + k];
			p++;
		}
	}
	suma_max = suma[0];
	for (int i = 0; i < 16; i++)
		if (suma_max < suma[i])
			suma_max = suma[i];

	return suma_max;

}

int main()
{

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}
	}

	int result = hourglassSum(arr);

	cout << result << "\n";

	return 0;
}