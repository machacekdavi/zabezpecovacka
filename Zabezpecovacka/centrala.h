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
	virtual void zamkni() = 0;
	void zobraz();
	void pridejsenzor(senzor *sen);
	void uloz();
	friend std::ostream& operator<< (std::ostream& stm, const base& bb);

protected:
	int pocetsenzoru;
	bool zamceno;
	bool poplach;
	std::vector<senzor*> pole; 
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
	friend std::ostream& operator<< (std::ostream& stm, const garaz& gar);

private:

};


class centrala
{
public:
	centrala();
	~centrala();
	void zamknivse();
	void zamknigaraz();
	void zamknidum();
	void odemkni(d_budova budova);
	void pridejsenzordum(senzor* sen);
	void pridejsenzor(d_budova budova, senzor* sen);
	void smazsenzor();
	void zobraz();
	friend std::ostream &operator<<(std::ostream &stm, const centrala &cen);
	

private:
	garaz _garaz;
	domov _domov;
	base* vyberbudovy(d_budova budova);
};