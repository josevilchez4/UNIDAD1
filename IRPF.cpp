#include <iostream>
using namespace std;
int main() {
	const double IRPF=0.21;
	double retencion;
	double salario_bruto;
	cout << "Introduzca salario bruto";
	cin >> salario_bruto;
	retencion = salario_bruto * IRPF;
	cout << "\n Retencion a aplicar:"<< retencion << endl;
}
