#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cout << "ingrese un numero: ";
	cin >> num1;
	cout << "ingrese un segundo numero: ";
	cin >> num2;
	cout << "ingrese un tercer numero: ";
	cin >> num3;
	if (num1 < 10 || num2 < 10 || num3 < 10) {
		cout << "Algún numero es menor de diez.";
	}
	else {
		cout << "ningun numero es menor de diez";
	}
	return 0;
}