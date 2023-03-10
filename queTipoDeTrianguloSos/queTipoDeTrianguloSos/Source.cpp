//Realizar un programa que lea los lados de n triángulos, e informar:
// a) De cada uno de ellos, qué tipo de triángulo es : equilátero(tres lados iguales), 
// isósceles(dos lados iguales), o escaleno(ningún lado igual)
// b) Cantidad de triángulos de cada tipo.
// c) Tipo de triángulo que posee menor cantidad.

#include<iostream>
using namespace std;

int main() {
	int cantidadTriangulos, lado1, lado2, lado3, cantidadTriIso, cantidadTriEqui, cantidadTriEsca, contador;
	cantidadTriangulos = 0;
	cantidadTriEqui = 0;
	cantidadTriEsca = 0;
	cantidadTriIso = 0;
	lado1 = 0;
	cout << "ingrese la cantidad de triangulos a procesar: ";
	cin >> cantidadTriangulos;
	for (contador = 0; contador < cantidadTriangulos; contador++)
	{
		cout << "ingresar lado 1: ";
		cin >> lado1;
		cout << "ingresar lado 2: ";
		cin >> lado2;
		cout << "ingresar lado 3: ";
		cin >> lado3;
		if (lado1 == lado2 && lado1 == lado3) {
			cout << "es un triangulo equilatero";
			cout << "\n";
			cantidadTriEqui = cantidadTriEqui + 1;
		}
		else {
				if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
			{
				cout << "Es un triangulo Isoceles";
				cout << "\n";
				cantidadTriIso = cantidadTriIso + 1;
			}
			else {
				cout << "es un triangulo escaleno";
				cout << "\n";
				cantidadTriEsca = cantidadTriEsca + 1;
			}
		}
	}
	cout << "la cantidad de triangulos equilateros es: ";
	cout << cantidadTriEqui;
	cout << "\n";
	cout << "la cantidad de triangulos isoceles es: ";
	cout << cantidadTriIso;
	cout << "\n";
	cout << "la cantidad de triangulos escaleno es: ";
	cout << cantidadTriEsca;
	cout << "\n";
	if (cantidadTriEqui < cantidadTriIso && cantidadTriEqui < cantidadTriEsca) {
		cout << "El triangulo equilatero es el que menos tiene";
	}
	else {
		if (cantidadTriIso > cantidadTriEsca) {
			cout << "El triangulo escaleno es que que menos tiene";
		}
		else {
			cout << "El triangulo isoceles es el que menos tiene";
		}
	}
	return 0;
}