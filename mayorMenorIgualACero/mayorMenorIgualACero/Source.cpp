//Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 
//(no sumar dicho valor, indica que ha finalizado la carga). 
//Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.

#include<iostream>
using namespace std;

int main() {
	int acumulado, valorIngresado;
	acumulado = 0;
	do {
		cout << "Ingrese un valor (9999 termina el programa): ";
		cin >> valorIngresado;
		acumulado = acumulado + valorIngresado;
		if (valorIngresado != 9999) {
			if (acumulado > 0) {
				cout << "El valor acumulado es mayor a 0. Es: ";
				cout << acumulado;
				cout << "\n";
			}
			else {
				if (acumulado == 0) {
					cout << "El valor acumulado es 0.";
					cout << "\n";
				}
				else {
					cout << "El valor acumulado es menor a 0. Es: ";
					cout << acumulado;
					cout << "\n";
				}
			}
		}
		else {
			cout << "Finalizando...";
		}
		
	} while (valorIngresado != 9999);


	return 0;
}