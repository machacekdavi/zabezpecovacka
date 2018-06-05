#pragma once
enum d_BarvaPeri
{
	Cervene, Modre, Cerne, Zlute, Hnede
};

enum d_SlanostVody
{
	Sladka, Slana , MirneSlana
};

enum d_PocetPrstu
{
	dvouprstak, triprstak, ctyrprstak, petiprstak
};

class Zvire
{
public:
	Zvire() { zaludek = 1;
	vek = 0;	};
	Zvire::Zvire(const Zvire& vzor);

	int zije() { return zaludek > 0; };
	virtual int jez(int jidlo) = 0;
	int vymesuj(int objem);
	int stari() { return vek; };
	char* pojmenuj(char* JM);
	Zvire(char *JM);
	// 9.1 - Napi�te funkce save() a load() do t��dy Zv��e (p��klad 7.2) a jejich potomk�, kter� ulo�� a na�tou instanci t��dy z/do souboru.
	virtual void save()= 0;
	virtual void load()= 0;

protected:
	int zaludek;
	int vek;
	char* jmeno;
	int delkaZivota;
};

// 6.1 Vytvo�te t��dy Savec, Pt�k, Ryba jako potomky t��dy Zv��e z p��kladu 3.5. U ka�d� t��dy napi�te metodu jez, 
// kter� bude rozd�ln� po��tat st��� zv��ete na z�klad� mno�stv� zkonzumovan� potravy. U t��dy Zv��e vytvo�te datovou polo�ku o�k�van� d�lka �ivota, 
// kter� se bude rozd�ln� inicializovat v konstruktorech jednotliv�ch potomk�.

class Savec: public Zvire
{
public:
	Savec();
	~Savec();
	virtual int jez(int jidlo);
	void KolikPrstu();
	void PriradPrsty(d_PocetPrstu prsty);
	virtual void save();
	virtual void load();

private:
	d_PocetPrstu PocetPrstu;

};

class Ptak : public Zvire
{
public:
	Ptak();
	~Ptak();
	virtual int jez(int jidlo);
	void JakeMaPeri();
	void PriradBarvu(d_BarvaPeri barva);
	virtual void save();
	virtual void load();

private:
	d_BarvaPeri BarvaPeri;

};

class Ryba : public Zvire
{
public:
	Ryba();
	~Ryba();
	virtual int jez(int jidlo);
	void JakaSlanost();
	void PriradSlanost(d_SlanostVody slanost);
	virtual void save();
	virtual void load();

private:
	d_SlanostVody SlanostVody;

};