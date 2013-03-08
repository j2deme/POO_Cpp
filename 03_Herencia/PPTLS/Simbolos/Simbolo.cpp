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
	this->gana[this->pros] = &s;
	this->pros = this->pros + 1;
	cout << this->pros << endl;
}

void Simbolo::compara(Simbolo s) {
	bool end = false;
	if(this->id == s.getId()){
		cout << "Empate!" << endl;
		end = true;
	}
	int i,cpu,actual,pros;
	pros = this->pros;//2
	cout << pros;//0
	for (i = 0; i < pros; ++i) {//pros=0, i=0
		cpu = s.getId();
		actual = (int)gana[i];
		cout << "Simbolo cpu: " << cpu << " Actual: " << actual << endl;
		if(cpu == actual && end != true){
			cout << "Gana CPU" << endl;
			end = true;
		}
	}
	if(i == pros && end != true){
		cout << "Ganaste!" << endl;
	}
}

int Simbolo::getId(){
	return this->id;
}
