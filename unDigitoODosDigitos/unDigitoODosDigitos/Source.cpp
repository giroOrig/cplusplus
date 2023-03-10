#include <iostream>
using namespace std;

int main() {
	int numeroEntero;
	cout << "Ingrese un numero entero del 1 al 100: ";
	cin >> numeroEntero;
	if (numeroEntero >= 10) {
		cout << "Elegiste un numero de dos cifras. Elegiste el: ";
		cout << numeroEntero;
	}
	else {
		cout << "Elegiste un numero de una cifra. Elegiste el: ";
		cout << numeroEntero;
	}
	return 0;
}