//Fecha.h
#include <iostream>
using namespace std;

#ifndef FECHA_H_
#define FECHA_H_
class Fecha{
public:
    Fecha();
    ~Fecha();
    void leer();
    bool bisiesto();
    void corta();
    void larga();
    void siguiente();
    void anterior();
    int diasMes();
    void avanza(int);
    int entre(Fecha);
	int getAnio() const;
	int getDia() const;
	int getMes() const;

private:
    int dia;
    int mes;
    int anio;
   void valida();
};
#endif
