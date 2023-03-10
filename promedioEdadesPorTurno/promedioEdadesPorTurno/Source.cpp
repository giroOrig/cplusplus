//Se cuenta con la siguiente información:
//Las edades de 5 estudiantes del turno mañana.
//Las edades de 6 estudiantes del turno tarde.
//Las edades de 11 estudiantes del turno noche.
//Las edades de cada estudiante deben ingresarse por teclado.
//a) Obtener el promedio de las edades de cada turno(tres promedios)
//b) Imprimir dichos promedios(promedio de cada turno)
//c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.

#include<iostream>
using namespace std;

int main() {
	int contadorTM, contadorTT, contadorTN, edad, promedioTM, promedioTT, promedioTN, sumatoriaEdadTM, sumatoriaEdadTT, sumatoriaEdadTN;
	edad = 0;
	promedioTM = 0;
	promedioTT = 0;
	promedioTN = 0;
	sumatoriaEdadTM = 0;
	sumatoriaEdadTN = 0;
	sumatoriaEdadTT = 0;
	for (contadorTM = 0; contadorTM < 5; contadorTM++)
	{
		cout << "ingresar edad de alumno turno mañana: ";
		cin >> edad;
		sumatoriaEdadTM = edad + sumatoriaEdadTM;
		promedioTM = sumatoriaEdadTM / 5;
	}
	for (contadorTT = 0; contadorTT < 6; contadorTT++)
	{
		cout << "ingresar edad de alumno turno tarde: ";
		cin >> edad;
		sumatoriaEdadTT = edad + sumatoriaEdadTT;
		promedioTT = sumatoriaEdadTT / 6;
	}
	for (contadorTN = 0; contadorTN < 11; contadorTN++)
	{
		cout << "ingresar edad de alumno turno noche: ";
		cin >> edad;
		sumatoriaEdadTN = edad + sumatoriaEdadTN;
		promedioTN = sumatoriaEdadTN / 11;
	}

	cout << "El promedio de edad en turno mañana es: ";
	cout << promedioTM;
	cout << "\n";
	cout << "El promedio de edad en turno tarde es: ";
	cout << promedioTT;
	cout << "\n";
	cout << "El promedio de edad en turno noche es: ";
	cout << promedioTN;
	cout << "\n";
	if (promedioTM > promedioTT && promedioTM > promedioTN) {
		cout << "El turno mañana tiene el promedio de edad mas grande";
		cout << "\n";
	}
	else {
		if (promedioTM < promedioTT) {
			cout << "El turno noche tiene el promedio de edad mas grande";
			cout << "\n";
		}
		else {
			cout << "El turno tarde tiene el promedio de edad mas grande";
			cout << "\n";
		}
	}
	return 0;
}