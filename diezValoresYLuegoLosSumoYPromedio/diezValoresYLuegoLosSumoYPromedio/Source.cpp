#include<iostream>
using namespace std;

int main() {
	int valorDeCorte, suma, valorIngresado, promedio;
	valorDeCorte = 1;
	suma = 0;
	while (valorDeCorte <= 10) {
		//pido por pantalla un numero
		cout << "ingrese un valor: ";
		//el valor ingresado lo guardo en la variable
		cin >> valorIngresado;
		//arranco a sumar los valores ingresados
		suma = suma + valorIngresado;
		//itero el valor de corte
		valorDeCorte = valorDeCorte + 1;
	}
	promedio = suma / 10;
	cout << "La suma de los 10 valores ingresados es: ";
	cout << suma;
	cout << "El promedio de los valores ingresados es: ";
	cout << promedio;
	return 0;
}