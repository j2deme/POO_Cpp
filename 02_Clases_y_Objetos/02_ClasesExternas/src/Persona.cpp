/*
 * Persona.cpp
 *
 *  Created on: Feb 19, 2013
 *      Author: j2deme
 */

#include "Persona.h"

Persona::Persona() {
	this->edad = 0;
}

Persona::~Persona() {
}

const string& Persona::getApellido() const {
	return apellido;
}

void Persona::setApellido(const string& apellido) {
	this->apellido = apellido;
}

int Persona::getEdad() const {
	return edad;
}

void Persona::setEdad(int edad) {
	this->edad = edad;
}

const string& Persona::getNombre() const {
	return nombre;
}

void Persona::setNombre(const string& nombre) {
	this->nombre = nombre;
}

const string& Persona::getSexo() const {
	return sexo;
}

void Persona::setSexo(const string& sexo) {
	this->sexo = sexo;
}

const Perro& Persona::getMascota() const {
	return mascota;
}

void Persona::setMascota(const Perro& mascota) {
	this->mascota = mascota;
}
