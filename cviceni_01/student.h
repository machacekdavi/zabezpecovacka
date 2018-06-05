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


class zapsano
{
public:
	Predmet zapis;
	Znamka Znamky[3];
	int PocetZnamek;
	bool zapocet;
};

class Student
{	
public:
	Student();
	~Student();
	Student(const Student& copy);
	void zapis(Predmet zapis);
	void hodnoceni(Predmet zapis, Znamka znamka);
	void zobraz();
	char* pojmenuj(char* JM);
	Student(char *JM);
	char* vratjmeno();
	Student operator=(const Student& copy);

private:
	zapsano ZapsanePredmety [20];
	int PocetPredmetu;
	char* jmeno;
};