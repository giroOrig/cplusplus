//Implementar una clase que permita cargar un vector de 5 elementos. Definir tres métodos sobrecargados que :
//void imprimir(); //imprime todo el vector
//void imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos
//void imprimir(int desde, int hasta);//imprime un rango de valores del vector.

#include <iostream>
using namespace std;

class VectorCincoElementos {
	int vector[5];
public:
	VectorCincoElementos();
	void imprimir();
	void imprimir(int hasta);
	void imprimir(int desde, int hasta);
};

VectorCincoElementos::VectorCincoElementos() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		cout << "Ingrese un valor: ";
		cin >> vector[valor];
	}
};
void VectorCincoElementos::imprimir() {
	cout << "Se imprimen todos los valores" << "\n";
	for (size_t valor = 0; valor < 5; valor++)
	{	
		
		cout << vector[valor] << "\n";
	}
};
void VectorCincoElementos::imprimir(int hasta) {
	cout << "Se imprimen los valores hasta el" << hasta << "\n";
	for (size_t valor = 0; valor <= hasta; valor++)
	{
		
		cout << vector[valor] << "\n";
	}
};
void VectorCincoElementos::imprimir(int desde, int hasta) {
	cout << "Se imprimen los valores desde" << desde << " hasta el " << hasta << "\n";
	for (size_t valor = desde ; valor <= hasta; valor++)
	{
		
		cout << vector[valor] << "\n";
	}
};

int main() {
	VectorCincoElementos v5;
	v5.imprimir();
	v5.imprimir(1);
	v5.imprimir(2, 4);
	return 0;
}
