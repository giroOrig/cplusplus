#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, suma;
	float promedio;
	int numero4 = 4;
	cout << "Necesito que me digas cuatro numeros.\n";
	cout << "decime el valor del primer numero: ";
	cin >> num1;
	cout << "decime el valor del segundo numero: ";
	cin >> num2;
	cout << "decime el valor del tercer numero: ";
	cin >> num3;
	cout << "decime el valor del cuarto numero: ";
	cin >> num4;
	suma = num1 + num2 + num3 + num4;
	promedio = suma / numero4;
	cout << "El resultado de la suma de los dos primeros numeros es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio de los numeros que elegiste es: ";
	cout << promedio;
	cout << "\n";
	return 0;

}