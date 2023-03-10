//Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
//a) La cantidad de valores ingresados negativos.
//b) La cantidad de valores ingresados positivos.
//c) La cantidad de múltiplos de 15.
//d) El valor acumulado de los números ingresados que son pares.

#include<iostream>
using namespace std;

int main() {
	int valores, valoresNegativos, valoresPositivos, multiploDe15, acumulado, contador;
	valoresNegativos = 0;
	valoresPositivos = 0;
	acumulado = 0;
	multiploDe15 = 0;
	for (contador = 1; contador <= 10; contador++)
	{
		cout << "ingresar un valor: ";
		cin >> valores;
		if (valores < 0) {
			valoresNegativos = valoresNegativos + 1;
		}
		else {
			valoresPositivos = valoresPositivos + 1;
			if (valores % 2 == 0) {
				acumulado = valores + acumulado;
			}
		}
		if (valores%15==0)
		{
			multiploDe15 = multiploDe15 + 1;
		}
	}
	cout << "la cantidad de valores positivos es: ";
	cout << valoresPositivos;
	cout << "\n";
	cout << "la cantidad de valores negativos es: ";
	cout << valoresNegativos;
	cout << "\n";
	cout << "La cantidad de valores multiplo de 15 es: ";
	cout << multiploDe15;
	cout << "\n";
	cout << "El valor acumulado de los valores pares es: ";
	cout << acumulado;

	return 0;
}