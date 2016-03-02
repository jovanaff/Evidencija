#ifndef _ZAPOSLENI_H_
#define _ZAPOSLENI_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Zanimanje;
class Kancelarija;
class Firma;
class Oprema;

class Zaposleni {
public:
	string ime;
	Zanimanje* z;
	Kancelarija* k;
	Firma* f;
	Oprema** o;
public:
	Zaposleni(fstream& o);
	~Zaposleni();
	void promeni_zanimanje();
	void promeni_kancelariju(Kancelarija* k);
	void promeni_firmu();
	void uzmiOpremu();
	void uzmiOpremu(Oprema* o);
	void vratiOpremu(Oprema* o);
};

#endif