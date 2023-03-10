//Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.

#include <iostream>
using namespace std;

class VectorOrdenado {
private:
	int vector[10];
public:
	void cargarVector();
	void ordenarVector();
};
void VectorOrdenado::cargarVector() {
	int valor;
	valor = 0;
	for (size_t valor = 0; valor < 10; valor++)
	{
		cout << "ingresar un valor: ";
		cin >> vector[valor];
	}
};
void VectorOrdenado::ordenarVector() {
    int orden = 1;
    for (int f = 0; f < 9; f++)
    {
        if (vector[f + 1] < vector[f])
        {
            orden = 0;
        }
    }
    if (orden == 1)
    {
        cout << "Esta ordenado de menor a mayor";
    }
    else
    {
        cout << "No esta ordenado de menor a mayor";
    }
    cin.get();
    cin.get();
};

int main() {
    VectorOrdenado vectorordenado;
    vectorordenado.cargarVector();
    vectorordenado.ordenarVector();
	return 0;
}