//Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
//El valor acumulado de todos los elementos del vector.
//El valor acumulado de los elementos del vector que sean mayores a 36.
//Cantidad de valores mayores a 50.

#include <iostream>
using namespace std;

class Vector8Elementos {
private:
	int vector[8];
public:
	void cargar();
	void acumulado();
	void acumuladoMayoresA36();
	void mayoresA50();
};

void Vector8Elementos::cargar() {
	
	for (size_t valores = 0; valores < 8; valores++)
	{
		cout << "Ingrese valores: ";
		cin >> vector[valores];
	}
	cout << "Valores ingresados correctamente!";
	cout << "\n";
}
void Vector8Elementos::acumulado() {
	int acumulado;
	acumulado = 0;
	for (size_t valores = 0; valores < 8; valores++)
	{
		acumulado = acumulado + vector[valores];
	}
	cout << "La sumatoria de los valores ingresados es: ";
	cout << acumulado;
	cout << "\n";
}
void Vector8Elementos::acumuladoMayoresA36() {
	int acumuladoMayoresA36;
	acumuladoMayoresA36 = 0;
	for (size_t valores = 0; valores < 8; valores++)
	{
		if (vector[valores] > 36)
		{
			acumuladoMayoresA36 = acumuladoMayoresA36 + vector[valores];
		}
	}
	cout << "La sumatoria de valores los ingresados mayores a 36 son: ";
	cout << acumuladoMayoresA36;
	cout << "\n";
}
void Vector8Elementos::mayoresA50() {
	int acumuladoMayoresA50;
	acumuladoMayoresA50 = 0;
	for (size_t valores = 0; valores < 8; valores++)
	{
		if (vector[valores] > 50)
		{
			acumuladoMayoresA50++;
		}
	}
	cout << "La cantidad de valores ingresados mayores a 50 son: ";
	cout << acumuladoMayoresA50;
	cout << "\n";
	cin.get();
	cin.get();
}

int main() {
	Vector8Elementos vector8;
	vector8.cargar();
	vector8.acumulado();
	vector8.acumuladoMayoresA36();
	vector8.mayoresA50();
	return 0;
}