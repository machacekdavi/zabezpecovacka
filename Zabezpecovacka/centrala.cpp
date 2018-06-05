#include "centrala.h"
#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

centrala::centrala()
{
}

centrala::~centrala()
{
}

void centrala::zamknivse()
{
	zamknigaraz();
	zamknidum();
}
void centrala::zamknigaraz()
{
	_garaz.zamkni();
}
void centrala::zamknidum()
{
	_domov.zamkni();
}
void centrala::odemkni(d_budova budova)
{
	switch (budova)
	{
	case VSE: {	zamknivse();
				break;	
				}
	case DUM:	zamknidum();
	case GARAZ: zamknigaraz();

	default: cout << "Neco tam chybi" << endl;
	break;
	}
}
void centrala::pridejsenzordum(senzor* sen)
{
	_domov.pridejsenzor(sen);
}

void centrala::pridejsenzor(d_budova budova, senzor* sen)
{
	vyberbudovy(budova)->pridejsenzor(sen);
}

void centrala::zobraz()
{
	cout << endl << "Garaz: ";
	_garaz.zobraz();
	cout << endl << "Domov: ";
	_domov.zobraz();
}

// Centrala::vyber budouvy slouzi pro metodu pridej senzor abychom pridaly
// senzor pod garaz nebo dum
base* centrala::vyberbudovy(d_budova budova)
{
	switch (budova)
	{
	case VSE: {
		cout << "Nepodporovano" << endl;
		break; }
	case DUM: return &_domov;
	case GARAZ: return &_garaz;
	default: cout << "Neco tam chybi" << endl;
	break; 
	}
}

/* ulozi celou konfiguraci centraly vcetne vsech cidel , vzdy smaze soubor
 a prise novym kompletnim ulozenim manula je http://www.cplusplus.com/doc/tutorial/files/
*/

std::ostream& operator<<(std::ostream& stm, const centrala& cen)
{
	stm << cen._domov;
	return stm;
}


std::ostream& operator<< (std::ostream& stm, const garaz& gar)
{
	//zapisuji data pocetsenzoru, zamceno, poplach z garaze
	stm	<< gar.pocetsenzoru << ' ' << gar.zamceno << ' ' << gar.poplach << '\n'; // line 2
	
	// zapis pole senzoru (vector<senzor*>pole)
	stm << gar.pole.size() << '\n'; // #assignments on the next lime
	for (vector<senzor*>::const_iterator it = gar.pole.begin(); it != gar.pole.end(); it++)
	{
		stm << (*it);
	}

	//for (const std::string& s : gar.pole&) stm << s << '\n'; // one assignment per line
	return stm;
}

//std::ostream& operator<< (std::ostream& stm, const base& bb)
//{
//																				 // zapis pole senzoru (vector<senzor*>pole)
//	//stm << pole.size() << '\n'; // #assignments on the next lime
//
//	for (vector<senzor*>::iterator it = bb.pole.begin(); it != bb.pole.end(); ++it)
//	{
//		(*it)->jakysenzor();
//	}
//
//	//for (const std::string& s : gar.pole&) stm << s << '\n'; // one assignment per line
//	return stm;
//};



garaz::garaz()
{
}

garaz::~garaz()
{
}
void garaz::zamkni()
{
}

domov::domov()
{

}

domov::~domov()
{
}

void domov::zamkni()
{
}

base::base()
{
	zamceno = false;
	poplach = false;
}

base::~base()
{
	// destruktor uklizi po sobe vsechny senzory
	for (vector<senzor*>::iterator it = pole.begin(); it != pole.end(); ++it)
	{
		delete(*it);
	}
}

void base::pridejsenzor(senzor* sen)
{
	pole.push_back(sen);
}

void base::zobraz()
{
	for (vector<senzor*>::iterator it = pole.begin(); it != pole.end(); ++it) 
	{
		(*it)->jakysenzor();
	}
}

void base :: uloz()
{
	for (vector<senzor*>::iterator it = pole.begin(); it != pole.end(); ++it)
	{
		(*it)->kdeje();
		(*it)->je_funkcni();
		(*it)->jakysenzor();
	}
}