#include "Radnik.h"

Radnik::Radnik():Osoba()
{
	this->staz = 0;
}

Radnik::Radnik(string Ime, int godine, int staz):Osoba(Ime,godine)
{
	this->staz = staz;
}

void Radnik::StaviStaz(int staz)
{
	this->staz = staz;
}

int Radnik::UzmiStaz()
{
	return this->staz;
}

void Radnik::UnosRadnika()
{
	vector< pair<Radnik, int> > lista;
	bool pom = true;
	while (pom)
	{
		string ime = "";
		int godine = 0;
		int staz = 0;
		int plata = 0;
		cout << endl<<"Unesite ime : " << endl;
		cin >> ime;
		cout << endl << "Unesite godine : " << endl;
		cin >> godine;
		cout << endl << "Unesite staz : " << endl;
		cin >> staz;
		cout << endl << "Unesite platu : " << endl;
		cin >> plata;
		Radnik r = Radnik(ime, godine, staz);
		pair<Radnik, int> par = { r,plata };
		lista.push_back(par);
		char izbor  = '2';
		cout << endl << "Unesite 1 za izlaz  ,  bilo koji durig broj za nastavak  : " << endl;
		cin >> izbor;
		if (izbor == '1')
			pom = false;
	}
	Ispis(lista);
}

void Radnik::Ispis(vector<pair<Radnik, int>> lista)
{
	ofstream fajl("ispisivanje.txt");
	sort(lista.begin(), lista.end());
	fajl << "Radnici : " << endl;
	for (pair<Radnik, int> par : lista)
	{
		fajl << "Ime : " << par.first.UzmiIme() << " Godine : " << par.first.UzmiGodine() << " staz : " << par.first.UzmiStaz() << " plata : " << par.second << endl;
	}
	cout << "Kraj ";
	fajl.close();
}

/*bool Radnik::Uporedi(const pair<Radnik, int> &p1, const pair<Radnik, int> &p2)
{
	return p1.second < p2.second;
}*/





