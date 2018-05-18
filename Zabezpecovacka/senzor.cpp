#include "senzor.h"
#include <iostream>

using namespace std;

senzor::senzor()
{
	funkcni = true;
}

senzor::senzor(char* misto, char* typ)
{
	umisteni = misto;
	funkcni = true;
}

senzor::~senzor()
{
}

bool senzor::je_funkcni()
{
	return funkcni;
}

void senzor::jakysenzor()
{
	cout << "Kontaktni senzor";
}
void senzor::umistit(char* mis)
{
	senzor::umisteni = mis;
}
void senzor::kdeje()
{
	cout << senzor::umisteni << endl; 
}

senzorPohybovy::senzorPohybovy()
{
}

senzorPohybovy::~senzorPohybovy()
{
}

void senzorPohybovy::jakysenzor()
{
	cout << "senzor pohybovy";
}

bool senzorPohybovy::je_poplach()
{
	return false;
}

senzorPozarni::senzorPozarni()
{
	teplota = 22;
}

senzorPozarni::~senzorPozarni()
{
}

void senzorPozarni::jakysenzor()
{
	cout << "senzor pozarni";
}

bool senzorPozarni::je_poplach()
{
	return teplota > 70;
}

co2senzor::co2senzor()
{
	co2 = 5000;
}

co2senzor::~co2senzor()
{
}

void co2senzor::jakysenzor()
{
	cout << "senzor CO2";
}

bool co2senzor::je_poplach()
{
	return co2 > 15000;
}