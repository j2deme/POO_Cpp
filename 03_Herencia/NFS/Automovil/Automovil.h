/*
 * Automovil.h
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#ifndef AUTOMOVIL_H_
#define AUTOMOVIL_H_

class Automovil {
public:
	Automovil();
	virtual ~Automovil();
	void avanza();
	int getCilindros() const;
	void setCilindros(int cilindros);
	const string& getColor() const;
	void setColor(const string& color);
	int getDistancia() const;
	void setDistancia(int distancia);
	const string& getModelo() const;
	void setModelo(const string& modelo);

protected:
	string modelo;
	string color;
	int cilindros;
	int distancia;
};

#endif /* AUTOMOVIL_H_ */
