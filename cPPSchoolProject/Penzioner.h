#pragma once
#include"Osoba.h"
class Penzioner: public Osoba
{
private:
	int godineUPenziji;
public :
	Penzioner();
	Penzioner(string Ime, int Godine, int GodineUPenziji);
	void StaviGodineUPenziji(int GodineUPenziji);
	int UzmiGodineUPenziji();
	int GodinaUlaskaUPenziju();
	static void UnosStack();
	static void IspisiStek(stack<Penzioner> stek);
	static void UnosQueue();
	static void IspisiQueue(queue<Penzioner>);
	static void UnosPenzionera();
	template <typename T1>static int  Broj(const stack<T1>&);
};

