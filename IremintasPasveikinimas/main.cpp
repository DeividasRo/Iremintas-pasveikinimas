#include <iostream>
using namespace std;

int main()
{
	string e1, e2, e3, e4, e5;
	string vardas;
	string pasisveikinimas;
	cout << "Iveskite savo varda: ";
	cin >> vardas;
	if (vardas.back() == 's')
		pasisveikinimas = "Sveikas, ";
	else
		pasisveikinimas = "Sveika, ";
	e1 = string(vardas.length() + 13, '*');
	e2 = "* " + string(vardas.length() + 9, ' ') + " *";
	e3 = "* " + pasisveikinimas + vardas + " *";
	e4 = "* " + string(vardas.length() + 9, ' ') + " *";
	e5 = string(vardas.length() + 13, '*');
	cout << e1 << endl;
	cout << e2 << endl;
	cout << e3 << endl;
	cout << e4 << endl;
	cout << e5 << endl;

	cin.get();
	return 0;
}