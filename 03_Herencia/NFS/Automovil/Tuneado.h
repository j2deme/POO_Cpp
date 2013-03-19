/*
 * Tuneado.h
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#include "Automovil.h"

#ifndef TUNEADO_H_
#define TUNEADO_H_

class Tuneado : public Automovil{
public:
	Tuneado();
	virtual ~Tuneado();
	void avanza(Automovil*);
	int usarNitro();
private:
	int nitro;
};

#endif /* TUNEADO_H_ */
