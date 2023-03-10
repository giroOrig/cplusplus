#include<iostream>
using namespace std;

int main() {
	int cantidadDeEmpleados, contador, sueldoEmpleado, cantidadDeEmpleadosEntre100Y300, cantidadDeEmpleadosMayoresA300, sueldoTotal;
	cantidadDeEmpleados = 0;
	contador = 1;
	cantidadDeEmpleadosEntre100Y300 = 0;
	cantidadDeEmpleadosMayoresA300 = 0;
	sueldoTotal = 0;
	cout << "ingrese cantidad de empleados: ";
	cin >> cantidadDeEmpleados;
	while (contador <= cantidadDeEmpleados) {
		cout << "Diga el sueldo del empleado: ";
		cin >> sueldoEmpleado;
		contador = contador + 1;
		sueldoTotal = sueldoEmpleado + sueldoTotal; 
		if (sueldoEmpleado >= 100 && sueldoEmpleado <= 300) {
			cantidadDeEmpleadosEntre100Y300 = cantidadDeEmpleadosEntre100Y300 + 1;
		}
		else {
			cantidadDeEmpleadosMayoresA300 = cantidadDeEmpleadosMayoresA300 + 1;
		}
	}
	cout << "El sueldo total a pagar es: $";
	cout << sueldoTotal;
	cout << "La cantidad de empleados entre 100 y 300 es: ";
	cout << cantidadDeEmpleadosEntre100Y300;
	cout << "La cantidad de empleados mayores a 300 es: ";
	cout << cantidadDeEmpleadosMayoresA300;
	return 0;
}