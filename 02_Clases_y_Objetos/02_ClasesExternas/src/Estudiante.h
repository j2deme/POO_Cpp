/*
 * Estudiante.h
 *
 *  Created on: Feb 20, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

class Estudiante {
public:
	Estudiante();
	Estudiante(string, string, string, int, double);
	virtual ~Estudiante();
	void imprimirDatos();
	void estudiar();
	void estudiar(string);
	const string& getApellido() const;
	void setApellido(const string& apellido);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	const string& getNumControl() const;
	void setNumControl(const string& numControl);
	double getPromedio() const;
	void setPromedio(double promedio);
	int getSemestre() const;
	void setSemestre(int semestre);

private:
	string numControl;
	string nombre;
	string apellido;
	double promedio;
	int semestre;
};

#endif /* ESTUDIANTE_H_ */
