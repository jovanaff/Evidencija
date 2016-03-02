#ifndef _ZANIMANJE_H_
#define _ZANIMANJE_H_

#include <iostream>

using namespace std;

class Zaposleni;

class Zanimanje {
public:
	string ime;
	unsigned int broj_radnika;
public:
	Zanimanje();
	~Zanimanje();
	void dodajRadnika();
	void dodajRadnika(Zaposleni* z);

};

#endif