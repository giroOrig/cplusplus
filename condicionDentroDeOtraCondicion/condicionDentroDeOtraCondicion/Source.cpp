#include<iostream>
using namespace std;

int main() {
	float nota1, nota2, nota3, promedio;
	cout << "Ingrese el el valor de la primera nota: ";
	cin >> nota1;
	cout << "Ingrese el el valor de la segundaa nota: ";
	cin >> nota2;
	cout << "Ingrese el el valor de la tercera nota: ";
	cin >> nota3;
	promedio = (nota1 + nota2 + nota3) / 3;
	if (promedio >= 7) {
		cout << "Aprobaste. Tu promedio fue: ";
		cout << promedio;
	}
	else {
		if (promedio >= 4) {
			cout << "Regular. Tu promedio fue: ";
			cout << promedio;
		}
		else {
			cout << "Malo. Tu promedio fue: ";
			cout << promedio;
		}
	}
	return 0;
}