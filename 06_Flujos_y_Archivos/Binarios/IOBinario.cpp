//IOBinario.cpp
#include <iostream>
#include <fstream>
using namespace std;

#include "Alumno.cpp"

int main(int argc, char const *argv[]){
	int studentIDs[5] = {111111, 222222, 333333, 444444, 555555};
	Alumno alum(1,"Jaime",100);
	ofstream archivoEscritura;
	archivoEscritura.open("ids.dat", ios::binary);
	archivoEscritura.write(reinterpret_cast<const char *>(studentIDs), sizeof(studentIDs));
	archivoEscritura.write(reinterpret_cast<const char *>(&alum), sizeof(Alumno));
	archivoEscritura.close();

	ifstream archivoLectura;
	int arrayID[5];
	Alumno unAlumno;

	archivoLectura.open("ids.dat");
	if(!archivoLectura){
		cout << "El archivo a leer no existe" << endl
		<< "El programa finalizara!" << endl;
		return 1;
	}

	archivoLectura.read(reinterpret_cast<char *> (arrayID), sizeof(arrayID));
	for (int i = 0; i < 5; i++)
		cout << arrayID[i] << " ";
	cout << endl;

	archivoLectura.read(reinterpret_cast<char *>(&unAlumno), sizeof(Alumno));
	cout << unAlumno << endl;

	archivoLectura.close();

	cin.get();
	return 0;
}