#ifndef _KANCELARIJA_H_
#define _KANCELARIJA_H_

#include <iostream>

using namespace std;

class Zaposleni;
class Firma;
class Oprema;

class Kancelarija {
public:
	unsigned int id;
	unsigned int kapacitet;
	unsigned int popunjeno;

	Zaposleni** z;
	Firma* f;
	Oprema** o;
public:
	Kancelarija();
	~Kancelarija();
	void dodajZaposlenog();
	void dodajZaposlenog(Zaposleni* z);
	void izbaciZaposlenog(Zaposleni* z);
	void promeniFirmu();
	void promeniFirmu(Firma* f);
	void dodajOpremu();
	void dodajOpremu(Oprema* o);
	void izbaciOpremu(Oprema* o);
};

#endif