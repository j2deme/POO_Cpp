#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

#include "Alumno.cpp"

int main(int argc, char const *argv[]){
	Alumno alumno;
	ifstream archivoLectura;
	const int SALIR = 0;
	int id;
	archivoLectura.open("Alumnos.dat", ios::binary);
	//archivoLectura.read(reinterpret_cast <char *>(&alumno), sizeof(Alumno));

	cout << "Ingresa el ID del alumno a visualizar o " << SALIR << " para salir: ";
	cin >> id;
	while(id != SALIR){
		archivoLectura.seekg((id - 1) * sizeof(Alumno));
		archivoLectura.read(reinterpret_cast<char *>(&alumno), sizeof(Alumno));
		//cout << alumno << endl;
		//cout << setw(15) << alumno.getId() << alumno.getNombre() << setw(10) << alumno.getPromedio() << endl;
		cout << alumno.getId() << setw(10) << alumno.getPromedio() << endl;
		cout << "Ingresa el ID del alumno a visualizar o " << SALIR << " para salir: ";
		cin >> id;
	}
	archivoLectura.close();
	cin.get();
	return 0;
}