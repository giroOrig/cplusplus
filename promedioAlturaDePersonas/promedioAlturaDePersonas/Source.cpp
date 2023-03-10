#include<iostream>
using namespace std;

int main() {
	int cantidadPersonas, alturaPersona, contador, sumaAlturaPersonas;
	float promedio;
	contador = 1;
	cantidadPersonas = 0;
	sumaAlturaPersonas = 0;
	cout << "ingrese la cantidad de personas a medir: ";
	cin >> cantidadPersonas;
	while (contador <= cantidadPersonas) {
		cout << "ingrese la altura en cm: ";
		cin >> alturaPersona;
		sumaAlturaPersonas = alturaPersona + sumaAlturaPersonas;
		contador = contador + 1;
	}
	promedio = sumaAlturaPersonas / cantidadPersonas;
	cout << "El promedio de altura es: ";
	cout << promedio; 
	return 0;
}