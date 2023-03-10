#include<iostream>
using namespace std;

int main() {
	int piezasAProcesar, cantidadDePiezas, contador;
	float largoPieza;
	// se define el contador
	contador = 1;
	cantidadDePiezas = 0;
	// se pide la cantidad de piezas a procesar
	cout << "ingrese la cantidad de piezas que vamos a ingresar: ";
	cin >> piezasAProcesar;
	// arranca en 1 y va hasta la cantidad de piezas a procesar que le pusimos
	while (contador <= piezasAProcesar) {
		// se ingresa el largo de cada pieza
		cout << "Ingrese el largo de la pieza: ";
		cin >> largoPieza;
		// si el largo de la pieza esta entre rango, se suma una cantidad de pieza.
		if (largoPieza > 1.20 && largoPieza < 1.30) {
			cantidadDePiezas = cantidadDePiezas + 1;
		}
		// se itera el contador
		contador = contador + 1;
	}
	cout << "La cantidad de piezas que se pueden usar son: ";
	cout << cantidadDePiezas;
	return 0;
}