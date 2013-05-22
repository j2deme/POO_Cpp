#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
	int id;
	string nombre;
	double promedio;
	const int COL_SZ = 10;
	ifstream archivoLectura;
	archivoLectura.open("Alumnos.txt");
	if(!archivoLectura.good()){
		cout << "No se pudo abrir el archivo" << endl;
	} else {
		cout << left;
		cout << "Registros de Alumnos:" << endl;
		cout << setw(COL_SZ) << "ID" << setw(COL_SZ) << "Nombre" 
			<< setw(COL_SZ) << "Promedio" << endl;
		while(archivoLectura >> id >> nombre >> promedio) {
			cout << setw(COL_SZ) << id << setw(COL_SZ) <<
			nombre <<setw(COL_SZ) << promedio << endl;
		}
	}
	archivoLectura.close();
	cin.get();
	return 0;
}