/*
 * main.cpp
 *
 *  Created on: Apr 24, 2013
 *      Author: j2deme
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int entero;
	double decimal;
	try {
		cout << "Escribe un entero:";
		cin >> entero;
		cout << "Escribe un decimal:";
		cin >> decimal;

		if(entero > 20){
			//throw "Valor entero mayor a 20";
			throw entero;
		}

		if(entero < 10){
			throw entero;
			//throw "Valor entero menor a 10";
		}

		if(decimal < 3.1416){
			throw decimal;
		}

		throw false;
	} catch(const char* e){
		cout << e << endl;
	} catch (int e) {
		cout << "Error de entero: " << e << endl;
		entero = 10;
	} catch (double e){
		cout << "Error de double: " << e << endl;
		decimal = 3.1416;
	} catch (...){
		cout << "Ocurrio un error" << endl;
	}

	cout << "Entero" << entero << "Decimal" << decimal << endl;
	return 0;
}




