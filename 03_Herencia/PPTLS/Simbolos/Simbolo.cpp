/*
 * Simbolo.cpp
 *
 *  Created on: Mar 6, 2013
 *      Author: j2deme
 */

#include "Simbolo.h"

Simbolo::Simbolo() {
	this->id = 0;
	this->pros = 0;
}

Simbolo::~Simbolo() {
}

void Simbolo::ganaA(string v, Simbolo* s) {
	this->verbos.push_back(v);
	this->vence.push_back(s);
	Simbolo::setPros(Simbolo::getPros() + 1);
}

void Simbolo::compara(Simbolo* s) {
	bool end = false;
	string msj;
	if(this->id == s->getId()){
		msj = "¡Es un empate!";
		end = true;
	}
	int i = 0,cpu,actual,pros;
	pros = Simbolo::getPros();
	if(end != true){
		for (i = 0; i < pros; ++i) {
			cpu = s->getId();
			actual = vence.at(i)->getId();
			if(cpu == actual){
				msj = this->nombre + " " + verbos.at(i) + " a " + vence.at(i)->getNombre() + "\nGana usuario.";
				end = true;
				break;
			}
		}
	}
	if(i == pros && end != true){
		msj = s->getNombre() + s->getVerbo(this->id) +" a " + this->nombre + "\nGana CPU.";
	}

	cout << msj << endl;
}

int Simbolo::getId(){
	return this->id;
}

void Simbolo::setId(int id){
	this->id = id;
}

int Simbolo::getPros(){
	return this->pros;
}

void Simbolo::setPros(int pros){
	this->pros = pros;
}

const string& Simbolo::getNombre() const {
	return nombre;
}

void Simbolo::setNombre(const string& nombre) {
	this->nombre = nombre;
}

string Simbolo::getVerbo(int id) {
	int pos = 0;
	int pros;
	pros = Simbolo::getPros();
	for (int i = 0; i < pros; ++i) {
		int act = vence.at(i)->getId();
		if(id == act){
			pos = i;
		}
	}
	//cout << verbos.at(pos) << endl;
	string msj = " " + verbos.at(pos);
	return msj;
}
