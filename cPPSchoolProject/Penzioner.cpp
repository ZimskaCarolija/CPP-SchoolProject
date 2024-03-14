#include "Penzioner.h"

Penzioner::Penzioner():Osoba()
{
	this->godineUPenziji = 0;
}

Penzioner::Penzioner(string Ime, int Godine, int GodineUPenziji):Osoba(Ime,Godine)
{
	this->godineUPenziji = GodineUPenziji;
}

void Penzioner::StaviGodineUPenziji(int GodineUPenziji)
{
	this->godineUPenziji = godineUPenziji;
}

int Penzioner::UzmiGodineUPenziji()
{
	return this->godineUPenziji;
}

int Penzioner::GodinaUlaskaUPenziju()
{
	return (this->UzmiGodine() - this->godineUPenziji);
}

void Penzioner::UnosStack()
{
	stack<Penzioner> stek;
	bool pom = true;
	while (pom)
	{
		string ime = "";
		int godine = 0;
		int penzijaGodine = 0;
		int plata = 0;
		cout << endl << "Unesite ime : " << endl;
		cin >> ime;
		cout << endl << "Unesite godine : " << endl;
		cin >> godine;
		cout << endl << "Unesite koliko je dugo u penziji : " << endl;
		cin >> penzijaGodine;

		Penzioner r = Penzioner(ime, godine, penzijaGodine);

		stek.push(r);
		char izbor = '2';
		cout << endl << "Unesite 1 za izlaz  ,  bilo koji durig broj za nastavak  : " << endl;
		cin >> izbor;
		if (izbor == '1')
			pom = false;
	}
	IspisiStek(stek);
}

void Penzioner::IspisiStek(stack<Penzioner> stek)
{
	ofstream fajl("ispisivanje.txt");
	fajl << "Broj penzionera : " << Broj<Penzioner>(stek) << endl;
	fajl << "Penzineri : " << endl;

	while (!stek.empty())
	{
		Penzioner p = stek.top();
		fajl << "Ime : " << p.UzmiIme() << " Godine : " << p.UzmiGodine() << " Otisao u penziju sa : " << p.GodinaUlaskaUPenziju() << " godina" << " broj godina u penziji : " << p.UzmiGodineUPenziji() << endl;
		stek.pop();
	}
	
	cout << "Kraj ";
	fajl.close();
}

void Penzioner::UnosQueue()
{
	queue<Penzioner> Que;
	bool pom = true;
	while (pom)
	{
		string ime = "";
		int godine = 0;
		int penzijaGodine = 0;
		int plata = 0;
		cout << endl << "Unesite ime : " << endl;
		cin >> ime;
		cout << endl << "Unesite godine : " << endl;
		cin >> godine;
		cout << endl << "Unesite koliko je dugo u penziji : " << endl;
		cin >> penzijaGodine;

		Penzioner r = Penzioner(ime, godine, penzijaGodine);

		Que.push(r);
		char izbor = '2';
		cout << endl << "Unesite 1 za izlaz  ,  bilo koji durig broj za nastavak  : " << endl;
		cin >> izbor;
		if (izbor == '1')
			pom = false;
	}
	IspisiQueue(Que);
}

void Penzioner::IspisiQueue(queue<Penzioner> Que)
{
	ofstream fajl("ispisivanje.txt");
	fajl << "Penzineri : " << endl;
	while (!Que.empty())
	{
		Penzioner p = Que.front();
		fajl << "Ime : " << p.UzmiIme() << " Godine : " << p.UzmiGodine() << " Otisao u penziju sa : " << p.GodinaUlaskaUPenziju() << " godina" << " broj godina u penziji : " << p.UzmiGodineUPenziji() << endl;
		Que.pop();
	}
	cout << "Broj osoba je " << UzmiBrojOsoba() << endl;
	cout << "Kraj ";
	fajl.close();
}

void Penzioner::UnosPenzionera()
{
	char unos = 1;
	do
	{
		cout << "1 za unos steka 2 za unos queue" << endl;
		cin >> unos;
	} while (unos != '1' && unos != '2');
	if (unos == '1')
		UnosStack();
	else
		UnosQueue();
}
template<typename T1>
inline static int Penzioner::Broj(const stack<T1>& st)
{
	int br = 0;
	stack<T1> privremeni = st;
	while (!privremeni.empty())
	{
		privremeni.pop();
		br++;
	}
	return br;
}
