#pragma once

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
	void pridejsenzor(d_typsenzor senzor, d_budova misto);
	void smazsenzor();


private:

};