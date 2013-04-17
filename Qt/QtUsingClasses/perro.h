#include <iostream>
using namespace std;
#ifndef PERRO_H
#define PERRO_H

class Perro{
public:
    Perro();
    void setName(string);
    string getName() const;
    void setRaza(string);
    string getRaza() const;
    void setEdad(int);
    int getEdad();
private:
    string name;
    int edad;
    string raza;
};

#endif // PERRO_H
