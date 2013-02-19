/*
 * Perro.h
 *
 *  Created on: Feb 19, 2013
 *      Author: j2deme
 */

#include <iostream>
using namespace std;

#ifndef PERRO_H_
#define PERRO_H_

class Perro {
public:
	Perro();
	Perro(string, string);
	virtual ~Perro();
	void ladrar();
	const string& getColor() const;
	void setColor(const string& color);
	double getEstatura() const;
	void setEstatura(double estatura);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	double getPeso() const;
	void setPeso(double peso);
	const string& getRaza() const;
	void setRaza(const string& raza);

private:
	string raza;
	string nombre;
	double peso;
	double estatura;
	string color;
};

#endif /* PERRO_H_ */
