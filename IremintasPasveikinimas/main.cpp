#include <iostream>
using namespace std;

struct Remelis {
	string e1, e2, e3;
	string vardas;
	string pasisveikinimas;
	int remelio_plotis;
	void Nuskaitymas()
	{
		cout << "Iveskite savo varda: ";
		cin >> vardas;
		cout << "Iveskite remelio ploti: ";
		cin >> remelio_plotis;
		if (vardas.back() == 's')
			pasisveikinimas = "Sveikas, ";
		else
			pasisveikinimas = "Sveika, ";
		e1 = string(vardas.length() + remelio_plotis * 2 + pasisveikinimas.length() + 2, '*') + "\n";
		e2 = "*" + string(vardas.length() + remelio_plotis * 2 + pasisveikinimas.length(), ' ') + "*\n";
		e3 = "*" + string(remelio_plotis, ' ') + pasisveikinimas + vardas + string(remelio_plotis, ' ') + "*\n";
	}

	void Isvedimas()
	{
		cout << e1;
		for (int i = 0; i < remelio_plotis; i++)
			cout << e2;
		cout << e3;
		for (int i = 0; i < remelio_plotis; i++)
			cout << e2;
		cout << e1;
	}
};

int main()
{
	Remelis r;
	r.Nuskaitymas();
	r.Isvedimas();
	cin.get();
	return 0;
}