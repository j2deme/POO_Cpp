/*
 * main.cpp
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#include "vehiculos/Vehiculo.h"
#include "vehiculos/Automovil.h"

int main(int argc, char **argv) {
	Automovil carro;
	int puertas;
	cout << "Numero puertas: ";
	cin >> puertas;
	carro.setNumeroPuertas(puertas);
	return 0;
}




