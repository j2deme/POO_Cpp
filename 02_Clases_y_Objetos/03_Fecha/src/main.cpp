//============================================================================
// Name        : Fecha.cpp
// Author      : Jaime Delgado
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Fecha.h"

int main(){
	Fecha hoy,cumpleanios;
	hoy.leer();
	cout << "Formato corto: ";
	hoy.corta();
	cout << "Formato largo: ";
	hoy.larga();
	string resultado;
	if(hoy.bisiesto()){
		resultado = "es";
	} else {
		resultado = "no es";
	}
	cout << "El año " << resultado << " bisiesto." << endl;
	cout << "Avanzamos un día -> ahora es: ";
	hoy.siguiente();
	hoy.larga();

	cout << "Regresamos un día <- ahora es: ";
	hoy.anterior();
	hoy.larga();

	int dias;
	cout << "¿Cuántos días avanzo? ";
	cin >> dias;
	hoy.avanza(dias);
	hoy.larga();

	cout << "¿Cuándo es tu cumpleaños?" << endl;
	cumpleanios.leer();
	dias = hoy.entre(cumpleanios);
	cout << "Hay " << dias << " dias de diferencia entre el ";
	hoy.larga();
	cout << "y el ";
	cumpleanios.larga();

    return 0;
}
