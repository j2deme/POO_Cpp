/*
 * main.cpp
 *
 *  Created on: Mar 6, 2013
 *      Author: j2deme
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <string>
using namespace std;

#include "Simbolos/Simbolo.h"
#include "Simbolos/Tijera.h"
#include "Simbolos/Papel.h"
#include "Simbolos/Piedra.h"
#include "Simbolos/Lagarto.h"
#include "Simbolos/Spock.h"

int menu();
int confirmacion();

int main(int argc, char **argv) {
	srand(time(0));
	Simbolo* pi = new Piedra;
	Simbolo* pa = new Papel;
	Simbolo* t = new Tijera;
	Simbolo* l = new Lagarto;
	Simbolo* s = new Spock;
	Simbolo* sim[5]={pi,pa,t,l,s};
	int usuario, cpu, min = 1, max = 5;
	Simbolo* u;
	Simbolo* c;
	int exit = 0;

	pi->ganaA("destruye",t);//Piedra destruye tijera
	pi->ganaA("aplasta",l);//Piedra aplasta lagarto

	pa->ganaA("cubre",pi);//Papel cubre la piedra
	pa->ganaA("refuta",s);//Papel refuta a Spock

	t->ganaA("corta",pa);//Tijera corta papel
	t->ganaA("corta",l);//Tijera corta lagarto

	l->ganaA("come",pa);//Lagarto come papel
	l->ganaA("envenena",s);//Lagarto envenena a Spock

	s->ganaA("desintegra",t);//Spock desintegra a tijera
	s->ganaA("desintegra",pi);//Spock desintegra a piedra

	do {
		usuario = menu();
		cpu = (rand() % (max - min + 1)) + min;
		u = sim[usuario-1];
		c = sim[cpu-1];
		cout << "Usuario: " << u->getNombre() << endl;
		cout << "CPU: " << c->getNombre() << endl;
		u->compara(c);
		exit = confirmacion();
		cin.ignore();
	} while (exit != 1);

	return 0;
}

int menu(){
	int op;
	cout << "==Piedra-Papel-Tijera-Lagarto-Spock==" << endl;
	cout << "[1] Piedra" << endl;
	cout << "[2] Papel" << endl;
	cout << "[3] Tijera" << endl;
	cout << "[4] Lagarto" << endl;
	cout << "[5] Spock" << endl;
	cout << "=================" << endl;
	cout << "Elige un número (1-5): ";
	cin >> op;
	if(op < 1 || op > 5){
		return menu();
	} else {
		return op;
	}
}

int confirmacion(){
	char op;
	cout << "¿Jugar de nuevo?[S]i,[N]o:";
	cin >> op;
	if(tolower(op) != 's' && tolower(op) != 'n'){
		return confirmacion();
	} else {
		if(tolower(op) == 's'){
			return 0;
		} else {
			return 1;
		}
	}
}
