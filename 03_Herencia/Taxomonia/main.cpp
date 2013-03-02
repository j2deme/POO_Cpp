/*
 * main.cpp
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#include "animales/Animal.h"
#include "animales/Mamifero.h"

int main(int argc, char **argv) {
	Mamifero gato;
	gato.setNumeroCrias(9);
	gato.setTipo("Carnivoro");
	gato.setVivo(true);
	gato.amamantar();
	return 0;
}
