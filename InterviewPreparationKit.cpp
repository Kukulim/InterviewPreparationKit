#include <iostream>
#include<string>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

	long wynik = 0;
	long licznik = 0;

	while (licznik != n)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'a') {
				wynik++;
			}
			licznik++;
			if (licznik == n)
				break;

		}
	}
	return wynik;
}

int main()
{

	string s;
	cin >> s;
	long n;
	cin >> n;

	cout<<  repeatedString(s, n);
	return 0;
}
