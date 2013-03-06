/*
 * Tuneado.cpp
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */

#include "Tuneado.h"

Tuneado::Tuneado() {
	this->nitro = 3;
	this->choques = 3;
}

Tuneado::~Tuneado() {}

void Tuneado::avanza(Automovil p) {
	int random = aleatorio(1,6);
	int distancia;
	distancia = this->distancia = this->distancia + random;
	if(distancia == p.getDistancia()){
		this->distancia = distancia + usarNitro();
	}
}

int Tuneado::usarNitro() {
	int random = aleatorio(1,5);
	if(this->nitro != 0){
		if(random <= this->nitro){
				this->nitro = this->nitro - random;
		} else {
			int dif = this->nitro - random;
			random = random + (dif);
			this->nitro = this->nitro - random;
		}
	} else {
		random = 0;
	}

	return random;
}
