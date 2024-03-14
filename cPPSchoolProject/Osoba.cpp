#include "Osoba.h"

Osoba::Osoba()
{
	this->ime = "bezimen";
	brojOsoba++;
	this->godine = 0;

}

Osoba::Osoba(string Ime, int Godine)
{
	this->ime = Ime;
	this->godine = Godine;
	brojOsoba++;
}

void Osoba::StaviIme(string Ime)
{
	this->ime = Ime;
}

void Osoba::StaviGodine(int Godine)
{
	this->godine = Godine;
}

string Osoba::UzmiIme()
{
	return this->ime;
}

int Osoba::UzmiGodine()
{
	return this->godine;
}
int Osoba::UzmiBrojOsoba()
{
	return brojOsoba;
}
Osoba Osoba::operator+(Osoba o)
{
	return Osoba(this->ime +" "+ o.ime,this->godine + o.godine);
}
int Osoba::brojOsoba = 0;
