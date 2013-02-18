/*
 * TiposDatos.cpp
 *
 *  Created on: Feb 15, 2013
 *      Author: j2deme
 */
#include <iostream>;
using namespace std;

//De acuerdo con el estándar, main() debe ser _int_
int main(){
	//Este es un comentario de una línea
	/*Este es un comentario multilínea,
	 * observe que tiene marcado el inicio y el fin*/
	//RECOMENDACION: Declarar variables al inicio.
	//Para números enteros, positivos y negativos.
	int entero = 0;
	//Para números decimales, positivos y negativos.
	float decimal = 1.59;
	//Tiene más precision un _double_ que un _float_, es decir, guarda más decimales
	double numeroConMuchosDecimales = 25.0004851990864814;
	//Para el tipo _char_ se utilizan comillas simples ('), almacena 1 solo caracter.
	char letra = 'A';
	//Para _string_ se utilizan comillas dobles ("), almacena CUALQUIER texto.
	string texto = "Hola Mundo!";
	//Para datos booleanos, es decir, verdadero(true) y falso(false).
	bool respuesta = true;

	/* Se pueden declarar variables por separado: */
	int edad;
	int peso;
	/* O juntas en una sola línea, separadas por coma (,)
	 * siempre y cuando sean del mismo tipo. */
	int piernas, ojos;
	/* Y pueden inicializarse, o no, y despues asignarles un valor: */
	string nombre, apellido = "Johnson";
	nombre = "Charles";

	/* Si el valor de una variable no cambia, se recomienda utilizar
	 * el modificador _const_ para indicar que es una constante y que
	 * su valor NO se puede cambiar, para diferenciarlas, se recomienda
	 * que esten en MAYUSCULAS */
	const double PI = 3.1416;
	/* Como el valor de PI es constante, si quisieramos cambiarlo dentro
	 * del programa usando:
	 * PI = 3.14159;
	 * generaría un error, pero si podemos usarlo para operaciones*/
	double area;
	int radio = 5;
	area = PI * (radio * radio);

	//El main() SIEMPRE debe terminar con _return 0;_ a menos de que exista un error.
	return 0;
}



