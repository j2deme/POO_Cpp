/*
 * main.cpp
 *
 *  Created on: Mar 5, 2013
 *      Author: j2deme
 */
#include <iostream>

using namespace std;

#include "Automovil/Automovil.h"
#include "Automovil/Patrulla.h"
#include "Automovil/Tuneado.h"

int main(int argc, char **argv) {
	Automovil* p = new Patrulla;
	Automovil* t = new Tuneado;

	int distancia = 0;
	do {
		dynamic_cast<Tuneado*>(t)->avanza(p);
		dynamic_cast<Patrulla*>(p)->avanza(t);
		cout << "[P] " << p->getDistancia() << "\t[T] " << t->getDistancia() << "\tChoques: " << t->getChoques() << endl;
		distancia = t->getDistancia();
	} while (distancia <= 100 && t->getChoques() > 0);

	if(t->getChoques() != 0){
		cout << "Player Wins!" << endl;
	}

	return 0;
}
