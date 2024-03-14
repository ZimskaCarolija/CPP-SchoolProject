#pragma once
#include<iostream>
#include <string>
#include <utility>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <algorithm>
#include<vector>
using namespace std;
class Osoba
{
protected:
	string ime;
	int godine;
	static int brojOsoba;
public:
	Osoba();
	Osoba(string Ime, int Godine);
	void StaviIme(string ime);
	void StaviGodine(int Godine);
	string UzmiIme();
	int UzmiGodine();
	static int UzmiBrojOsoba();
	Osoba operator+(Osoba o);
};

