//Confeccionar una clase Persona que tenga como atributos el nombre y la edad. 
//Definir como responsabilidades un método que cargue los datos personales y otro que los imprima.
//Plantear una segunda clase Empleado que herede de la clase Persona.
//Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.
//Definir un objeto de la clase Persona y llamar a sus métodos.
//También crear un objeto de la clase Empleado y llamar a sus métodos.

#include <iostream>
using namespace std;

class Persona {
protected:
	char nombre[40];
	int edad;
public:
	Persona();
	void imprimir();
};

class Empleado :public Persona {
	int sueldo;
public:
	Empleado();
	void imprimir();
};

Persona::Persona() {
	cout << "Ingresar nombre de persona: ";
	cin.getline(nombre, 40);
	cout << "Ingresar edad: ";
	cin >> edad;
	cin.get();
};
void Persona::imprimir() {
	cout << "La persona de nombre " << nombre << "tiene " << edad << "anios" << "\n";
};
Empleado::Empleado() {
	cout << "Ingresar el sueldo del empleado: ";
	cin >> sueldo;
};
void Empleado::imprimir() {
	cout << "El sueldo de " << nombre << " tiene " << edad << " anios y un sueldo de $" << sueldo << "\n";
};

int main() {
	Empleado emp1;
	emp1.imprimir();
	return 0;
}