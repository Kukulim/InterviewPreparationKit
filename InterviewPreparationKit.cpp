#include <iostream>
#include<string>

using namespace std;

// Complete the repeatedString function below.
unsigned long long int repeatedString(string s, unsigned long long int n) {

	unsigned long long int wynik = 0;
	unsigned long long int ile_razy = n / s.size();
	unsigned long long int reszta = n % s.size();

		for (unsigned long long int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'a') {
				wynik++;
			}
		}
		wynik =wynik * ile_razy;
		for (int i = 0; i < reszta; i++)
		{
			if (s[i] == 'a') {
				wynik++;
			}
		}
	
	return wynik;
}

int main()
{

	string s;
	cin >> s;
	unsigned long long int n;
	cin >> n;

	cout<<  repeatedString(s, n);
	return 0;
}
