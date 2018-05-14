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
	bool je_poplach();
	virtual void jakysenzor();
	virtual void umistit(char* mis);
	virtual void kdeje();

protected:
	char* umisteni;
	bool poplach;
	bool funkcni;
};

class senzorPohybovy: public senzor
{
public:
	senzorPohybovy();
	~senzorPohybovy();
	virtual void jakysenzor();

private:

};

class senzorPozarni : public senzor
{
public:
	senzorPozarni();
	~senzorPozarni();
	virtual void jakysenzor();

private:
	int teplota;

};

class co2senzor: public senzor
{
public:
	co2senzor();
	~co2senzor();
	virtual void jakysenzor();

private:
	int co2;

};