#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cout << "Ingresa un numero: ";
	cin >> num1;
	cout << "Ingresa otro numero: ";
	cin >> num2;
	cout << "Ingresa un tercer numero: ";
	cin >> num3;
	if (num1 > num2) {
		if (num1 > num3) {
			cout << "El primer numero que ingresaste es el mayor de todos.";
		}
		else {
			cout << "El tercer numero que ingresaste es el mayor de todos.";
		}
	}
	else {
		if (num2 > num3) {
			cout << "El segundo numero que ingresaste es el mayor de todos.";
		}
		else {
			cout << "El tercer numero que ingresaste es el mayor de todos.";
		}
	}

	return 0;
}