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

int main(int argc, char **argv) {
	int r = 0;
	Automovil a;
	for (int i = 0; i < 10; ++i) {
		r = a.aleatorio(1,10);
		cout << r << endl;
	}

	return 0;
}
