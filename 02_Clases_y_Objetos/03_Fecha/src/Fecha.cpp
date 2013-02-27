//Fecha.cpp
#include "Fecha.h"

Fecha::Fecha(){
	this->dia = 1;
	this->mes = 1;
	this->anio = 1900;
}

Fecha::~Fecha(){}

int Fecha::getAnio() const {
	return anio;
}

int Fecha::getDia() const {
	return dia;
}

int Fecha::getMes() const {
	return mes;
}

void Fecha::leer(){
	cout << "Ingresa el día: ";
	cin >> this->dia;
	cout << "Ingresa el mes: ";
	cin >> this->mes;
	cout << "Ingresa el año: ";
	cin >> this->anio;
    valida();
}

void Fecha::valida(){
	if(this->dia < 1 || this->dia > 31){
		this->dia = 1;
	}
	if(this->mes < 1 || this->mes > 12){
		this->mes = 1;
	}
	if(this->anio < 1900 || this->anio > 2050){
		this->anio = 1900;
	}
}

void Fecha::corta(){
    //02-09-2003
    if(this->dia < 10){
        cout << "0" << this->dia << "-"; //02-
    } else{
        cout << this->dia << "-";//11-
    }

    if(this->mes < 10){
        cout << "0" << this->mes << "-"; //02-09-
    } else{
        cout << this->mes << "-";//11-10-
    }

    cout << this->anio << endl; //02-09-2003 o 11-10-2003


}

void Fecha::larga(){
    cout << this->dia << " de "; //2 de
    string meses[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio",
    		"Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    string mes = meses[this->mes-1];
    cout << mes << " de " << this->anio << endl;//2 de Septiembre de 2003
}

bool Fecha::bisiesto() {
//Adaptado de http://latecladeescape.com/t/Algoritmo+para+determinar+si+un+a%C3%B1o+es+bisiesto
	bool resultado;
	if (this->anio % 4 == 0){
		if ((this->anio % 100 == 0) && (this->anio % 400 != 0)){
			resultado = false; //No es bisiesto
		} else {
			resultado = true; //Es bisiesto
		}
	} else {
		resultado = false; //No es bisiesto
	}
	return resultado;
}

void Fecha::siguiente() {
	int dia = this->dia;
	int mes = this->mes;
	int anio = this->anio;
	int ultimoDelMes = diasMes();
	/* Si es el último del mes, ponemos en día en 1, y lo siguiente
	 * es checar si el mes el diciembre para "aumentar 1 mes" lo que
	 * sería igual a cambiar de año. En casos contrarios solo aumenta el día.*/
	if(dia == ultimoDelMes){
		dia = 1;
		if(mes == 12){
			mes = 1;
			anio++;
		} else {
			mes++;
		}
	} else {
		dia++;
	}
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

void Fecha::anterior() {
	int dia = this->dia;
	int mes = this->mes;
	int anio = this->anio;
	/* Si es el primero del mes, primero bajamos el mes en uno,
	 * luego hacemos que el día sea igual al ultimo del "nuevo" mes.
	 * Igualmente verificamos que el mes no sea el primero, de ser
	 * así, es necesario regresar al año anterior.*/
	if(dia == 1){
		mes--;
		if(mes == 0){
			mes = 12;
			anio--;
		}
		this->mes = mes;
		this->anio = anio;
		dia = diasMes();
	} else {
		dia--;//Un día menos
	}
	this->dia = dia;
}

int Fecha::diasMes() {
	int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int diasMes = dias[this->mes-1];
	if(this->mes == 2 && bisiesto()){
		diasMes++;//Aumentamos 1 a febrero cuando es bisiesto
	}

	return diasMes;
}

void Fecha::avanza(int dias) {
	//Solo consiste en llamar siguiente() tantas veces como indicadas
	for (int var = 0; var < dias; ++var) {
		siguiente();
	}
}

int Fecha::entre(Fecha f) {
	/* Para este método se requieren los gets para dia, mes y año.
	 * Además se hizo uso de una formula para calcular la diferencia
	 * entre dos fechas, basada en el calendario juliano, adaptada de:
	 * http://www.cplusplus.com/forum/general/18114/#msg91881 */
	int diasEntre = 0;
	int d1, d2, m1, m2, a1, a2, jdn1, jdn2;
	d1 = this->dia;
	d2 = f.getDia();
	m1 = this->mes;
	m2 = f.getMes();
	a1 = this->anio;
	a2 = f.getAnio();

	jdn1 = (1461 * (a1 + 4800 + (m1 - 14)/12))/4 +(367 * (m1 - 2 - 12 * ((m1 - 14)/12)))/12 - (3 * ((a1 + 4900 + (m1 - 14)/12)/100))/4 + d1 - 32075;
	jdn2 = (1461 * (a2 + 4800 + (m2 - 14)/12))/4 +(367 * (m2 - 2 - 12 * ((m2 - 14)/12)))/12 - (3 * ((a2 + 4900 + (m2 - 14)/12)/100))/4 + d2 - 32075;

	diasEntre = jdn1 - jdn2;
	if(diasEntre < 0){
		diasEntre = diasEntre * -1;
	}

	return diasEntre;
}
