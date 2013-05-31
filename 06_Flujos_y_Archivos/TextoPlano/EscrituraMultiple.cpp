#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
	int id;
	string nombre;
	double promedio;
	ofstream archivoEscritura;
	archivoEscritura.open("Alumnos.txt");
	if(!archivoEscritura.good()){
		cout << "No se pudo abrir el archivo" << endl;
	} else {
		cout << "Ingresa el ID, nombre y promedio." << endl;
		cout << "Teclea Ctrl + Z (Windows) o Ctrl + d (Linux) para finalizar el archivo." << endl;
		while(cin >> id >> nombre >> promedio){
			archivoEscritura << id << " " << nombre << " " << promedio << endl;
			cout << "Ingresa el ID, nombre y promedio." << endl;
			cout << "Teclea Ctrl + Z (Windows) o Ctrl + d (Linux) para finalizar el archivo." << endl;
		}
	}
	archivoEscritura.close();
	cin.get();
	return 0;
}
