/*
 * main.cpp
 *
 *  Created on: Apr 10, 2013
 *      Author: j2deme
 */
#include <iostream>
#include <string>

using namespace std;

template<class T>
T encuentraMayor(T x, T y){
	T big;
	if(x > y)
		big = x;
	else
		big = y;
	return big;
}

template<class T, class U>
T resta(T x, U y){
	T resultado;
	resultado = x - y;
	return resultado;
}


class PhoneCall{
friend ostream& operator<<(ostream&, PhoneCall);
private:
public:
	PhoneCall(int = 0);
	bool operator>(PhoneCall);
	int minutes;
};
PhoneCall::PhoneCall(int min){
	minutes = min;
}
ostream& operator<<(ostream& out, PhoneCall call){
	out << "Phone call that lasted " << call.minutes << " minutes" << endl;
	return out;
}
bool PhoneCall::operator>(PhoneCall call){
	bool isTrue = false;
	if(minutes > call.minutes)
		isTrue = true;
	return isTrue;
}

int main(int argc, char **argv) {
	int a;
	double b;
	PhoneCall oneCall(4);
	PhoneCall anotherCall(6);
	PhoneCall c(0);
	a = encuentraMayor(3, 5);
	b = encuentraMayor(12.3, 5.7);
	c = encuentraMayor(oneCall, anotherCall);

	cout << "Los más grande son" << endl << a <<
	endl << b << endl << c << endl;

	b = resta(25.5,5);
	cout << "b vale: " << b << endl;
	return 0;

}


