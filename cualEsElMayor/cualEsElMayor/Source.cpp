#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Ingrese el valor del primer numero: ";
	cin >> num1;
	cout << "Ingrese el valor del segundo numero: ";
	cin >> num2;
	if (num1 > num2) {
		cout << "El primer valor ingresado es el mayor";
	}
	else {
		cout << "El segundo valor ingresado es el mayor";
	}
	return 0;
}