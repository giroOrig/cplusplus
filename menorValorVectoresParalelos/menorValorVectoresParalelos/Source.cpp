//Cargar un vector de 5 elementos enteros. imprimir el menor y un mensaje si se repite dentro del vector.

#include <iostream>
using namespace std;

class Vector {
private:
	int vectorNumeros[5];
	int menor;
public:
	void cargar();
	void elMenor();
	void repiteMenor();
};
void Vector::cargar() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		cout << "ingrese el valor: ";
		cin >> vectorNumeros[valor];
	}
};
void Vector::elMenor() {
	int menor;
	menor = vectorNumeros[0];
	for (size_t f = 1; f < 5; f++)
	{
		if (vectorNumeros[f] < menor) {
			menor = vectorNumeros[f];
		}
	}
	cout << "El numero menor es: ";
	cout << menor;
	cout << "\n";
	cin.get();
};
void Vector::repiteMenor()
{
	int cant = 0;
	for (int f = 0; f < 5; f++)
	{
		if (vectorNumeros[f] == menor)
		{
			cant++;
		}
	}
	if (cant >= 1)
	{
		cout << "No Se repite el menor en el vector.";
	}
	else
	{
		cout << "se repite el menor en el vector.";
	}
	cin.get();
	cin.get();
}

int main() {
	Vector vector;
	vector.cargar();
	vector.elMenor();
	vector.repiteMenor();
	return 0;
};