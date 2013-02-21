//============================================================================
// Name        : ClasesExternas.cpp
// Author      : Jaime Delgado
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Perro.h"
#include "Persona.h"
#include "Estudiante.h"

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

	Estudiante alumno, alumna;
	alumno.setNombre("Erick");
	alumno.setApellido("Franco");
	alumno.setNumControl("12690602");
	alumno.setSemestre(2);
	alumno.setPromedio(8.0);

	alumna.setNombre("Yesica");
	alumna.setApellido("Martínez");
	alumna.setNumControl("12180818");
	alumna.setSemestre(2);
	alumna.setPromedio(8.7);

	alumno.estudiar();
	alumna.estudiar();

	alumno.imprimirDatos();
	alumna.imprimirDatos();

	Estudiante alumno3("Mateo","Martínez","12690178",2,8.7);
	alumno3.imprimirDatos();
	alumno3.estudiar("POO");
	return 0;
}
