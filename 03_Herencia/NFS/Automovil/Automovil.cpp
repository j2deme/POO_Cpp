/*
 * Automovil.cpp
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */

#include "Automovil.h"

Automovil::Automovil() {
	this->cilindros = 4;
	this->distancia = 0;
	this->choques = 1;
	srand(time(0));
}

Automovil::~Automovil() {
}

int Automovil::getCilindros() const {
	return cilindros;
}

void Automovil::setCilindros(int cilindros) {
	this->cilindros = cilindros;
}

string Automovil::getColor(){
	return color;
}

void Automovil::setColor(string color) {
	this->color = color;
}

int Automovil::getDistancia(){
	return distancia;
}

void Automovil::setDistancia(int distancia) {
	this->distancia = distancia;
}

string Automovil::getModelo(){
	return modelo;
}

void Automovil::setModelo(string modelo) {
	this->modelo = modelo;
}

void Automovil::avanza() {
}

int Automovil::aleatorio(int min, int max){
	return (rand() % (max - min + 1)) + min;
}

int Automovil::getChoques(){
	return choques;
}

void Automovil::setChoques() {
	this->choques--;
}
