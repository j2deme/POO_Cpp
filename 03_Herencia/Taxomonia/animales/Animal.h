/*
 * Animal.h
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
public:
	Animal();
	virtual ~Animal();
	bool estaVivo() const;
	void setVivo(bool vivo);
	int getNumeroCrias() const;
	void setNumeroCrias(int numeroCrias);
	const string& getTipo() const;
	void setTipo(const string& tipo);

protected:
	string tipo;
	int numeroCrias;
	bool vivo;
};

#endif /* ANIMAL_H_ */
