#include "zvire.h"
//#include "student.h"
#include <iostream>

using namespace std;

/* 1.P�epi�te celou t��du Zv��e (p��klad 1.3) do podoby struct za pou�it� reference a pointer� (slajd 11). 
Pro pojmenov�n� prom�nn� nepou��vejte this, je to kl��ov� slovo.

2.P�epi�te celou t��du Student(p��klad 1.5) do podoby struct za pou�it� reference a pointer�(slajd 11)

3.Za pou�it� reference napi�te funkci SortMin(), kter� set��d� sv� t�i parametry vzestupn� podle velikosti.
*/
void swap(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

void SortMin(int &a, int &b, int &c)
{
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
}


int main(int argc, char ** argv)
{
	/*zvire *pytlik = new zvire;

	jez(*pytlik,5);
	vymesuj(*pytlik,3);
	jez(*pytlik, 8);
	cout << stari(*pytlik);
	pojmenuj(*pytlik, "David");
*/

	/*Student David;
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

	int A = 65, B = 100, C = 5;
	SortMin(A, B, C);
	cout << "a je: " << A << "--b je: " << B << "--c je: " << C;

	return 0;
}