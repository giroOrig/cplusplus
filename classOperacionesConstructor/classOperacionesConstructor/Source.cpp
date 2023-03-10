//Implementar la clase Operaciones. Al constructor llegan dos enteros que deben 
//utilizarse en los métodos para calcular su suma, resta, multiplicación y división. 
//imprimir dichos resultados.

#include <iostream>
using namespace std;

class Operaciones {
private:
	int valor1, valor2;
public:
	Operaciones();
	void sumar();
	void restar();
	void dividir();
	void multiplicar();
};
Operaciones::Operaciones() {
	cout << "ingresar un valor: ";
	cin >> valor1;
	cout << "ingresar un segundo valor: ";
	cin >> valor2;
};
void Operaciones::sumar() {
	int suma;
	suma = 0;
	suma = valor1 + valor2;
	cout << "Al sumar " << valor1 << " + " << valor2 << " da un total de: " << suma << "\n";
};
void Operaciones::restar() {
	int resta;
	resta = 0;
	resta = valor1 - valor2;
	cout << "Al restar " << valor1 << " - " << valor2 << " da un total de: " << resta << "\n";
};
void Operaciones::dividir() {
	int division;
	division = 0;
	division = valor1 / valor2;
	cout << "Al dividir " << valor1 << " / " << valor2 << " da un total de: " << division << "\n";
};
void Operaciones::multiplicar() {
	int multi;
	multi = 0;
	multi = valor1 * valor2;
	cout << "Al multiplicar " << valor1 << " * " << valor2 << " da un total de: " << multi << "\n";
};

int main() {
	Operaciones operaciones;
	operaciones.sumar();
	operaciones.restar();
	operaciones.dividir();
	operaciones.multiplicar();
	return 0;
}