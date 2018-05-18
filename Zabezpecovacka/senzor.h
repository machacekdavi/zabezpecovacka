#pragma once
#include <iostream>

using namespace std;

class senzor
{
public:
	senzor(char* misto, char* typ);
	senzor();
	~senzor();
	bool je_funkcni();
	virtual bool je_poplach() = 0;
	virtual void jakysenzor() = 0;
	virtual void umistit(char* mis);
	virtual void kdeje();
	friend std::ostream& operator<< (std::ostream& stm, const senzor& gar);

protected:
	char* umisteni;
	bool funkcni;
};

class senzorPohybovy: public senzor
{
public:
	senzorPohybovy();
	~senzorPohybovy();
	virtual void jakysenzor();
	virtual bool je_poplach();

private:

};

class senzorPozarni : public senzor
{
public:
	senzorPozarni();
	~senzorPozarni();
	virtual void jakysenzor();
	virtual bool je_poplach();

private:
	int teplota;

};

class co2senzor: public senzor
{
public:
	co2senzor();
	~co2senzor();
	virtual void jakysenzor();
	virtual bool je_poplach();

private:
	int co2;

};