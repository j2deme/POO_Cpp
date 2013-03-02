/*
 * Automovil.cpp
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */

#include "Automovil.h"

Automovil::Automovil() {
	this->numeroPuertas = 2;
}

Automovil::~Automovil() {
}

int Automovil::getNumeroPuertas() const {
	return numeroPuertas;
}

void Automovil::setNumeroPuertas(int numeroPuertas) {
	if(numeroPuertas <= 5 && numeroPuertas >= 2){
		this->numeroPuertas = numeroPuertas;
	} else {
		cout << "Número no válido." << endl;
	}
}
