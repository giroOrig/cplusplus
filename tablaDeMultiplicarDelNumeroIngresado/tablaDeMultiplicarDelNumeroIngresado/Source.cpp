//Confeccionar un programa que permita ingresar un valor del 1 al 10 y 
//nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)

#include<iostream>
using namespace std;

int main() {
	int valor, contador, corte, multiplo;
	cout << "ingresar un numero: ";
	cin >> valor;
	for (contador = 1; contador <= 12; contador++)
	{
		multiplo = valor * contador;
		cout << multiplo;
		cout << "\n";
	}
	return 0;
}