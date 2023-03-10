#include <iostream>
using namespace std;

int main() {
	int dia, mes, anio;
	cout << "Ingrese un día: ";
	cin >> dia;
	cout << "Ingrese un mes: ";
	cin >> mes;
	cout << "Ingrese un anio: ";
	cin >> anio;
	if (mes == 1 || mes == 2 || mes == 3) {
		cout << "La fecha ingresada corresponde al primer trimestre";
	}
	else {
		if (mes == 4 || mes == 5 || mes == 6) {
			cout << "La fecha ingresada corresponde al segundi trimestre";
		}
		else {
			if (mes == 7 || mes == 8 || mes == 9) {
				cout << "La fecha ingresada corresponde al tercer trimestre";
			}
			else {
				cout << "La fecha ingresda corresponde al cuarto trimestre";
			}
		}
	}
	return 0;
}