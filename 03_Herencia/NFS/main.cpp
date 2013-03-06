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
	Patrulla p;
	Tuneado t;
	int distancia = 0;
	do {
		t.avanza(p);
		p.avanza(t);
		cout << "P: " << p.getDistancia() << " T: " << t.getDistancia() << "Choques: " << t.getChoques() << endl;
		distancia = t.getDistancia();
	} while (distancia <= 100 && t.getChoques() > 0);

	if(t.getChoques() != 0){
		cout << "Player Wins!" << endl;
	}

	return 0;
}
