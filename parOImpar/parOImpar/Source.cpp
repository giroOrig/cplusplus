//Desarrollar un programa que permita cargar n números enteros y luego 
//nos informe cuántos valores fueron pares y cuántos impares.
//Emplear el operador “% ” en la condición de la estructura condicional
//(este operador retorna el resto de la división de dos valores, por ejemplo 11 % 2 retorna un 1)

#include<iostream>
using namespace std;

int main() {
	int cantidadDeNumeros, pares, impares, contador, valoresIngresados;
	cantidadDeNumeros = 0;
	pares = 0;
	impares = 0;
	contador = 1;
	valoresIngresados = 0;
	cout << "Cuantos numeros enteros queres ingresar?";
	cin >> cantidadDeNumeros;
	while (contador <= cantidadDeNumeros) {
		cout << "ingrese el valor del numero: ";
		cin >> valoresIngresados;
		if (valoresIngresados % 2 == 0) {
			pares = pares + 1;
		}
		else {
			impares = impares + 1;
		}
		contador = contador + 1;
	}
	cout << "la cantidad de numeros pares que ingresaste son: ";
	cout << pares;
	cout << "--";
	cout << "La cantidad de numeros impares que ingresaste son: ";
	cout << impares;
	return 0;
}