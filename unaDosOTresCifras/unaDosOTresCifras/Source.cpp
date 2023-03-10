#include<iostream>
using namespace std;

int main() {
	int num1;
	cout << "ingrese un numero de una, dos o tres cifras: ";
	cin >> num1;
	if (num1 >= 1000) {
		cout << "El numero ingresado es erroneo ya que tiene cuatro cifras.";
	}
	else {
		if (num1 > 99) {
			cout << "El numero ingresado tiene tres cifras";
		}
		else {
			if (num1 > 9) {
				cout << "El numero ingresado tiene dos cifras";
			}
			else {
				cout << "El numero ingresado tiene una cifra";
			}
		}
	}
	return 0;
}