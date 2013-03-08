/*
 * Automovil.h
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

#ifndef AUTOMOVIL_H_
#define AUTOMOVIL_H_

class Automovil {
public:
	Automovil();
	virtual ~Automovil();
	int getCilindros() const;
	void setCilindros(int cilindros);
	string getColor();
	void setColor(string color);
	int getDistancia();
	void setDistancia(int distancia);
	string getModelo();
	void setModelo(string modelo);
	int aleatorio(int,int);
	void chocado();
	int getChoques();
protected:
	string modelo;
	string color;
	int cilindros;
	int distancia;
	int choques;
};

#endif /* AUTOMOVIL_H_ */
