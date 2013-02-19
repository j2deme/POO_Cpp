/*
 * Persona.h
 *
 *  Created on: Feb 19, 2013
 *      Author: j2deme
 */

#include <iostream>
using namespace std;

#include "Perro.h"

#ifndef PERSONA_H_
#define PERSONA_H_

class Persona {
public:
	Persona();
	virtual ~Persona();
	const string& getApellido() const;
	void setApellido(const string& apellido);
	int getEdad() const;
	void setEdad(int edad);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	const string& getSexo() const;
	void setSexo(const string& sexo);
	const Perro& getMascota() const;
	void setMascota(const Perro& mascota);

private:
	string nombre;
	string apellido;
	int edad;
	string sexo;
	Perro mascota;
};

#endif /* PERSONA_H_ */
