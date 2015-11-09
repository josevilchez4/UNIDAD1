#include <iostream>
#include <cmath>
using namespace std;

int main() {

//DECLARAMOS LAS VARIABLES
	double pi0, pi1, pi2;
	double x0, x1, x2;
	double y1, y2;
//CALCULAR PI0
	pi0 = 2 + sqrt(2.0);
	cout << "El valor de pi0 es:" << pi0 << endl;
//CALCULAR PI1
	x0 = sqrt(2.0);
	y1 = pow(2,(1.0/4.0));
	x1 = (1.0/2.0)*(sqrt(x0)+(1.0/sqrt(x0)));
	pi1 = pi0*((x1+1)/(y1+1));
	cout << "El valor de pi1 es:" << pi1 << endl;
//CALCULAR PI2
	x2 = (1.0/2.0)*(sqrt(x1)+(1.0/sqrt(x1)));
	y2 = (y1*sqrt(x1)+(1.0/sqrt(x1)))/(y1+1);
	pi2 = pi1*((x2+1)/(y2+1));
	cout << "El valor de pi2 es:" << pi2 << endl;
}

