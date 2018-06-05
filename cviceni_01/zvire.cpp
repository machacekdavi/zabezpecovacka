#define _CRT_SECURE_NO_WARNINGS
#include "zvire.h"
#include <string>
#include <iostream>

using  namespace std;

// 7.2 Upravte t��du zv��e (p��klad 6.2) na abstraktn� t��du. Funkce jez bude �ist� virtu�ln�. 
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

// 6.1 Vytvo�te t��dy Savec, Pt�k, Ryba jako potomky t��dy Zv��e z p��kladu 3.5. U ka�d� t��dy napi�te metodu jez, 
// kter� bude rozd�ln� po��tat st��� zv��ete na z�klad� mno�stv� zkonzumovan� potravy. U t��dy Zv��e vytvo�te datovou polo�ku o�k�van� d�lka �ivota, 
// kter� se bude rozd�ln� inicializovat v konstruktorech jednotliv�ch potomk�.
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

// 6.2 Vytvo�te v��tov� typy a datov� polo�ky BarvaPe�� pro Pt�ky, SlanostVody pro Ryby a Po�etPrst� pro Savce. 
// Vytvo�te funkce, kter� budou tyto v��tov� typy vhodn� vyu��vat.

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
