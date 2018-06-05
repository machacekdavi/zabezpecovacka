#define _CRT_SECURE_NO_WARNINGS
#include <string>
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

void zapis(Student studentik, Predmet zapis)
{
	if (studentik.PocetPredmetu <= 20) {
		studentik.ZapsanePredmety[studentik.PocetPredmetu++].zapis = zapis;
	}
	else cout << "Uz nelze zapsat vice predmetu";
}

void hodnoceni(Student studentik, Predmet zapis, Znamka znamka)
{
	for (int i = 0; i <= studentik.PocetPredmetu; i++)
	{
		if (studentik.ZapsanePredmety[i].zapis == zapis)
		{
			//student jeste nema zapocet a zkousime zapsat znamku
			if (znamka != Z && studentik.ZapsanePredmety[i].zapocet == false)
			{
				cout << "Student nema jeste zapocet na " << TextPredmet(studentik.ZapsanePredmety[i].zapis) << ", nelze zapsat znamku" << endl;
				return;
			}

			// studentovi zapisujeme zapocet
			if (znamka == Z)
			{
				studentik.ZapsanePredmety[i].zapocet = true;
				return;
			}

			// studentovi zapisujeme znamku
			if (znamka != Z && studentik.ZapsanePredmety[i].zapocet == true && studentik.ZapsanePredmety[i].PocetZnamek < 3)
			{
				studentik.ZapsanePredmety[i].Znamky[studentik.ZapsanePredmety[i].PocetZnamek++] = znamka;
				return;
			}
		}
	}
}

void zobraz(Student studentik)
{
	for (int i = 0; i < studentik.PocetPredmetu; i++)
	{
		cout << TextPredmet(studentik.ZapsanePredmety[i].zapis) << endl;
		if (studentik.ZapsanePredmety[i].zapocet == false)
			cout << "Nema Zapocet" << endl;
		else cout << "Ma Zapocet" << endl;
		for (int j = 0; j < studentik.ZapsanePredmety[i].Znamky[studentik.ZapsanePredmety[i].PocetZnamek]; j++)
		{
			cout << TextZnamka(studentik.ZapsanePredmety[i].Znamky[j]) << " ; ";
		}
	}
}


char* vratjmeno(Student studentik)
{
	return studentik.jmeno;
}

char * pojmenuj(Student studentik, char * JM)
{
	studentik.jmeno = new char[strlen(JM) + 1];
	strcpy(studentik.jmeno, JM);
	return studentik.jmeno;
}
