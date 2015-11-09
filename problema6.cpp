//*PROGRAMA QUE MUESTRA EN PANTALLA DOS NUMEROS Y REALIZA CON ELLOS OPERACIONES ARITMETICAS

#include <iostream>
using namespace std;

int main() {
	double numero1;
	double numero2;
	double resultadosuma;//*DECLARACION DE VARIBLES
	double resultadoresta;
	double resultadomultiplicacion;
	double resultadodivision;

//*MUESTRA EN PANTALLA UN MENSAJE PARA QUE EL USUSARIO INTRODUZCA EL PRIMER NUMERO
	cout << "Introduzca el primer numero" << endl;
//*GUARDA EN LA MEMORIA EL PRIMER NUMERO
	cin >> numero1;
	cout << "Introduzca el segundo numero" << endl;
	cin >> numero2;
//*OPERACIONES
	resultadosuma = numero1+numero2;
	cout << "La solucion a la suma de esos numeros es:" << resultadosuma << endl;
	resultadoresta = numero1-numero2;
	cout << "La solucion a la resta de esos numeros es:" << resultadoresta <<endl;
	resultadomultiplicacion = numero1*numero2;
	cout << "La solucion a la multiplicacion de esos numeros es:" << resultadomultiplicacion << endl;
	resultadodivision = numero1/numero2;
	cout << "La solucion a la division de esos numeros es:" << resultadodivision << endl;
}
