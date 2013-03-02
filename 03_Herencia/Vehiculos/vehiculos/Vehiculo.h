/*
 * Vehiculo.h
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#ifndef VEHICULO_H_
#define VEHICULO_H_

class Vehiculo {
public:
	Vehiculo();
	virtual ~Vehiculo();
	int getNumeroRegistro() const;
	void setNumeroRegistro(int numeroRegistro);
	const string& getPropietario() const;
	void setPropietario(const string& propietario);

protected:
	int numeroRegistro;
	string propietario;
};
#endif /* VEHICULO_H_ */
