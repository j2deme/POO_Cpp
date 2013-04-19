#include <iostream>
#include "perro.h"

Perro::Perro(QObject *parent) : QObject(parent) {
    this->edad = 1;
}

Perro::~Perro(){
    delete this;
}

void Perro::setNombre(QString nombre){
    if (nombre != this->nombre) {
        this->nombre = nombre;
        emit nombreChanged(nombre);
    }
}

QString Perro::getNombre(){
    return this->nombre;
}

void Perro::setRaza(QString raza){
    if(raza != this->raza){
        this->raza = raza;
        emit razaChanged(raza);
    }
}

QString Perro::getRaza(){
    return this->raza;
}

void Perro::setEdad(int edad){
    if(edad != this->edad){
        this->edad = edad;
        emit edadChanged(edad);
    }
}

int Perro::getEdad(){
    return this->edad;
}
