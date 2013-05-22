#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
	fstream miArchivo;
	string texto;
	miArchivo.open("miArchivo.txt",ios::out);
	if(miArchivo.good()){
		cout << "Archivo abierto!" << endl;
		cout << "Escribe un texto a guardar: ";
		getline(cin, texto);
		miArchivo << "Esto se va a guardar" << endl;
		miArchivo << texto;
		miArchivo.close();
	} else {
		cout << "Archivo no se pudo abrir" << endl;
	}
	cin.get();
	return 0;
}