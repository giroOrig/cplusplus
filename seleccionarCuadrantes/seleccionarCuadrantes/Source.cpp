//Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
// Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante.
// Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.

#include<iostream>
using namespace std;

int main() {
	int coordenadaX, coordenadaY, contador, corte, primerCua, segundoCua, tercerCua, cuartoCua;
	primerCua = 0;
	segundoCua = 0;
	tercerCua = 0;
	cuartoCua = 0;
	coordenadaX = 0;
	coordenadaY = 0;
	corte = 0;
	cout << "ingresar la cantidad de puntos en el plano a procesar: ";
	cin >> corte;
	for (size_t contador = 0; contador < corte; contador++)
	{
		cout << "ingrese valor de X: ";
		cin >> coordenadaX;
		cout << "ingrese valor de Y: ";
		cin >> coordenadaY;
		if (coordenadaX> 0 && coordenadaY > 0) {
			primerCua++;
		}
		else {
			if (coordenadaX < 0 && coordenadaY > 0) {
				segundoCua++;
			}
			else {
				if (coordenadaX > 0) {
					cuartoCua++;
				}
				else {
					tercerCua++;
				}
				
			}
			
		}

	}
	cout << "La cantidad de puntos en el primer cuadrantes es: ";
	cout << primerCua;
	cout << "\n";
	cout << "La cantidad de puntos en el segundo cuadrantes es: ";
	cout << segundoCua;
	cout << "\n";
	cout << "La cantidad de puntos en el tercer cuadrantes es: ";
	cout << tercerCua;
	cout << "\n";
	cout << "La cantidad de puntos en el cuarto cuadrantes es: ";
	cout << cuartoCua;
	cout << "\n";
	return 0;
}