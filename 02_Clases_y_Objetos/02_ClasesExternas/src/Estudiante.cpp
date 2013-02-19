/*
 * Estudiante.cpp
 *
 *  Created on: Feb 19, 2013
 *      Author: j2deme
 */

#include "Estudiante.h"

Estudiante::Estudiante() {
	this->promedio = 0.0;
}

Estudiante::~Estudiante() {
}

const string& Estudiante::getApellido() const {
	return apellido;
}

void Estudiante::setApellido(const string& apellido) {
	this->apellido = apellido;
}

const string& Estudiante::getNombre() const {
	return nombre;
}

void Estudiante::setNombre(const string& nombre) {
	this->nombre = nombre;
}

const string& Estudiante::getNumControl() const {
	return numControl;
}

void Estudiante::setNumControl(const string& numControl) {
	this->numControl = numControl;
}

double Estudiante::getPromedio() const {
	return promedio;
}

void Estudiante::setPromedio(double promedio) {
	this->promedio = promedio;
}
