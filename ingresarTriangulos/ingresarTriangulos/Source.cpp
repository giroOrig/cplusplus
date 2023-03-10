//Confeccionar un programa que lea n pares de datos, 
//cada par de datos corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
//a) De cada triángulo la medida de su base, su altura y su superficie.
//b) La cantidad de triángulos cuya superficie es mayor a 12.

#include<iostream>
using namespace std;

int main() {
	int contador, base, altura, superficie, cantidadTriangulos, cantidadTriangulosConSuperficieMayorA12;
	cout << "ingrese la cantidad de triangulos a procesar: ";
	cin >> cantidadTriangulos;
	cantidadTriangulosConSuperficieMayorA12 = 0;
	for ( contador = 0; contador < cantidadTriangulos; contador++)
	{
		cout << "ingrese el tamaño de la base: ";
		cin >> base;
		cout << "ingrese el tamaño de la altura: ";
		cin >> altura;
		superficie = base * altura / 2;
		
		if (superficie > 12) {
			cantidadTriangulosConSuperficieMayorA12 = cantidadTriangulosConSuperficieMayorA12 + 1;
		}
	
	}
	cout << "la base del triangulo mide: ";
	cout << base;
	cout << "\n";
	cout << "la altura del triangulo mide: ";
	cout << altura;
	cout << "\n";
	cout << "la superficie del triangulo mide: ";
	cout << superficie;
	cout << "\n";
	cout << "La cantidad de triangulos con una superficie mayor a 12 son: ";
	cout << cantidadTriangulosConSuperficieMayorA12;
	return 0;
}