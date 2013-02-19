/*
 * Estudiante.h
 *
 *  Created on: Feb 19, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

class Estudiante {
public:
	Estudiante();
	virtual ~Estudiante();
	const string& getApellido() const;
	void setApellido(const string& apellido);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	const string& getNumControl() const;
	void setNumControl(const string& numControl);
	double getPromedio() const;
	void setPromedio(double promedio);

private:
	string numControl;
	string nombre;
	string apellido;
	double promedio;
};

#endif /* ESTUDIANTE_H_ */
