#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include "zanimanje.h"
#include "zaposleni.h"
#include "kancelarija.h"
#include "firma.h"
#include "oprema.h"

using namespace std;

int main () {
	fstream dat_zap;
	//dat_zap.open("evidencija_o_zaposlenima.txt");
	fstream dat_fir;
	//dat_fir.open("evidencija_o_firmama.txt");
	fstream dat_kanc;
	//dat_kanc.open("evidencija_o_kancelarijama");

	unsigned int rbz = 1;
	unsigned int rbf = 1;
	unsigned int izbor = 0;

	while (1) {
		cout<< "Izaberite zeljenu akciju: \n" << "1. Pregled baze firmi \n" << "2. Pregled baze zaposlenih \n" << "3. Pregled baze kancelarija i njihove dospupnosti \n" << "4. Unos nove firme \n" << "5. Unos novog zaposlenog \n";
		cin>>izbor;

		if(izbor < 1 || izbor > 5) {
			cout<< "Ne postoji zeljena akcija za uneti izbor, molimo ponovite unos sa validnim brojem. \n";
			cin>>izbor;
		}
		switch(izbor) {
		case 1: {
			dat_fir.open("evidencija_o_firmama.txt");
			string red;
			while (getline (dat_fir,red)) cout << red << '\n';
			dat_fir.close();
			break;
		}
		case 2: {
			dat_zap.open("evidencija_o_zaposlenima.txt");
			string red;
			while (getline (dat_zap,red)) cout << red << '\n';
			dat_zap.close();
			break;
		}
		case 3: {
			dat_kanc.open("evidencija_o_kancelarijama.txt");
			string red;
			while (getline(dat_kanc,red)) cout << red << '\n';
			dat_kanc.close();
			break;
		}
		case 4: {
			Firma* f = new Firma(dat_fir);
			delete f;
			break;
		}
		case 5: {
			Zaposleni* z = new Zaposleni(dat_zap);
			delete z;
			break;
		}
		default:
			break;
		}

		//Firma* niz_firmi[10];
		//Zaposleni* niz_zaposlenih[30];

		//dat_zap<< setw (5) << "Redni broj: " << setw(25) << "Ime zaposlenog:" << setw(30) << "Zanimanje:" << setw(30) << "Ime firme:" << setw(30) << "Kancelarija:" << setw(30) << "Oprema: \n";
		//dat_fir<< setw(5) << "Redni broj: " << setw(25) << "Ime firme:" << setw(30) << "Kapacitet radnih mesta:" << setw(30) << "Broj zaposlenih: " << setw(30) << "Broj kancelarija: \n";

		//for(int i = 0; i < 10; i++) niz_firmi[i] = new Firma(rbf, dat_fir);
		//for(int i = 0; i < 30; i++) niz_zaposlenih[i] = new Zaposleni(rbz, dat_zap);
	
		int nastavak;
		cout<<"Ako zelite da nastavite sa radom, unesite bilo znak razlicit od 0! \n";
		cin>>nastavak;
		if(!cin) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if(nastavak == 0) break;

    
	}

	//dat_zap.close();
	//dat_fir.close();
	//dat_kanc.close();
	
	return 0;
}