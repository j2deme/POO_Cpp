/*
 * Tuneado.cpp
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */

#include "Tuneado.h"

Tuneado::Tuneado() {
	this->nitro = 5;
}

Tuneado::~Tuneado() {}

void Tuneado::avanza(Automovil p) {
	int random = 0;
	int distancia;
	distancia = this->distancia = this->distancia + random;
		this->distancia = distancia + usarNitro();
	}
}

int Tuneado::usarNitro() {
	int random = 0;

	this->nitro = this->nitro - random;
	return random;
}
