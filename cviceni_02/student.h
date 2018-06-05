#pragma once

enum Znamka
{
	Z,
	A,
	B,
	C,
	D,
	E,
	F
};

enum Predmet
{
	Programovani,
	ProgC,
	Matematika,
	Ekonomie,
	OperacniSystemy,
	RelacniDatabaze
};

struct zapsano
{
	Predmet zapis;
	Znamka Znamky[3];
	int PocetZnamek;
	bool zapocet;
};

struct Student
{
	zapsano ZapsanePredmety[20];
	int PocetPredmetu;
	char* jmeno;
};

void zapis(Student studentik,Predmet zapis);
void hodnoceni(Student studentik,Predmet zapis, Znamka znamka);
void zobraz(Student studentik);
char* pojmenuj(Student studentik,char* JM);
char* vratjmeno(Student studentik);