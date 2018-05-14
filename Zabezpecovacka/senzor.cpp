#include "senzor.h"
#include <iostream>

using namespace std;

senzor::senzor()
{
	poplach = false;
	funkcni = true;
}
senzor::senzor(char* misto, char* typ)
{
	umisteni = misto;
	poplach = false;
	funkcni = true;
}

senzor::~senzor()
{
}

bool senzor::je_funkcni()
{
	return funkcni;
}
bool senzor::je_poplach()
{
	return poplach;
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