//Desarrollar una clase con dos métodos, uno para la carga de dos enteros. 
//Definir un método privado que le enviemos los valores ingresados por teclado 
//y nos retorne el mayor de ellos.

#include <iostream>
using namespace std;

class ElMayorDeDosValores {
private:
	int calcularMayor(int valor1, int valor2);
public:
	void cargarValores();
};

int ElMayorDeDosValores :: calcularMayor(int valor1, int valor2) {
	int valorMayor;
	valorMayor = 0;
	if (valor1 > valor2) {
		valorMayor = valor1;
	}
	else {
		if (valor2 > valor1) {
			valorMayor = valor2;
		}
		else {
			cout << "Los dos valores son iguales";
		}
	}
	return valorMayor;
}
void ElMayorDeDosValores::cargarValores() {
	int valor1, valor2, valorMayorAMostrar;
	valor1 = 0;
	valor2 = 0;
	cout << "Ingrese el primer valor: ";
	cin >> valor1;
	cout << "Ingrese el segundo valor: ";
	cin >> valor2;
	valorMayorAMostrar = calcularMayor(valor1, valor2);
	cout << "El valor mayor es: ";
	cout << valorMayorAMostrar;
	cin.get();
	cin.get();
}

int main() {
	ElMayorDeDosValores elmayordedosvalores;
	elmayordedosvalores.cargarValores();
	return 0;
}