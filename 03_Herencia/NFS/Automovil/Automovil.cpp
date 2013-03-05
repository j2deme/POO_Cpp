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
}

Automovil::~Automovil() {
}

int Automovil::getCilindros() const {
	return cilindros;
}

void Automovil::setCilindros(int cilindros) {
	this->cilindros = cilindros;
}

const string& Automovil::getColor() const {
	return color;
}

void Automovil::setColor(const string& color) {
	this->color = color;
}

int Automovil::getDistancia() const {
	return distancia;
}

void Automovil::setDistancia(int distancia) {
	this->distancia = distancia;
}

const string& Automovil::getModelo() const {
	return modelo;
}

void Automovil::setModelo(const string& modelo) {
	this->modelo = modelo;
}

void Automovil::avanza() {
}
