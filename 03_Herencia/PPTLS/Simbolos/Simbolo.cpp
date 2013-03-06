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

void Simbolo::ganaA(Simbolo s) {
	this->gana[this->pros] = s;
	this->pros++;
}

void Simbolo::compara(Simbolo s) {
	if(this->id == s.getId()){
		cout << "Empate!" << endl;
	}
	int i;
	for (i = 0; i < pros; ++i) {
		if(s.getId() == gana[i]){
			cout << "Gana CPU" << endl;
		}
	}
	if(i == pros){
		cout << "Ganaste!" << endl;
	}
}

int Simbolo::getId(){
	return this->id;
}
