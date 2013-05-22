//Alumno.cpp
#include "Alumno.h"

ostream& operator<<(ostream& out, Alumno stu){
	out << stu.id << " " << stu.nombre.c_str() << " " << stu.promedio << endl;
	return out;
}

istream& operator>>(istream& in, Alumno& stu){
	in >> stu.id >> stu.nombre >> stu.promedio;
	return in;
}

Alumno::Alumno(int id = 0, string nombre = "", double promedio = 0.0){
	this->id = id;
	this->nombre = nombre;
	this->promedio = promedio;
}

int Alumno::getId(){
	return this->id;
}

string Alumno::getNombre(){
	return this->nombre;
}

double Alumno::getPromedio(){
	return this->promedio;
}