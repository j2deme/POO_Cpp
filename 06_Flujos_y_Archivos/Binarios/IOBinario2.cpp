//IOBinario2.cpp
#include <iostream>
#include <fstream>
using namespace std;

#include "Alumno.cpp"

int main(int argc, char const *argv[]){
	//Alumno alum(1,"Jaime",100);
	ofstream archivoEscritura;
	const int SALIR = 0;
	int id;
	string nombre;
	double promedio;

	archivoEscritura.open("Alumnos.dat", ios::binary);
	cout << "Ingresa el ID del alumno o " << SALIR << " para salir: ";
	cin >> id;
	while(id != SALIR) {
		cout << "Nombre: ";
		cin >> nombre;
		cout << "Promedio: ";
		cin >> promedio;
		Alumno alumno(id, nombre, promedio);
		archivoEscritura.seekp((id - 1) * sizeof(alumno));
		archivoEscritura.write(reinterpret_cast <const char *>(&alumno), sizeof(Alumno));
		cout << "Ingresa el ID del alumno o " << SALIR << " para salir: ";
		cin >> id;
	}
	archivoEscritura.close();

	ifstream archivoLectura;
	Alumno unAlumno;

	archivoLectura.open("Alumnos.dat");
	if(!archivoLectura){
		cout << "El archivo a leer no existe" << endl
		<< "El programa finalizara!" << endl;
		return 1;
	}

	int count = 0;
	while(archivoLectura){
		archivoLectura.seekg(count * sizeof(Alumno));
		archivoLectura.read(reinterpret_cast<char *>(&unAlumno), sizeof(Alumno));
		cout << unAlumno << endl;
		count++;
	}
	archivoLectura.close();

	int pause;
	cout << "Press any key to continue...";
	cin >> pause;
	return 0;
}