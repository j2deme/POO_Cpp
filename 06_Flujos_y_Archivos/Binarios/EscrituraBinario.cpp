#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Alumno.cpp"

void inicializaArchivo();

int main(int argc, char const *argv[]){
	ofstream archivoEscritura;
	const int SALIR = 0;
	int id;
	string nombre;
	double promedio;
	//inicializaArchivo();
	archivoEscritura.open("Alumnos.dat", ios::binary | ios::app);
	cout << "Ingresa el ID del alumno o " << SALIR << " para salir: ";
	cin >> id;
	while(id != SALIR) {
		cout << "Nombre: ";
		cin >> nombre;
		cout << "Promedio: ";
		cin >> promedio;
		Alumno alumno(id, nombre, promedio);
		archivoEscritura.seekp((id - 1) * sizeof(Alumno));
		archivoEscritura.write(reinterpret_cast <const char *>(&alumno), sizeof(Alumno));
		cout << "Ingresa el ID del alumno o " << SALIR << " para salir: ";
		cin >> id;
	}
	archivoEscritura.close();
	return 0;
}

void inicializaArchivo(){
	const int REGISTROS = 1000;
	Alumno alumno;
	ofstream archivoEscritura;
	archivoEscritura.open("Alumnos.dat", ios::binary);
	for(int x = 0; x < REGISTROS; ++x)
		archivoEscritura.write(reinterpret_cast <const char *>(&alumno), sizeof(Alumno));
	archivoEscritura.close();
}