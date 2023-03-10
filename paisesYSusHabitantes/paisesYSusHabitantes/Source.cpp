//Cargar en un vector los nombres de 5 países y en otro vector paralelo la cantidad de habitantes del mismo. 
// Ordenar alfabéticamente e imprimir los resultados. 
//Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.

#include <iostream>
using namespace std;

class Paises {
private:
	char nombre[5][40];
	int cantidadHabitantes[5];
public:
	void cargar();
	void ordenarAlfabeticamente();
	void ordenarPorCantidadDeHabitantes();
	void imprimir();
};

void Paises::cargar() {
	cout << "Paises y habitantes";
	cout << "\n";
	for (size_t valores = 0; valores < 5; valores++)
	{
		cout << "Ingrese el nombre del pais: ";
		cin.getline(nombre[valores], 40);
		cout << "ingrese la cantidad de habitantes del pais: ";
		cin >> cantidadHabitantes[valores];
		cin.get();
	}

};
void Paises::ordenarAlfabeticamente() {
	for (size_t k = 0; k < 5; k++)
	{
		for (size_t f = 0; f < 4 - k; f++)
		{
			if (strcmp(nombre[f], nombre[f + 1]) > 0)
			{
				char auxnombre[40];
				strcpy_s(auxnombre, 40, nombre[f]);
				strcpy_s(nombre[f], 40, nombre[f + 1]);
				strcpy_s(nombre[f + 1], 40, auxnombre);
			}

		}
	}
};
void Paises::ordenarPorCantidadDeHabitantes() {
	for (size_t k = 0; k < 5; k++)
	{
		for (size_t f = 0; f < 4 - k; f++)
		{
			if (cantidadHabitantes[f] < cantidadHabitantes[f + 1]) {
				int auxnota;
				auxnota = cantidadHabitantes[f];
				cantidadHabitantes[f] = cantidadHabitantes[f + 1];
				cantidadHabitantes[f + 1] = auxnota;
			}
	
		}
	}
};
void Paises::imprimir() {
	cout << "Nombres de paises mayor a menor" << "\n";
	for (int f = 0; f < 5; f++)
	{
		cout << nombre[f] << "\n";
	}
	cout << "Cantidad de habitantes de mayor a menor" << "\n";
	for (int f = 0; f < 5; f++)
	{
		cout << cantidadHabitantes[f] << "\n";
	}
	cin.get();
	cin.get();
}

int main() {
	Paises paises;
	paises.cargar();
	paises.ordenarAlfabeticamente();
	paises.ordenarPorCantidadDeHabitantes();
	paises.imprimir();
	return 0;
}