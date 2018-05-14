#include "centrala.h"
//#include "senzor.h"
#include <iostream>
#include <vector>
#include <ostream>

using namespace std;

centrala::centrala()
{
}

centrala::~centrala()
{
}

void centrala::zamknivse()
{
	domov::zamceno = true;
	garaz::zamceno = true;
}
void centrala::zamknigaraz()
{
	garaz::zamceno = true;
}
void centrala::zamknidum()
{
	domov::zamceno = true;
}
void centrala::odemkni(d_budova budova)
{
	switch (budova)
	{
		case VSE:	{	domov::zamceno = false;
					garaz::zamceno = false;
					break;	
					}
		case DUM:	domov::zamceno = false;
		case GARAZ: garaz::zamceno = false;

		default: cout << "Neco tam chybi" << endl;
		break;
	}
}
void centrala::pridejsenzor(senzor sen)
{
	//centrala::domov::base::pole.push_back(999);
	
	centrala::domov::base::pole.push_back(sen);
}

void centrala::zobraz()
{
	
	centrala::domov::base::pole[1].kdeje();
	//for (std::vector<senzor>::iterator it = pol.begin(); it != pol.end(); ++it)
	//	cout << pol;
	//	//cout << *it->je_poplach;
}

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
}
