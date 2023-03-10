//Realizar un programa que permita cargar dos listas de 15 valores cada una. 
// Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor 
//(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
//Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.

#include<iostream>
using namespace std;

int main() {
	int valoresLista1, valoresLista2, lista1, lista2, contador, corte, contadorListas;
	contador = 1;
	corte = 15;
	lista1 = 0;
	lista2 = 0;
	contadorListas = 1;
	while (contadorListas < 2) {
		while (contador <= corte) {
			cout << "Ingrese valores para la lista 1: ";
			cin >> valoresLista1;
			lista1 = valoresLista1 + lista1;
			cout << "Ingrese valores para la lista 2: ";
			cin >> valoresLista2;
			lista2 = valoresLista2 + lista2;
			contador = contador + 1;
		}
		contadorListas = contadorListas + 1;
	}
	if (lista1 > lista2) {
		cout << "lista 1 es la mayor";
	}
	else {
		if (lista1 < lista2) {
			cout << "Lista 2 es la mayor";
		}
		else {
			cout << "Las dos son iguales";
		}
	}
	return 0;
}