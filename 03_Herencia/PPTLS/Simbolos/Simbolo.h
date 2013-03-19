/*
 * Simbolo.h
 *
 *  Created on: Mar 6, 2013
 *      Author: j2deme
 */
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <vector>
#include <stdarg.h>
using namespace std;

#ifndef SIMBOLO_H_
#define SIMBOLO_H_

class Simbolo {
public:
	Simbolo();
	virtual ~Simbolo();
	void ganaA(string,Simbolo*);
	void compara(Simbolo*);
	int getId();
	void setId(int);
	int getPros();
	void setPros(int);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	string getVerbo(int);
protected:
	int id;
	int pros;
	string nombre;
	vector <Simbolo*>vence;
	vector <string>verbos;
};

#endif /* SIMBOLO_H_ */
