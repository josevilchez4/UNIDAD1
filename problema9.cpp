//*PROGRAMA PARA CALCULAR LA NOTA FINAL DE UN ALUMNO DE PROGRAMACION A PARTIR DE 3 NOTAS CON DIFERENTES PORCENTAJES.
#include <iostream>
#include <cmath>
using namespace std;

int main () {
//*DECLARAMOS LAS VARIABLES:
	double notateoria; 
	double notapracticas;
	double notaproblemas;
	double nota1;
	double nota2;
	double nota3;
	double notafinal;

	cout << "Introduce tus notas:";
	cin >> notateoria >> notapracticas >> notaproblemas;
	nota1 = (notateoria*70)/100;
	nota2 = (notapracticas*20)/100;
	nota3 = (notaproblemas*10)/100;
	notafinal = nota1+nota2+nota3;
	cout << "Tu nota final es:" << notafinal << endl; 
}
