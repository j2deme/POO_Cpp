//============================================================================
// Name        : ClasesExternas.cpp
// Author      : Jaime Delgado
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//#include "Estudiante.h"
#include "Perro.h"
#include "Persona.h"

int main() {
	Perro mascota;
	mascota.setNombre("Firulais");
	mascota.setRaza("Pastor Alemán");
	mascota.setColor("Negro");
	mascota.setEstatura(0.7);
	mascota.setPeso(12.5);

	mascota.ladrar();

	Perro mascota2("Puxelas","Chihuahueño");
	mascota2.setColor("Cafe");
	mascota2.setEstatura(0.2);
	mascota2.setPeso(2.0);
	cout << "Mascotas: " << mascota.getNombre() << ", " << mascota2.getNombre() << endl;

	Persona propietario;
	propietario.setNombre("Susan");
	propietario.setApellido("Juarez");
	propietario.setEdad(20);
	propietario.setSexo("Femenino");
	propietario.setMascota(mascota2);

	cout << "La mascota de " << propietario.getNombre() << " se llama ";
	cout << propietario.getMascota().getNombre() << endl;
	return 0;
}
