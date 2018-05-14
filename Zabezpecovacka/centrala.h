#pragma once
#include <vector>
#include "senzor.h"

enum  d_budova { VSE, DUM, GARAZ };
enum  d_typsenzor {kontaktni, pohybovy, co2, pozarni};

class base
{
public:
	base();
	~base();

protected:
	int pocetsenzoru;
	bool zamceno;
	bool poplach;
	std::vector<senzor> pole; 
	std::vector<senzor>::iterator p;

};

class domov: public base
{
public:
	domov();
	~domov();
	virtual void zamkni();

protected:

};

class garaz: public base
{
public:
	garaz();
	~garaz();
	virtual void zamkni();

private:

};


class centrala: public domov, public garaz
{
public:
	centrala();
	~centrala();
	void zamknivse();
	void zamknigaraz();
	void zamknidum();
	void odemkni(d_budova budova);
	void pridejsenzor(senzor sen);
	//void pridejsenzor(d_typsenzor senzor, d_budova misto);
	void smazsenzor();
	//void zobraz(std::vector<senzor> pol);
	void zobraz();

private:

};