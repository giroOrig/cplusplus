//Confeccionar una clase que represente un empleado. 
//Definir como atributos su nombre y su sueldo. 
//En el constructor cargar los atributos y luego en otro método imprimir sus datos 
//y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)

#include <iostream>
using namespace std;

class Empleado {
private:
	char nombre[40];
	int sueldo;
public:
	Empleado();
	void imprimir();
	void debePagarImpuestos();
};

Empleado::Empleado() {
	cout << "ingresar nombre empleado: ";
	cin.getline(nombre, 40);
	cout << "ingresar sueldo: ";
	cin >> sueldo;
};
void Empleado::imprimir() {
	cout << "El empleado " << nombre << " tiene un sueldo de $" << sueldo << "\n";
};
void Empleado::debePagarImpuestos() {
	if (sueldo>=3000)
	{
		cout << "Su sueldo es mayor a 3000, debe pagar impuestos";
	}
	else {
		cout << "Su sueldo es menor a 3000, no debe pagar impuestos";
	}
};

int main() {
	Empleado empleado;
	empleado.imprimir();
	empleado.debePagarImpuestos();
	return 0;
}