/*
 * Animal.cpp
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */

#include "Animal.h"

Animal::Animal() {
	this->vivo = true;
	this->numeroCrias = 1;
}

Animal::~Animal() {
}

int Animal::getNumeroCrias() const {
	return numeroCrias;
}

void Animal::setNumeroCrias(int numeroCrias) {
	this->numeroCrias = numeroCrias;
}

const string& Animal::getTipo() const {
	return tipo;
}

bool Animal::estaVivo() const {
	return this->vivo;
}

void Animal::setVivo(bool vivo) {
	this->vivo = vivo;
}

void Animal::setTipo(const string& tipo) {
	this->tipo = tipo;
}
