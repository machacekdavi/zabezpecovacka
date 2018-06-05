#pragma once

struct zvire
{
	int zaludek = 1;
	int vek = 0;
	char* jmeno;
};

int zije(zvire zviratko);
int jez(zvire &zviratko, int jidlo);
int vymesuj(zvire &zviratko, int objem);
int stari(zvire zviratko);
char* pojmenuj(zvire &zviratko, char* JM);
