//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.
#include<iostream>
using namespace std;

int main() { 
	int contador, corte, valor, sumatoriaGeneral;
	corte = 10;
	sumatoriaGeneral = 0;
	for (contador = 0; contador < corte; contador++)
	{
		cout << "ingrese un valor: ";
		cin >> valor;
		if (contador >= 5) {
			sumatoriaGeneral = valor + sumatoriaGeneral;
		}
	}
	cout << "la suma de los ultimos 5 digitos es: ";
	cout << sumatoriaGeneral;
	cout << "\n";
	return 0; }