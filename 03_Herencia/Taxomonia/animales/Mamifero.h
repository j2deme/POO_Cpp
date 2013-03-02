/*
 * Mamifero.h
 *
 *  Created on: Feb 28, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

#include "Animal.h"

#ifndef MAMIFERO_H_
#define MAMIFERO_H_

class Mamifero : public Animal {
public:
	Mamifero();
	virtual ~Mamifero();
	void amamantar();
};

#endif /* MAMIFERO_H_ */
