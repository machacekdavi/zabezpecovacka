#include "zvire.h"
#include "student.h"
#include <iostream>

/*4.Napište tøídu Student, která bude sloužit k uchovávání známek o studentech.
Definujte výètový typ pøedmìt a známka. Student si bude moc zapsat nejvýše 
MAX=20 pøedmìtù pomocí metody zapis(). Pro jednoduchost ke splnìní pøedmìtu 
musí student získat zápoèet a zkoušku. Na zkoušku jsou nejvýše tøi pokusy a 
lze ji absolvovat až po zisku zápoètu. Známku nebo zápoèet lze udìlit pomocí 
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
