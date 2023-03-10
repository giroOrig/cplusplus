#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3, cuentaTotal;
	cout << "ingrese un numero: ";
	cin >> num1;
	cout << "Ingrese otro numero: ";
	cin >> num2;
	cout << "ingrese un tercer numero: ";
	cin >> num3;
	if (num1 == num2 && num2 == num3) {
		cuentaTotal = (num1 + num2) * num3;
		cout << "Los tres numeros que ingresaste son iguales.";
		cout << "Por eso vamos a sumar los dos primeros y al resultado, multiplicarlo por el tercero.";
		cout << cuentaTotal;
	}
	else {
		cout << "Ingresaste tres numeros distintos";
	}
	return 0;
}