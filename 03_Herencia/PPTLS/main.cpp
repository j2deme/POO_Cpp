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
	Simbolo u,c;

	//Tijera = 5
	t.ganaA(pa);//Tijera corta papel
	t.ganaA(l);//Tijera corta lagarto
	//Papel = 4
	pa.ganaA(pi);//Papel cubre la piedra
	pa.ganaA(s);//Papel refuta a Spock
	//Piedra = 3
	pi.ganaA(t);//Piedra destruye tijera
	pi.ganaA(l);//Piedra aplasta lagarto
	//Lagarto = 2
	l.ganaA(pa);//Lagarto come papel
	l.ganaA(s);//Lagarto envenena a Spock
	//Spock = 1
	s.ganaA(t);//Spock desintegra a tijera
	s.ganaA(pi);//Spock desintegra a piedra

	cout << "Elige un número de 1 al 5: ";
	cin >> usuario;
	min = 1;
	max = 5;
	cpu = (rand() % (max - min + 1)) + min;
	u = sim[usuario-1];
	c = sim[cpu-1];
	u.compara(c);

	cout << "Usuario: " << usuario << " CPU: " << cpu << endl;

	return 0;
}
