//* Programa para calcular las dos soluciones de una ecuacion de segundo grado
#include <iostream>
#include <cmath>
using namespace std;

int main() {
//*DECLARAMOS LAS VARIABLES DE LA ECUACION
	double a;
	double b;
	double c;
	double x1;
	double x2;
	cout<< "Introduzca los valores de a,b,c:";//*Mostramos en pantalla los valores de a b y c
	cin >> a >> b >> c;//* Guardamos los valores en la memoria
	x1= -b+sqrt(pow(b,2)+4*a*c)/(2*a);//* La primera solucion con b+
	cout << "Solucion1:" << x1 << endl;
	x2= -b-sqrt(pow(b,2)+4*a*c)/(2*a);//* La segunda solucion con b-
	cout << "Solucion2;" << x2 << endl;	
}
