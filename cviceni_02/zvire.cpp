#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "zvire.h"

int zije(zvire zviratko)
{
	return zviratko.zaludek > 0;
}

int jez(zvire &zviratko, int jidlo)
{
	if (!zije(zviratko)) return 0;
	zviratko.vek++;
	return zviratko.zaludek += jidlo;
}

int vymesuj(zvire &zviratko, int objem)
{
	if ((zviratko.zaludek -= objem) <= 0)
		zviratko.zaludek = 0;
	return zviratko.zaludek;
}

int stari(zvire zviratko)
{ 
	return zviratko.vek; 
}

char* pojmenuj(zvire &zviratko, char* JM)
{
	zviratko.jmeno = new char[strlen(JM) + 1];
	strcpy(zviratko.jmeno, JM);
	return zviratko.jmeno;
}