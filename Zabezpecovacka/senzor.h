#pragma once

class senzor
{
public:
	senzor(char* misto, char* typ);
	senzor();
	~senzor();
	bool je_funkcni();
	bool je_poplach();
	virtual void jakysenzor();

protected:
	char* umisteni;
	bool poplach;
	bool funkcni;
};

senzor::senzor()
{
	poplach = false;
	funkcni = true;
}
senzor::senzor(char* misto, char* typ)
{
	umisteni = misto;
	poplach = false;
	funkcni = true;
}

senzor::~senzor()
{
}

bool senzor::je_funkcni()
{
	return funkcni;
}
bool senzor::je_poplach()
{
	return poplach;
}
void senzor::jakysenzor()
{
	cout << "Kontaktni senzor";
}

class senzorPohybovy: public senzor
{
public:
	senzorPohybovy();
	~senzorPohybovy();

	void jakysenzor();

private:

};

senzorPohybovy::senzorPohybovy()
{
}

senzorPohybovy::~senzorPohybovy()
{
}

void senzorPohybovy::jakysenzor()
{
	cout << "senzor pohybovy";
}

class senzorPozarni : public senzor
{
public:
	senzorPozarni();
	~senzorPozarni();

private:
	int teplota;

};

senzorPozarni::senzorPozarni()
{
	teplota = 22;
}

senzorPozarni::~senzorPozarni()
{
}

class co2senzor: public senzor
{
public:
	co2senzor();
	~co2senzor();

private:
	int co2;

};

co2senzor::co2senzor()
{
	co2 = 5000;
}

co2senzor::~co2senzor()
{
}