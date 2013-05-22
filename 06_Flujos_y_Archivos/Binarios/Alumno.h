//Alumno.h
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#ifndef ALUMNO_H_
#define ALUMNO_H_
class Alumno {
friend ostream& operator<<(ostream&, Alumno);
friend istream& operator>>(istream&, Alumno&);
private:
	int id;
	string nombre;
	double promedio;
public:
	Alumno(int, string, double);
	int getId();
	string getNombre();
	double getPromedio();
};
#endif /* ALUMNO_H_ */