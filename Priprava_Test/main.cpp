#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int spocti(char* txt)
{
	ifstream f(txt);
	if (!f) {
		cout << "chybny soubor" << txt << endl;
	}
	int number_of_lines = 0;
	string line;

	while (getline(f, line))
		++number_of_lines;

	return number_of_lines;
}

int main() {
	int pocetradek = 0;
	char * soubor = new char;
	
	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_01\\main.cpp";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_01\\student.cpp";
	pocetradek += spocti(soubor);
		
	soubor  = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_01\\zvire.cpp";
	pocetradek += spocti(soubor);
		
	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_01\\zvire.h";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_01\\student.h";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_02\\main.cpp";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_02\\student.cpp";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_02\\zvire.cpp";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_02\\zvire.h";
	pocetradek += spocti(soubor);
	
	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\cviceni_02\\student.h";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\Zabezpecovacka\\main.cpp";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\Zabezpecovacka\\centrala.cpp";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\Zabezpecovacka\\senzor.cpp";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\Zabezpecovacka\\senzor.h";
	pocetradek += spocti(soubor);

	soubor = "C:\\OneDrive\\Skola\\Semestr 4\\Objektovì orientované programování\\Priprava_Test\\Zabezpecovacka\\centrala.h";
	pocetradek += spocti(soubor);

	cout << "Number of lines in text file: " << pocetradek << endl;
	cin.ignore();
	return 0;
}
