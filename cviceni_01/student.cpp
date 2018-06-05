#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <iostream>


using namespace std;

inline const char* TextPredmet(Predmet v)
{
	switch (v)
	{
	case Programovani:   return "Programovani";
	case ProgC:   return "Programovani C";
	case Matematika: return "Matematika";
	case Ekonomie: return "Ekonomie";
	case OperacniSystemy: return "Operacni Systemy";
	case RelacniDatabaze: return "Relacni Databaze";
	default:      return "[Unknown]";
	}
}

inline const char* TextZnamka(Znamka v)
{
	switch (v)
	{
	case Z: return "Zapocet";
	case A: return "A";
	case B: return "B";
	case C: return "C";
	case D: return "D";
	case E: return "E";
	case F: return "F";
	default:      return "[Unknown]";
	}
}


Student::Student()
{
	PocetPredmetu = 0;
	for (int i = 0; i < 20; i++)
	{
		ZapsanePredmety[i].zapocet = false;
		ZapsanePredmety[i].PocetZnamek = 0;
	}
}

// 3.5 - Napište copy konstruktor a operátor = pro tøídy zvíøe a student z pøíkladu 3.4.
Student::Student(const Student& vzor)
{
	PocetPredmetu = vzor.PocetPredmetu;
	for (int i = 0; i < 20; i++)
	{
		ZapsanePredmety[i].zapocet = vzor.ZapsanePredmety[i].zapocet;
		ZapsanePredmety[i].PocetZnamek = vzor.ZapsanePredmety[i].PocetZnamek;
	}
}

// dodano "delete jmeno" protoze bylo dodano jmeno=new char[];
// 4.4 - Napište destruktory pro tøídy Student a Zvíøe z pøíkladu 3.5.
Student::~Student()
{
	delete jmeno;
}

void Student::zapis(Predmet Pred)
{
	if (PocetPredmetu <= 20) {
		ZapsanePredmety[PocetPredmetu++].zapis = Pred;
	}
	else cout << "Uz nelze zapsat vice predmetu";
}

void Student::hodnoceni(Predmet Pred,Znamka Znam)
{
	for (int i = 0; i <= PocetPredmetu; i++)
	{
		if (ZapsanePredmety[i].zapis == Pred)
		{
			//student jeste nema zapocet a zkousime zapsat znamku
			if (Znam != Z && ZapsanePredmety[i].zapocet == false)
			{
				cout << "Student nema jeste zapocet na "<< TextPredmet(ZapsanePredmety[i].zapis) <<", nelze zapsat znamku" << endl;
				return;
			}

			// studentovi zapisujeme zapocet
			if (Znam == Z)
			{
				ZapsanePredmety[i].zapocet = true;
				return;
			}

			// studentovi zapisujeme znamku
			if (Znam != Z && ZapsanePredmety[i].zapocet == true && ZapsanePredmety[i].PocetZnamek < 3)
			{
				ZapsanePredmety[i].Znamky[ZapsanePredmety[i].PocetZnamek++] = Znam;
				return;
			}
		}
	}
}

void Student::zobraz()
{
	for (int i = 0; i < PocetPredmetu; i++)
	{
		cout << TextPredmet(ZapsanePredmety[i].zapis) << endl;
		if (ZapsanePredmety[i].zapocet==false) 
			cout << "Nema Zapocet" << endl;
		else cout << "Ma Zapocet" << endl;
		for (int j = 0; j < ZapsanePredmety[i].Znamky[ZapsanePredmety[i].PocetZnamek]; j++)
		{
			cout << TextZnamka(ZapsanePredmety[i].Znamky[j]) <<" ; ";
		}
	}
}
/* Za pomocí new a delete pøepište alokace ve tøídách student a zvíøe z pøíkladu 2.5. 
pokud odmzu jmeno = new char[strlen(JM) + 1];  pak je to ve stacku ne heapu.
*/
char* Student::pojmenuj(char* JM)
{
	jmeno = new char[strlen(JM) + 1];
	strcpy(jmeno, JM);
	return jmeno;
}

Student::Student(char *JM)
{
	jmeno = new char[strlen(JM) + 1];
	strcpy(jmeno, JM);
}

char* Student::vratjmeno()
{
	return jmeno;
}

// 3.5 - Napište copy konstruktor a operátor = pro tøídy zvíøe a student z pøíkladu 3.4.
Student Student::operator=(const Student & copy)
{
	PocetPredmetu = copy.PocetPredmetu;
	jmeno = new char[strlen(copy.jmeno) + 1];
	jmeno = copy.jmeno;

	//zapsano ZapsanePredmety[20];
	for (int i = 0; i < copy.PocetPredmetu; i++)
	{
		ZapsanePredmety[i].zapis = copy.ZapsanePredmety[i].zapis;
		ZapsanePredmety[i].zapocet = copy.ZapsanePredmety[i].zapocet;
		for (int j = 0; j < copy.ZapsanePredmety[i].Znamky[copy.ZapsanePredmety[i].PocetZnamek]; j++)
		{
			ZapsanePredmety[i].Znamky[j] = copy.ZapsanePredmety[i].Znamky[j];
		}
	}
	return Student();
}