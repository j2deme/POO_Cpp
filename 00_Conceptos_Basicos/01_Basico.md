#Estructura
Todo código de C++ debe comenzar por la inclusión de las librerías a utilizar, esto se realiza utilizando la directiva `#include`.

Una de las clases más utilizadas dentro de programas básicos hasta programas más avanzados y complejos es la librería **iostream**, que se utiliza para la impresión a pantalla y lectura de teclado de manera sencilla.

Otra convención especificada en el estándar ANSI/ISO C++, es el uso de **namespace** sobre la clase `std` para simplificar la redacción del código, y hacerlo más mantenible.

A su vez, este estándar, también especifica que el método principal `main()` debe tener un valor de retorno entero (`int`).

Por lo tanto tenemos que la plantilla inicial de un código en C++ estaría compuesta por:

`cpp
#include<iostream>
using namespace std;

int main(){
    return 0;
}
`