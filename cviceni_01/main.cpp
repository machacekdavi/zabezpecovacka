#include "zvire.h"
#include "student.h"
#include <iostream>

/*4.Napi�te t��du Student, kter� bude slou�it k uchov�v�n� zn�mek o studentech.
Definujte v��tov� typ p�edm�t a zn�mka. Student si bude moc zapsat nejv��e 
MAX=20 p�edm�t� pomoc� metody zapis(). Pro jednoduchost ke spln�n� p�edm�tu 
mus� student z�skat z�po�et a zkou�ku. Na zkou�ku jsou nejv��e t�i pokusy a 
lze ji absolvovat a� po zisku z�po�tu. Zn�mku nebo z�po�et lze ud�lit pomoc� 
metody hodnoceni()*/

using namespace std;

int main(int argc, char ** argv)
{
//	Zvire pytlik;
	Savec pes;
	Ryba kapr;
	pes.jez(3);
	kapr.jez(10);

	//pytlik.jez(5);
	//pytlik.vymesuj(3);
	//pytlik.stari();

	/*Student David("David2");
	Student Honza;

	David.zapis(Matematika);
	David.zapis(Ekonomie);
	David.hodnoceni(Matematika, B);
	David.hodnoceni(Ekonomie, Z);
	David.hodnoceni(Ekonomie, F);
	David.hodnoceni(Ekonomie, F);
	David.hodnoceni(Ekonomie, F);
	David.hodnoceni(Ekonomie, C);
	Honza = David;

	David.zobraz();
	cout << endl;
	cout << "ted se vypise Honza " << endl;
	Honza.zobraz();
	David.pojmenuj("Machy");
	cout << "Jmeno je: " << David.vratjmeno() << endl;*/

	return 0;
}
