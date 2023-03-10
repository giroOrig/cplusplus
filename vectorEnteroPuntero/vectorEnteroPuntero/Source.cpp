//Plantear una clase para administrar un vector de 5 enteros. 
//Definir además del método para cargar el vector un método que imprima las componentes 
//empleando un puntero que avance por todas las direcciones de las componentes utilizando el operador ++.

#include <iostream>
using namespace std;

class VectorEnteros {
	int vector[5];
public:
	VectorEnteros();
	void imprimir();
};

VectorEnteros::VectorEnteros() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		cout << "Ingrese un valor: ";
		cin >> vector[valor];
	}
};
void VectorEnteros::imprimir() {
	int* puntero;
	puntero = vector;
	for (size_t valor = 0;  valor < 5;  valor++)
	{
		cout << *puntero;
		puntero++;
		cout << " - ";
	}
};

int main() {
	VectorEnteros ve;
	ve.imprimir();
	return 0;
}