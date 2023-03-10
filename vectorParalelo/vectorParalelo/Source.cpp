//Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. 
//Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.

#include <iostream>
using namespace std;

class Productos {
private:
	char nombre[5][40];
	int precio[5];
public:
	void cargar();
	void precioMayorAlPrimero();
};
void Productos::cargar() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		cout << "Ingrese un nombre de producto: ";
		cin.getline(nombre[valor], 40);
		cout << "Ingrese el precio: ";
		cin >> precio[valor];
		cin.get();
	}
}
void Productos::precioMayorAlPrimero() {
	cout << "los productos con un precio mayor al primero son:";
	cout << "\n";
	for (size_t valor = 0; valor < 5; valor++)
	{
		if (precio[valor] > precio[0]) {
			cout << nombre[valor];
			cout << "\n";
		}
	}
}

int main() {
	Productos producto;
	producto.cargar();
	producto.precioMayorAlPrimero();
	return 0;
}