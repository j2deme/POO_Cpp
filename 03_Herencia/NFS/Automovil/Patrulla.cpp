/*
 * Patrulla.cpp
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */

#include "Patrulla.h"

Patrulla::Patrulla() {
	this->sirena = "Wiu! Wiu! Wiu!";
	this->choques = 99;
	sonarSirena();
}

Patrulla::~Patrulla() {}

void Patrulla::sonarSirena() {
	cout << this->sirena << endl;
}

void Patrulla::detenerDelicuente() {
	cout << "Estas bajo arresto!" << endl;
}

void Patrulla::chocar(Automovil t) {
	t.chocado();
	cout << "Crash! Crash!" << t.getChoques() << endl;
	if(t.getChoques() == 0){
		cout << "Kaboom! GAME OVER!" << endl;
	}
}

void Patrulla::avanza(Automovil t){
	int random = aleatorio(1,7);
	int distancia;
	distancia = this->distancia;
	if(distancia > t.getDistancia()){
		//No hace nada;
	} else if(distancia == t.getDistancia()-1) {
		chocar(t);
	} else{
		this->distancia = this->distancia + random;
	}

	//sonarSirena();
}
