//============================================================================
// Name        : 01_ClasesInternas.cpp
// Author      : Jaime Delgado
// Version     :
// Copyright   : 
//============================================================================

#include <iostream>
using namespace std;

class Persona {
public:
	void manejar(){
		cout << "Izquierda <-\nDerecha->" << endl;
	};
	void setNombre(string n){
		nombre = n;
	};
	string getNombre(){
		return nombre;
	};
private:
	string nombre;
	int edad;
	string licencia;
};

class Carro {
public:
	void encender (){
		cout << "Se encendio el carro " << color << endl;
		km = 0;
	};
	void avanzar (){
		cout << "Avanzo un 1 km" << endl;
		km++;
	};
	void pintar (string col){
		color = col;
	};
	string getColor (){
		return color;
	};
	void setMarca (string m){
		marca = m;
	};
	string getMarca (){
		return marca;
	};
	void setAnio (int year){
		anio = year;
	};
	int getAnio (){
		return anio;
	};
	int getKm(){
		return km;
	}
	void setChofer(Persona ch){
		chofer = ch;
	}
	Persona getChofer(){
		return chofer;
	}
private:
	string marca;
	int anio;
	string color;
	int km;
	Persona chofer;
};

class Plato {
public:
	void llenar(){
		cout << "Plato lleno" << endl;
	}
	void lavar(){
		cout << "Wash! Wash!" << endl;
	}
	void setColor(){
		cout << "Color: ";
		cin >> color;
	}
	string getColor(){
		return color;
	}
	void setSize(){
		cout << "Tamaño: ";
		cin >> size;
	}
	string getSize(){
		return size;
	}
private:
	string color;
	string size;
};

int main() {
/*	int entero = 0;
	float decimal = 1.5;
	char letra = 'A';
	string cadena = "Hola";
	cout << "Jaime Delgado" << endl;
	cout << "Escribe un entero" << endl;
	cin >> entero;
	cout << entero << endl;*/

	Persona c1, c2;
	c1.setNombre("Alva");
	c2.setNombre("Cuenca");

	Carro taxi;
	taxi.setMarca("Ferrari");
	taxi.setAnio(2012);
	taxi.pintar("Rojo");
	taxi.setChofer(c1);

	Carro tsuru;
	tsuru.setMarca("Audi");
	tsuru.setAnio(2013);
	tsuru.pintar("Plata");
	tsuru.setChofer(c2);

	cout << "===Carros===" << endl;
	cout << "Marca:" << taxi.getMarca() << "---" <<tsuru.getMarca() << endl;
	cout << "Año:" << taxi.getAnio() << "---" << tsuru.getAnio() << endl;
	cout << "Color:" << taxi.getColor() << "---" << tsuru.getColor() << endl;
	cout << "Chofer:" << taxi.getChofer().getNombre() << "---" << tsuru.getChofer().getNombre() << endl;

	taxi.encender();
	tsuru.encender();
	taxi.avanzar();
	taxi.avanzar();
	tsuru.avanzar();

	cout << "Kilometros recorridos" << endl;
	cout << "Taxi: " << taxi.getKm() << "\tTsuru: " << tsuru.getKm() << endl;

	Plato WE;
	WE.setSize();
	WE.setColor();

	WE.llenar();
	WE.lavar();

	cout << "Windsor Escarlata: " << WE.getColor() << "---" << WE.getSize() << endl;
	return 0;
}
