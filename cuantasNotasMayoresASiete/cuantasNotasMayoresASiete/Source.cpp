#include<iostream>;
using namespace std;

int main() {
	int contador, cantidadDeNotas, notaAlumno, cantidadMayorASiete, cantidadMenorASiete;
	contador = 1;
	cantidadDeNotas = 10;
	cantidadMayorASiete = 0;
	cantidadMenorASiete = 0;
	while (contador <= cantidadDeNotas) {
		cout << "Ingrese una nota: ";
		cin >> notaAlumno;
		if (notaAlumno >= 7) {
			cantidadMayorASiete = cantidadMayorASiete + 1;
		}
		else {
			cantidadMenorASiete = cantidadMenorASiete + 1;
		}
		contador = contador + 1;
	}
	cout << "La cantidad de alumnos con notas mayores o iguales a siete son: ";
	cout << cantidadMayorASiete;
	cout << "La cantidad de alumnos con notas menores a siete son: ";
	cout << cantidadMenorASiete;
	return 0;
}