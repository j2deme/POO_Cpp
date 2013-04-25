/*
 * main.cpp
 *
 *  Created on: Apr 24, 2013
 *      Author: j2deme
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	try {
		int entero;
		double decimal;
		cout << "Escribe un entero:";
		cin >> entero;
		cout << "Escribe un decimal:";
		cin >> decimal;

		if(entero > 20){
			throw "Valor entero mayor a 20";
		}

		if(entero < 10){
			throw "Valor entero menor a 10";
		}

		if(decimal < 3.1416){
			throw decimal;
		}
	} catch(const char* e){
		cout << e << endl;
	} catch (int e) {
		cout << "El valor " << e << " es mayor a 20." << endl;
	} catch (double e){
		cout << "El valor " << e << " es menor que PI." << endl;
	} catch (...){
		cout << "Ocurrio un error" << endl;
	}
	return 0;
}




