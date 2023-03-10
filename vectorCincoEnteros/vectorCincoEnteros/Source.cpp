//Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento. 
//En el constructor cargarlo con valores aleatorios entre 0 y 10.
//La clase debe utilizar solo la palabra clave public en la declaración de la clase.

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class VectorEnteros {
	int vector[5];
public:
	VectorEnteros();
	void imprimirMayorYMenor();
};
VectorEnteros::VectorEnteros() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		vector[valor] = rand() % 100 + 1;
		cout << vector[valor] << "\n";
	}
};
void VectorEnteros::imprimirMayorYMenor() {
	for (int k = 0; k < 4; k++)
	{
		for (int f = 0; f < 4 - k; f++)
		{
			if (vector[f] > vector[f + 1])
			{
				int aux;
				aux = vector[f];
				vector[f] = vector[f + 1];
				vector[f + 1] = aux;
			}
		}
	}
	cout << "El numero mayor es el: " << vector[4] << "\n";
	cout << "El numero menor es el: " << vector[0] << "\n";
	cin.get();
	cin.get();
};

int main() {
	VectorEnteros vector;
	vector.imprimirMayorYMenor();
	return 0;
}