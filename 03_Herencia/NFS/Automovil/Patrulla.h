/*
 * Patrulla.h
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#include "Automovil.h"

#ifndef PATRULLA_H_
#define PATRULLA_H_

class Patrulla : public Automovil{
public:
	Patrulla();
	virtual ~Patrulla();
	void sonarSirena();
	void detenerDelicuente();
	void chocar(Automovil*);
	void avanza(Automovil*);
private:
	string sirena;
};

#endif /* PATRULLA_H_ */
