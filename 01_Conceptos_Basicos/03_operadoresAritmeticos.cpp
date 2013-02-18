#include <iostream> using namespace std;

int main(){
    /* Una vez que obtenemos datos del teclado lo más común es realizar
    * alguna operación ARITMETICA con ellos, como por ejemplo:
    * Suma          (+)
    * Resta         (-)
    * Multiplicacion   (*)
    * Division         (/)
    * Módulo           (%) Devuelve el COCIENTE de la division, por ejemplo: 4%2 = 0, 7%3 = 1
    */
    int a,b;
    cout << "Ingresa 2 números diferentes de cero (0)" << endl;
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;
    /* Lo correcto sería validar que no exista una
    * division entre cero, pues se generaría un error.
    * En caso de que la división no sea exacta, los decimales
    * se pierden, por estar usando _int_ */
    cout << "Division: " << a / b << endl;
    //Modulo solo se puede usar con ENTEROS
    cout << "Modulo: " << a % b << endl;

    /* Debemos tomar en cuenta que podemos realizar una operación aritmética
    * con variables de distintos tipos, en este caso númericos, pero dependiendo
    * del tipo podemos llegar a perder decimales: */
    int entero = 15;
    float decimal = 4.2;
    cout << "Suma: " << entero + decimal << endl;
    cout << "Resta: " << entero - decimal << endl;
    cout << "Multiplicacion: " << entero * decimal << endl;
    cout << "Division: " << entero / decimal << endl;

    /* Cuando se trabaja con operadores aritméticos, se deben tomar en cuenta
    *las reglas de precedencia, es decir:
    1.- La suma y la resta valen igual.
    2.- La multiplicación y división valen igual, pero más que los anteriores.
    3.- Los paréntesis () valen más que cualquiera de los anteriores.
    4.- Sino existen paréntesis, las reglas de precedencia se aplican
    de izquierda a derecha.
    */
    int c = 1, d = 2, e = 3, resultado;
    resultado = c + d - e;
    //Resultado: 0, primero suma, luego resta; izquierda a derecha
    resultado = e - d + c;
    //Resultado: 2, primero resta, luego suma; izquierda a derecha
    resultado = d * e / d;
    //Resultado: 3, primero multiplica, luego divide; izquierda a derecha
    resultado = d + e / e;
    //Resultado: 3, primero divide, luego suma; Division > Suma
    resultado = (d + e) / e;
    /*Resultado: 1, por los paréntesis, primero suma, luego divide, en
    * este caso el resultado es uno, porque es una división entre enteros*/

    /* Otro tipo de operadores importantes son los contadores, que pueden ser:
    1.- Incrementales
    2.- Decrementales
    Y solo funcionan sobre ENTEROS.
    */
    int x, y;
    //Esto es una doble asignación, _y_ igual a 0, _x_ igual a _y_, entonces _x_ igual 0
    x = y = 0;
    x++; //x = 1;
    y--; //y = -1;
    x++; y++; x--;
    /*
    x = 1
    y = 0
    */
    return 0;
}