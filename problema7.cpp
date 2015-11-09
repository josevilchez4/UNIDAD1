//*PROGRAMA QUE LEE UN NUMERO ENTERO Y PROPORCIONA SU TABLA DE MULTIPLICAR.
#include <iostream>
using namespace std;

int main() {
	int numero;
	int resultado1;
	int resultado2;
	int resultado3;
	int resultado4;
	int resultado5;
	int resultado6;
	int resultado7;
	int resultado8;
	int resultado9;
	int resultado10;
	cout << "Introduzca un numero entero:";//*INTRODUCIMOS EL NUMERO DEL QUE QUEREMOS OBTENER LA TABLA DE MULTIPLICAR.
	cin >> numero;

//TABLA DE MULTIPLICAR DEL NUMERO ELEGIDO.
	resultado1 = numero * 1;
	cout << numero << "x1=" << resultado1 << endl;
	resultado2 = numero * 2;
	cout << numero << "x2=" << resultado2 << endl;
	resultado3 = numero * 3;
	cout << numero << "x3=" << resultado3 << endl;	
	resultado4 = numero * 4;
	cout << numero << "x4=" << resultado4 << endl;
	resultado5 = numero * 5;
	cout << numero << "x5=" << resultado5 << endl;
	resultado6 = numero * 6;
	cout << numero << "x6=" << resultado6 << endl;
	resultado7 = numero * 7;
	cout << numero << "x7=" << resultado7 << endl;
	resultado8 = numero * 8;
	cout << numero << "x8=" << resultado8 << endl;
	resultado9 = numero * 9;
	cout << numero << "x9=" << resultado9 << endl;
	resultado10 = numero * 10;
	cout << numero << "x10=" << resultado10 << endl;
}
