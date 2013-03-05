/*
 * Patrulla.cpp
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */

#include "Patrulla.h"

Patrulla::Patrulla() {
	this->sirena = "Wiu! Wiu! Wiu!";
	sonarSirena();
}

Patrulla::~Patrulla() {}

void Patrulla::sonarSirena() {
	cout << this->sirena << endl;
}

void Patrulla::detenerDelicuente() {
	cout << "You're under arrest!" << endl;
}

void Patrulla::chocar() {
	cout << "Crash! Boom! Crash!" << endl;
}

void Patrulla::avanza(Automovil t){
	//Generar un número aleatorio entre 1 y 10
	int random = 0;
	int distancia;
	distancia = this->distancia = this->distancia + random;
	if(distancia > t.getDistancia()){
		detenerDelicuente();
	} else if(distancia == t.getDistancia() || distancia == t.getDistancia()-1) {
		chocar();
	}
	sonarSirena();
}
