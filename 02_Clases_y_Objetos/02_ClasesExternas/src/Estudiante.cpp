/*
 * Estudiante.cpp
 *
 *  Created on: Feb 20, 2013
 *      Author: j2deme
 */

#include "Estudiante.h"


Estudiante::Estudiante() {
	this->promedio = 0.0;
	this->semestre = 1;
}

Estudiante::Estudiante(string nombre, string apellido, string numControl,
		int semestre, double promedio) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->numControl = numControl;
	this->semestre = semestre;
	this->promedio = promedio;
}

Estudiante::~Estudiante() {
}

void Estudiante::imprimirDatos() {
	cout << "Nombre completo: " << this->nombre << " " << this->apellido << endl;
	cout << "Número de control" << this->numControl << " Semestre: " << this->semestre << endl;
}

void Estudiante::estudiar() {
	cout << this->nombre << " estudia." << endl;
}

void Estudiante::estudiar(string materia) {
	cout << this->nombre << " estudia " << materia << endl;
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

int Estudiante::getSemestre() const {
	return semestre;
}

void Estudiante::setSemestre(int semestre) {
	this->semestre = semestre;
}
