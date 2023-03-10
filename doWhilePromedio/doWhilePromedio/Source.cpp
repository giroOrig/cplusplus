//Escribir un programa que solicite la carga de números por teclado,
// obtener su promedio. Finalizar la carga de valores cuando se cargue el valor 0.
//Cuando la finalización depende de algún valor ingresado por el operador conviene
// el empleo de la estructura do while, por lo menos se cargará un valor
//(en el caso más extremo se carga 0, que indica la finalización de la carga de valores)

#include<iostream>
using namespace std;

int main() {
	int suma, cantidad, valorIngresado, promedio;
	suma = 0;
	cantidad = 0;
	valorIngresado = 0;
	promedio = 0;
	do {
		cout << "Ingrese un valor (tocando 0 se termina el proceso): ";
		cin >> valorIngresado;
		if (valorIngresado != 0) {
			suma = suma + valorIngresado;
			cantidad++;
		}
	} while (valorIngresado != 0);
	if (cantidad != 0) {
		promedio = suma / cantidad;
		cout << "El promedio de los valores ingresados es: ";
		cout << promedio;
	}
	else {
		cout << "No se ingresaron valores";
	}
	return 0;
}