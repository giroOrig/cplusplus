#include <iostream>

using namespace std;

int main() {
	int num1, num2, suma, resta, division, multiplicacion;
	cout << "Ingrese el valor del primer numero: ";
	cin >> num1;
	cout << "Ingrese el valor del segundo numero: ";
	cin >> num2;
	if (num1 > num2) {
		suma = num1 + num2;
		resta = num1 - num2;
		cout << "Como el primer valor que ingresaste es mayor que el segundo, vamos a sumar y hacer una resta entre ellos";
		cout << "El valor de la suma es: ";
		cout << suma;
		cout << "Y el valor de la resta es: ";
		cout << resta;
	}
	else {
		multiplicacion = num1 * num2;
		division = num2 / num1;
		cout << "Como el segundo valor es mayor que el primero que ingresaste, vamos a multiplicar y dividir.";
		cout << "El producto es: ";
		cout << multiplicacion;
		cout << "El resultado de la division es: ";
		cout << division;
	}
	return 0;
}