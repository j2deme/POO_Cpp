/*
 * Entrada_Salida.cpp
 *
 *  Created on: Feb 15, 2013
 *      Author: j2deme
 */
#include <iostream>
using namespace std;

int main(){
	/*Para imprimir a pantalla o leer de teclado, se necesita
	 * la librería _iostream_ que se incluye mediante un #include.*/

	//Para IMPRIMIR podemos hacerlo usando:
	std::cout << "Hola" << endl; //_endl_ es un salto de línea = \n
	/*O si declaramos el _namespace_ al inicio, usando:
	 * using namespace std;
	 * Podemos imprimir directamente usando solo:*/
	cout << "Mundo" << endl;
	//Obviamente podemos imprimir tanto como queramos:
	cout << "Hola mundo otra vez" << endl;
	/* El símbolo de insercion (<<) sirve para indicar que todo se va a juntar
	 * para imprimir, si hacemos por ejemplo:*/
	cout << "Hola " << "mundo " << "una " << "vez " << "mas." << endl;
	/* Obtendremos:
	 * Hola mundo una vez mas.
	 * Observe que los espacios se ponen dentro de las comillas dobles.
	 *
	 * Así como imprimimos texto entre comillas, podemos imprimir variables:*/
	int edad = 18;
	char letra = 'B';
	cout << "Edad: " << edad << " Letra: " << letra << endl;
	/*Obtenemos:
	 * Edad: 18 Letra: B
	 *
	 *
	 * Para LEER, al igual que imprimir, podemos usar la version estandar
	 * _std::cin_ o la reducida _cin_ la diferencia principal, y más IMPORTANTE
	 * es que necesitamos una variable para almacenar lo que se lea.*/
	string nombre;
	cin >> nombre;
	/*Observe que se usa un símbolo diferente, el de extraccion (>>), que indica
	 * que lo que se lea con _cin_ se guardara en la variable _nombre_
	 * Otro detalle es que esto solo nos mostrara en pantalla un cursor parpadeando
	 * en espera de que escribamos algo para almacenarlo en la variable.
	 *
	 * Lo RECOMENDADO es solicitar el dato EXPLICITAMENTE imprimiendo en pantalla:*/
	cout << "Escribe tu nombre: ";
	cin >> nombre;
	cout << "Tu nombre es: " << nombre << endl;
	/*Obtenemos:
	 * Escribe tu nombre: Jaime
	 * Tu nombre es: Jaime
	 *
	 * Al igual que con _cout_ podemos imprimir muchas cosas, con _cin_ podemos leer
	 * varias cosas juntas, separadas por espacio, por ejemplo:*/
	int lado1, lado2, lado3;
	cout << "Escribe las medidas de los lados del triangulo. Separadas con espacio:" << endl;
	cin >> lado1 >> lado2 >> lado3;
	/* Aunque es posible leer asi varios datos, lo RECOMENDABLE es hacerlo de uno por
	 * uno, imprimiendo la respectiva solicitud.*/
	return 0;
}




