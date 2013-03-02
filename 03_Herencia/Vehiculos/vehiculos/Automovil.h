/*
 * Automovil.h
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#include "Vehiculo.h"

#ifndef AUTOMOVIL_H_
#define AUTOMOVIL_H_

class Automovil : public Vehiculo {
public:
	Automovil();
	virtual ~Automovil();
	int getNumeroPuertas() const;
	void setNumeroPuertas(int numeroPuertas);

private:
	int numeroPuertas;
};

#endif /* AUTOMOVIL_H_ */
