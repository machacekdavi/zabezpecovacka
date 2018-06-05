#define _CRT_SECURE_NO_WARNINGS
#include "zvire.h"
#include <string>
#include <iostream>

using  namespace std;

// 7.2 Upravte tøídu zvíøe (pøíklad 6.2) na abstraktní tøídu. Funkce jez bude èistì virtuální. 
// Metoda Zvire::Jez zakomentovana protoze 7.2
/*
int Zvire::jez(int jidlo)
{
	if (!zije()) return 0;
	vek++;
	return zaludek += jidlo;
}
*/

int Zvire::vymesuj(int objem)
{
	if ((zaludek -= objem) <= 0)
		zaludek = 0;
	return zaludek;
}

Zvire::Zvire(const Zvire& vzor)
{
	zaludek = vzor.zaludek;
	vek = vzor.vek;
}

char* Zvire::pojmenuj(char* JM)
{
	jmeno = new char[strlen(JM) + 1];
	strcpy(jmeno, JM);
	return jmeno;
}

Zvire::Zvire(char *JM)
{
	strcpy(JM, jmeno);
}

// 6.1 Vytvoøte tøídy Savec, Pták, Ryba jako potomky tøídy Zvíøe z pøíkladu 3.5. U každé tøídy napište metodu jez, 
// která bude rozdílnì poèítat stáøí zvíøete na základì množství zkonzumované potravy. U tøídy Zvíøe vytvoøte datovou položku oèkávaná délka života, 
// která se bude rozdílnì inicializovat v konstruktorech jednotlivých potomkù.
Savec::Savec()
{
	delkaZivota = 25;
}

Savec::~Savec()
{
}

Ptak::Ptak()
{
	delkaZivota = 14;
}

Ptak::~Ptak()
{
}

Ryba::Ryba()
{
	delkaZivota = 6;
}

Ryba::~Ryba()
{
}

// 6.2 Vytvoøte výètové typy a datové položky BarvaPeøí pro Ptáky, SlanostVody pro Ryby a PoèetPrstù pro Savce. 
// Vytvoøte funkce, které budou tyto výètové typy vhodnì využívat.

int Savec::jez(int jidlo)
{
	if (!zije()) return 0;
	vek += 2 * jidlo;
	return zaludek += jidlo;
}

void Savec::KolikPrstu()
{
	cout << "Savec ma :" << PocetPrstu << endl;
}

void Savec::PriradPrsty(d_PocetPrstu prsty)
{
	PocetPrstu = prsty;
}

void Savec::save()
{
	fstream file("C:\\Temp\\savec.txt", ios::out);
}

int Ptak::jez(int jidlo)
{
	if (!zije()) return 0;
	vek +=(int)(0.1 * jidlo);
	return zaludek += jidlo;
}

void Ptak::JakeMaPeri()
{
	cout << "Ptak ma: " << BarvaPeri << " barvu peri"<< endl;
}

void Ptak::PriradBarvu(d_BarvaPeri barva)
{
	BarvaPeri = barva;
}

int Ryba::jez(int jidlo)
{
	if (!zije()) return 0;
	vek +=(int)(0.2 * jidlo);
	return zaludek += jidlo;
}

void Ryba::JakaSlanost()
{
	cout << "Slanost vody ma byt :" << SlanostVody << endl;
}

void Ryba::PriradSlanost(d_SlanostVody slanost)
{
	SlanostVody = slanost;
}
