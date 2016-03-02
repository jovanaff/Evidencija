#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "zaposleni.h"

using namespace std;

Zaposleni::Zaposleni(fstream& o) {

	string ime_zaposlenog;
	string red;
	o.open("evidencija_o_zaposlenima.txt");
	cout<<"Unesite ime zaposlenog: \n";
	cin.ignore(2000, '\n');
	getline(cin, ime_zaposlenog);
	int postoji = 0;
	
	while(getline(o,red)) {
		stringstream deo_reda(red);
		string svi_zaposleni;
		getline(deo_reda, svi_zaposleni, '\t');
		if(ime_zaposlenog.compare(svi_zaposleni) == 0) {
			cout << "Zaposleni je vec u bazi podataka! \n";
			o.close();
			postoji = 1;
			break;
		} 
	}
	if (postoji == 0) {
		o.close();
		o.open("evidencija_o_zaposlenima.txt", ios::app);
		o<<ime_zaposlenog<<"\t\t\n";
		o.close();
		cout<< "Zaposleni je uspesno dodat u bazu podataka! \n";
	}
	
}

Zaposleni::~Zaposleni() {
	z = 0;
	k = 0;
	f = 0;
	o = 0;
}

void Zaposleni::promeni_zanimanje() {}

void Zaposleni::promeni_kancelariju(Kancelarija* k) {}

void Zaposleni::promeni_firmu() {}

void Zaposleni::uzmiOpremu() {}

void Zaposleni::uzmiOpremu(Oprema* o) {}

void Zaposleni::vratiOpremu(Oprema* o) {}

