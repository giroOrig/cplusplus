//En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
//a) Ingresar Nombre y Nota de cada alumno(almacenar los datos en dos vectores paralelos)
//b) Realizar un listado que muestre los nombres, notas y condición del alumno.En la condición, 
// colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
//c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.

#include <iostream>
using namespace std;

class Alumno {
private:
	char nombre[4][40];
	float nota[4];
public:
	void cargar();
	void listarAlumnos();
	void listarMuyBueno();
};
void Alumno::cargar() {
	for (size_t valor = 0; valor < 4; valor++)
	{
		cout << "Ingrese el nombre del alumno: ";
		cin.getline(nombre[valor], 40);
		cout << "Ingrese la nota del alumno: ";
		cin >> nota[valor];
		cin.get();
	}
};
void Alumno::listarAlumnos() {
	for (size_t valor = 0; valor < 4; valor++)
	{
		if (nota[valor]>=8)
		{
			cout << nombre[valor];
			cout << " - ";
			cout << nota[valor];
			cout << " - ";
			cout << "Muy Bueno";
			cout << "\n";
		}
		else {
			if (nota[valor]>4 && nota[valor]<=7)
			{
				cout << nombre[valor];
				cout << " - ";
				cout << nota[valor];
				cout << " - ";
				cout << "Bueno";
				cout << "\n";
			}
			else {
				cout << nombre[valor];
				cout << " - ";
				cout << nota[valor];
				cout << " - ";
				cout << "Malo";
				cout << "\n";
			}
		}
	}
};
void Alumno::listarMuyBueno() {};

int main() { 
	Alumno alumno;
	alumno.cargar();
	alumno.listarAlumnos();
	return 0; 
}