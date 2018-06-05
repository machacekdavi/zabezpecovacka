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
	// 9.1 - Napište funkce save() a load() do tøídy Zvíøe (pøíklad 7.2) a jejich potomkù, které uloží a naètou instanci tøídy z/do souboru.
	virtual void save()= 0;
	virtual void load()= 0;

protected:
	int zaludek;
	int vek;
	char* jmeno;
	int delkaZivota;
};

// 6.1 Vytvoøte tøídy Savec, Pták, Ryba jako potomky tøídy Zvíøe z pøíkladu 3.5. U každé tøídy napište metodu jez, 
// která bude rozdílnì poèítat stáøí zvíøete na základì množství zkonzumované potravy. U tøídy Zvíøe vytvoøte datovou položku oèkávaná délka života, 
// která se bude rozdílnì inicializovat v konstruktorech jednotlivých potomkù.

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