#define _CRT_SECURE_NO_WARNINGS
#include "senzor.h"
#include "centrala.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char ** argv)
{
	centrala Daviduv;
	
	//Daviduv.inicializace();
	/**/
	
	try {
		Daviduv.pridejsenzordum(new senzorPohybovy());
		Daviduv.pridejsenzordum(new senzorPozarni());
		Daviduv.pridejsenzordum(new co2senzor());

		Daviduv.pridejsenzor(d_budova::GARAZ, new co2senzor());

		Daviduv.zamknivse();

		Daviduv.odemkni(GARAZ);

		Daviduv.zamknigaraz();

		Daviduv.odemkni(VSE);
		
		
		fstream f("C:\\Temp\\centrala.txt", ios::out);
		f << Daviduv;
		f.close();
		//Daviduv.ulozkonfiguraci();


		Daviduv.zobraz();

	}
	catch (runtime_error& e) {
		cout << "Chyba: " << e.what() << endl;
	}
	return 0;
}
