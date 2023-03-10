#include<iostream>
using namespace std;

int main() {
	float sueldoOperador, sueldoFinal;
	int aniosAntiguedad;
	cout << "ingresar el sueldo del operador: ";
	cin >> sueldoOperador;
	cout << "ingresar los años de antiguedad del operador: ";
	cin >> aniosAntiguedad;
	if (sueldoOperador >= 500) {
		cout << sueldoOperador;
	}
	else {
		if (sueldoOperador < 500 && aniosAntiguedad >= 10) {
			sueldoFinal = sueldoOperador + sueldoOperador * .2;
			cout << "El operario recibe un aumento del 20% por tener mas de 10 años de antiguedad.";
			cout << "El sueldo es: $";
			cout << sueldoFinal;
		}
		else {
			if (sueldoOperador < 500 && aniosAntiguedad < 10) {
				sueldoFinal = sueldoOperador + sueldoOperador * .05;
				cout << "El operario recibe un aumento del 5% por tener menos de 10 años de antiguedad.";
				cout << "El sueldo es: $";
				cout << sueldoFinal;
			}
		}
	}
	return 0;
}