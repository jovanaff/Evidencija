#ifndef _FIRMA_H_
#define _FIRMA_H_

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Zaposleni;
class Kancelarija;
class Oprema;

class Firma {
public:
	string ime;
	unsigned int kapacitet;
	unsigned int popunjeno;
	unsigned int br_kancelarija;

	Zaposleni** z;
	Kancelarija** k;
	Oprema** o;
public:
	Firma(fstream& o);
	~Firma();
	void primiZaposlenog();
	void primiZaposlenog(Zaposleni* z);
	void otpustiZaposlenog(Zaposleni*z);
	void promeniZanimanjeZaposlenom(Zaposleni* z);
	void zauzmiKancelariju(Kancelarija* k);
	void oslobodiKancelariju(Kancelarija* k);
	void kupiOpremu();
	void kupiOpremu(Oprema* o);
	void baciOpremu(Oprema* o);
};

#endif