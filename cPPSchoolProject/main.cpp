#include"Osoba.h"
#include"Radnik.h"
#include"Penzioner.h"
int main()
{
	char izbor = 0;
	do
	{
		cout << "Unesite 1 za unos radnik 2 za unos penzionera" << endl;
		cin >> izbor;
	} while (izbor != '1' && izbor !='2');
	if (izbor == '1')
	{
		Radnik::UnosRadnika();
	}
	if (izbor == '2')
	{
		Penzioner::UnosPenzionera();
	}

	return 1;
}