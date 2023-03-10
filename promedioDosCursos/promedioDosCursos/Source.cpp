//Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, 
//cada curso cuenta con 5 alumnos.
//Realizar un programa que muestre el curso que obtuvo el mayor promedio general.

#include <iostream>
using namespace std;

class Notas {
private:
	float vectorA[5];
	float vectorB[5];
	float promedio;
public:
	void cargarVectores();
	void promedioGeneral();
};
void Notas::cargarVectores() {
	float notas;
	notas = 0;
	for (size_t notas = 0; notas < 5; notas++)
	{
		cout << "ingrese las notas de los alumnos del curso A: ";
		cin >> vectorA[notas];
		cout << "\n";
	}
	for (size_t notas = 0; notas < 5; notas++)
	{
		cout << "ingrese las notas de los alumnos del curso B: ";
		cin >> vectorB[notas];
		cout << "\n";
	}
}
void Notas::promedioGeneral() {
	float suma[5];
	float suma2;
	suma2 = 0;
	for (int f = 0; f < 5; f++)
	{
		suma[f] = vectorA[f] + vectorB[f];
	}
	for (size_t f = 0; f < 5; f++)
	{
		suma2 = suma2 + suma[f];
	}
	promedio = suma2 / 10;
	cout << "Promedio de notas entre los dos cursos:";
	cout << promedio;
	cout << "\n";
}

int main() { 
	Notas notas;
	notas.cargarVectores();
	notas.promedioGeneral();
	return 0;
}