/*
 * Vehiculo.cpp
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */

#include "Vehiculo.h"

Vehiculo::Vehiculo() {
	this->numeroRegistro = 9999;
}

Vehiculo::~Vehiculo() {}

int Vehiculo::getNumeroRegistro() const {
	return numeroRegistro;
}

void Vehiculo::setNumeroRegistro(int numeroRegistro) {
	this->numeroRegistro = numeroRegistro;
}

const string& Vehiculo::getPropietario() const {
	return propietario;
}

void Vehiculo::setPropietario(const string& propietario) {
	this->propietario = propietario;
}
