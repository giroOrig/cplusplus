#include<iostream>
using namespace std;

int main() {
	int dia, mes;
	cout << "Ingrese dia: ";
	cin >> dia;
	cout << "Ingrese un mes: ";
	cin >> mes;
	if (dia == 25 || mes == 12) {
		cout << "La fecha que elegiste es NAVIDAD";
	}
	else {
		cout << "Esta es una fecha cualquiera";
	}
	return 0;
}