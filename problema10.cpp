//*PROGRAMA PARA CALCULAR LA MEDIA ARITMETICA Y LA DESVIACION TIPICA A PARTIR DE 3 VALORES.
#include <iostream>
#include <cmath>
using namespace std;

int main() {

//* DECLARAMOS LAS VARIABLES
	double x1;
	double x2;
	double x3;
	double m;
	double d;
//*EMPEZAMOS EL PROGRAMA
	cout << "Introduzca los 3 valores para x1 x2 x3:";
	cin >> x1 >> x2 >> x3;
	m = (x1+x2+x3)/3;
	cout << "Valor de la media aritmetica:" << m << endl;
	d = sqrt(pow(x1-m,2)+pow(x2-m,2)+pow(x3-m,2)/3);
	cout << "Valor de la desviacion tipica:" << d << endl;
}
