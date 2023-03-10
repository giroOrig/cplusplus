//Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.

#include<iostream>
using namespace std;

int main() {
	int cantidadDeNumeros, contador, cantidadTotalMayoresA1000, valorIngresado, cantidadTotalMenoresA1000;
	cantidadDeNumeros = 0;
	cantidadTotalMayoresA1000 = 0;
	valorIngresado = 0;
	cantidadTotalMenoresA1000 = 0;
	cout << "Ingrese la cantidad de numeros que quiere agregar: ";
	cin >> cantidadDeNumeros;
	for (contador = 0; contador < cantidadDeNumeros; contador++)
	{
		cout << "Ingrese un valor: ";
		cin >> valorIngresado;
		if (valorIngresado >= 1000) {
			cantidadTotalMayoresA1000 = cantidadTotalMayoresA1000 + 1;
		}
		else {
			cantidadTotalMenoresA1000 = cantidadTotalMenoresA1000 + 1;
		}
	}
	cout << "La cantidad de valores ingresados mayores a 1000 son: ";
	cout << cantidadTotalMayoresA1000;
	cout << "--";
	cout << "La cantidad de valores ingresados menores a 1000 son: ";
	cout << cantidadTotalMenoresA1000;
	return 0;
}