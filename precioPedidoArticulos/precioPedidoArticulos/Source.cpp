#include<iostream>
using namespace std;

int main()
{
	float precioArticulo, precioFinal;
	int cantidadDeArticulos;
	cout << "Hola, que precio tiene el articulo que queres llevar: $";
	cin >> precioArticulo;
	cout << "y que cantidad vas a llevar de ese articulo? ";
	cin >> cantidadDeArticulos;
	precioFinal = precioArticulo * cantidadDeArticulos;
	cout << " Estas llevando ";
	cout << cantidadDeArticulos;
	cout << "carpas. Cada una cuesta $";
	cout << precioArticulo;
	cout << "y el total de toda la compra es: $";
	cout << precioFinal;
	return 0;
}