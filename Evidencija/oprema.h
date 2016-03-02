#ifndef _OPREMA_H_
#define _OPREMA_H_

#include <iostream>
#include <string>


using namespace std;

class Firma;

class Oprema {
public:
	string vrsta;
	unsigned int kolicina;

	Firma* f;
public:
	Oprema();
	~Oprema();
	void dodajOpremu();
	void dodajOpremu(Oprema o);
	void izbaciOpremu(Oprema o);

};

#endif