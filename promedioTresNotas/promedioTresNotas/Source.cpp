#include <iostream>
using namespace std;

int main() {
	float nota1, nota2, nota3, promedio;
	cout << "Ingresar la primera nota: ";
	cin >> nota1;
	cout << "Ingresar la segunda nota: ";
	cin >> nota2;
	cout << "Ingresar la tercera nota: ";
	cin >> nota3;
	promedio = (nota1 + nota2 + nota3) / 3;
	if (promedio >= 7) {
		cout << "promocionaste! Tu nota fue: ";
		cout << promedio;
	}
	else {
		cout << "no promocionaste Tu nota fue: ";
		cout << promedio;
	}
	return 0;
}