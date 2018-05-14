#define _CRT_SECURE_NO_WARNINGS
#include "senzor.h"
#include "centrala.h"
#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
	centrala Daviduv;
	senzor Machy;
	senzor Machy2;
	senzor Machy3;
	
	Machy.umistit("obyvak");
	Machy2.umistit("kuchyne");

	Daviduv.zamknivse();

	Daviduv.odemkni(GARAZ);

	Daviduv.zamknigaraz();

	Daviduv.odemkni(VSE);

	//Daviduv.pridejsenzor(pozarni, GARAZ);
	Daviduv.pridejsenzor(Machy);
	Daviduv.pridejsenzor(Machy2);
	Daviduv.pridejsenzor(Machy3);

	//David.zobraz();
	//cout << endl;
	//cout << "ted se vypise Honza " << endl;
	//Honza.zobraz();
	//David.pojmenuj("Machy");
	//cout << "Jmeno je: " << David.vratjmeno() << endl;

	Daviduv.zobraz();


	return 0;
}
