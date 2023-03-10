#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cout << "Ingresa un numero: ";
	cin >> num1;
	cout << "Ingresa un segundo numero: ";
	cin >> num2;
	cout << "Ingresa un tercer numero: ";
	cin >> num3;
	if (num1 < 10 && num2 < 10 && num3 < 10) {
		cout << "Todos los numeros son menores de 10";
	}
	else {
		cout << "Algún numero no es menor de diez";
	}
	return 0;
}