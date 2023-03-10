#include<iostream>
using namespace std;

int main ()
{
	int num1, num2, num3, num4, sumaDosPrimeros, productoUltimosDos;
	cout << "Necesito que me digas cuatro numeros.\n";
	cout << "decime el valor del primer numero: ";
	cin >> num1;
	cout << "decime el valor del segundo numero: ";
	cin >> num2;
	cout << "decime el valor del tercer numero: ";
	cin >> num3;
	cout << "decime el valor del cuarto numero: ";
	cin >> num4;
	sumaDosPrimeros = num1 + num2;
	productoUltimosDos = num3 * num4;
	cout << "El resultado de la suma de los dos primeros numeros es: ";
	cout << sumaDosPrimeros;
	cout << "\n";
	cout << "El producto de los ultimos dos numeros es: ";
	cout << productoUltimosDos;
	cout << "\n";
	return 0;

}