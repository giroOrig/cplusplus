//Confeccionar una clase que represente un empleado. 
//Definir como atributos su nombre y su sueldo. 
//Confeccionar los métodos para la carga, otro para imprimir sus datos 
//y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)

#include <iostream>
using namespace std;

	class Empleado {
	private:
		char nombre[40];
		int sueldo;
	public:
		void inicializar();
		void imprimir();
		void pagaImpuestos();
	};

	void Empleado::inicializar() {
		cout << "ingrese su nombre: ";
		cin.getline(nombre, 40);
		cout << "ingrese su sueldo: ";
		cin >> sueldo;
	}
	void Empleado::imprimir() {
		cout << "El nombre del empleado es: ";
		cout << nombre;
		cout << "\n";
		cout << "Su sueldo es: $";
		cout << sueldo;
		cout << "\n";
	}
	void Empleado::pagaImpuestos() {
		if (sueldo > 3000) {
			cout << "El empleado paga impuestos";
			cout << "\n";
		}
		else {
			cout << "El empleado no paga impuestos";
			cout << "\n";
		}
	}
	int main() {
		Empleado empleadoUno;
		empleadoUno.inicializar();
		empleadoUno.imprimir();
		empleadoUno.pagaImpuestos();
		return 0;
	}