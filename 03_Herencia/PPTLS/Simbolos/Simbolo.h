/*
 * Simbolo.h
 *
 *  Created on: Mar 6, 2013
 *      Author: j2deme
 */
//#include <cstdlib>
#include <iostream>
//#include <vector>
using namespace std;

#ifndef SIMBOLO_H_
#define SIMBOLO_H_

class Simbolo {
public:
	Simbolo();
	virtual ~Simbolo();
	void ganaA(Simbolo);
	void compara(Simbolo);
	int getId();
protected:
	int id;
	int pros;
	Simbolo* gana[5];
};

#endif /* SIMBOLO_H_ */
