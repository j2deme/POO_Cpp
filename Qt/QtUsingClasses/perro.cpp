#include <iostream>
#include "perro.h"

Perro::Perro(){
    this->edad = 1;
}

void Perro::setName(string name){
    this->name = name;
}

string Perro::getName() const{
    return this->name;
}

void Perro::setRaza(string raza){
    this->raza = raza;
}

string Perro::getRaza() const{
    return this->raza;
}

void Perro::setEdad(int edad){
    this->edad = edad;
}

int Perro::getEdad(){
    return this->edad;
}
