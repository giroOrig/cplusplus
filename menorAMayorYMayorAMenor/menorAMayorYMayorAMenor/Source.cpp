//Cargar un vector de 5 elementos enteros. 
//Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.

#include <iostream>
using namespace std;

class cincoElementos {
private:
	int vectorNum[5];
public:
	void cargar();
	void ordenarMenorAMeyor();
	void ordenarMayorAMenor();
};

void cincoElementos::cargar() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		cout << "Ingresar valor: ";
		cin >> vectorNum[valor];
	}
};
void cincoElementos::ordenarMenorAMeyor() {
	for (size_t f = 0; f < 4; f++)
	{
		for (size_t k = 0; k < 4 - f; k++)
		{
			if (vectorNum[k] < vectorNum[k + 1]) {
				int aux;
				aux = vectorNum[k];
				vectorNum[k] = vectorNum[k + 1];
				vectorNum[k + 1] = aux;
			}
		}
	}
	cout << "Numeros ordenados de menor a mayor.";
	cout << "\n";
	for (int f = 0; f < 5; f++)
	{
		cout << vectorNum[f];
		cout << "\n";
	}
	cin.get();
	cin.get();
};
void cincoElementos::ordenarMayorAMenor() {
	for (size_t f = 0; f < 4; f++)
	{
		for (size_t k = 0; k < 4 - f; k++)
		{
			if (vectorNum[k] > vectorNum[k + 1]) {
				int aux;
				aux = vectorNum[k];
				vectorNum[k] = vectorNum[k + 1];
				vectorNum[k + 1] = aux;
			}
		}
	}
	cout << "Numeros ordenados de mayor a menor.";
	cout << "\n";
	for (int f = 0; f < 5; f++)
	{
		cout << vectorNum[f];
		cout << "\n";
	}
	cin.get();
	cin.get();
};

int main() {
	cincoElementos cincoelementos;
	cincoelementos.cargar();
	cincoelementos.ordenarMayorAMenor();
	cincoelementos.ordenarMenorAMeyor();
	return 0;
}