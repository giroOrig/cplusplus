#include <iostream>
using namespace std;

int main() {
	int num1;
	cout << "ingrese un numero: ";
	cin >> num1;
	if (num1 > 0) {
		cout << "El numero que ingreso es positivo";
	}
	else {
		if (num1 == 0) {
			cout << "El numero que ingresaste es nulo";
		}
		else {
			cout << "El numero que ingresaste es negativo";
		}

	}
	return 0;
}