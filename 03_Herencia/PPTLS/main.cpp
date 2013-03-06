/*
 * main.cpp
 *
 *  Created on: Mar 6, 2013
 *      Author: j2deme
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Simbolos/Simbolo.h"
#include "Simbolos/Tijera.h"
#include "Simbolos/Papel.h"
#include "Simbolos/Piedra.h"
#include "Simbolos/Lagarto.h"
#include "Simbolos/Spock.h"

int main(int argc, char **argv) {
	srand(time(0));
	Tijera t;
	Piedra pi;
	Papel pa;
	Lagarto l;
	Spock s;
	Simbolo sim[5]={t,pi,pa,l,s};
	int usuario,cpu,max,min;

	t.ganaA(pa);
	t.ganaA(l);
	pa.ganaA(pi);
	pa.ganaA(s);
	pi.ganaA(t);
	pi.ganaA(l);
	l.ganaA(pa);
	l.ganaA(s);
	s.ganaA(t);
	s.ganaA(pi);

	cout << "Elige un número de 1 al 5: ";
	cin >> usuario;
	min = 1;
	max = 5;
	cpu = (rand() % (max - min + 1)) + min;

	cout << "Numeros elegidos--> Usuario: " << usuario << " CPU: " << cpu << endl;
	return 0;
}
