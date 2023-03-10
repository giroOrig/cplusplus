//Implementar la clase operaciones. Se deben cargar dos valores enteros, 
//calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.

#include <iostream>
using namespace std;

class Operaciones {
private:
	int valor1, valor2;
public:
	void inicializar();
	void sumar();
	void restar();
	void multiplicar();
	void dividir();
};
void Operaciones::inicializar() {
	cout << "Ingresar el primer valor: ";
	cin >> valor1;
	cout << "Ingresar el segundo valor: ";
	cin >> valor2;
}
void Operaciones::sumar(){
	int suma;
	suma = valor1 + valor2;
	cout << "El resultado de la suma es: ";
	cout << suma;
	cout << "\n";
}
void Operaciones::restar() {
	int restar;
	restar = valor1 - valor2;
	cout << "El resultado de la resta es: ";
	cout << restar;
	cout << "\n";
}
void Operaciones::multiplicar() {
	int multiplicar;
	multiplicar = valor1 * valor2;
	cout << "El resultado de la multiplicar es: ";
	cout << multiplicar;
	cout << "\n";
}
void Operaciones::dividir() {
	int dividir;
	dividir = valor1 / valor2;
	cout << "El resultado de la dividir es: ";
	cout << dividir;
	cout << "\n";
}

int main() {
	Operaciones operaciones;
	operaciones.inicializar();
	operaciones.sumar();
	operaciones.restar();
	operaciones.dividir();
	operaciones.multiplicar();
	return 0;
}