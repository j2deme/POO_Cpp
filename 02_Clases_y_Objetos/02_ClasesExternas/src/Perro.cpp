/*
 * Perro.cpp
 *
 *  Created on: Feb 19, 2013
 *      Author: j2deme
 */

#include "Perro.h"

Perro::Perro() {
	this->peso = 0.0;
	this->estatura = 0.0;
}

Perro::Perro(string nombre, string raza) {
	this->peso = 0.0;
	this->estatura = 0.0;
	this->nombre = nombre;
	this->raza = raza;
}

Perro::~Perro() {
}

void Perro::ladrar() {
	cout << "Woof! Woof!" << endl;
}

const string& Perro::getColor() const {
	return color;
}

void Perro::setColor(const string& color) {
	this->color = color;
}

double Perro::getEstatura() const {
	return estatura;
}

void Perro::setEstatura(double estatura) {
	this->estatura = estatura;
}

const string& Perro::getNombre() const {
	return nombre;
}

void Perro::setNombre(const string& nombre) {
	this->nombre = nombre;
}

double Perro::getPeso() const {
	return peso;
}

void Perro::setPeso(double peso) {
	this->peso = peso;
}

const string& Perro::getRaza() const {
	return raza;
}

void Perro::setRaza(const string& raza) {
	this->raza = raza;
}
