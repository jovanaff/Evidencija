#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "firma.h"

using namespace std;

Firma::Firma(fstream& o) {


	int postoji = 0;
	string ime_firme;
	string red;
	o.open("evidencija_o_firmama.txt");
	cout<< "Unesite ime firme: \n";
	cin.ignore(2000, '\n');
	getline(cin, ime_firme);
	while(getline(o,red)) {
		stringstream deo_reda(red);
		string sve_firme;
		getline(deo_reda, sve_firme, '\t');
		if(ime_firme.compare(sve_firme) == 0) {
			cout << "Firma je vec u bazi podataka! \n";
			o.close();
			postoji = 1;
			break;
		} 
	}
	if (postoji == 0) {
		o.close();
		o.open("evidencija_o_firmama.txt", ios::app);
		o<< ime_firme << "\t\t\n";
		o.close();
		cout<< "Firma je uspesno dodata u bazu podataka! \n";
	}
	
}

Firma::~Firma() {
	z = 0;
	k = 0;
	o = 0;
}

void Firma::primiZaposlenog() {}

void Firma::primiZaposlenog(Zaposleni* z) {}

void Firma::otpustiZaposlenog(Zaposleni*z) {}

void Firma::promeniZanimanjeZaposlenom(Zaposleni* z) {}

void Firma::zauzmiKancelariju(Kancelarija* k) {}

void Firma::oslobodiKancelariju(Kancelarija* k) {}

void Firma::kupiOpremu() {}

void Firma::kupiOpremu(Oprema* o) {}

void Firma::baciOpremu(Oprema* o) {}
