#pragma once
#include"Osoba.h"
class Radnik : public Osoba
{
private:
	int staz;
public:
	Radnik();
	Radnik(string Ime, int godine, int staz);
	void StaviStaz(int staz);
	int UzmiStaz();
	static void UnosRadnika();
	static void Ispis(vector<pair<Radnik, int>>lista);
	//template <typename T1, typename T2>bool  Uporedi(const pair<T1, T2>& p1, const pair<T1, T2>& p2);
	//bool  Uporedi(const pair<Radnik,int>&p1 , const pair<Radnik, int> &p2);
	bool operator<(const Radnik& other) const {
		// Definišite kriterijum poređenja za sortiranje, na primer po godinama ili imenu
		// Ovde je prikazan primer poređenja po godinama
		return godine < other.godine;
	}

};

