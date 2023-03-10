//realizar un programa que permita ingresar el peso(en kilogramos) de piezas.
// El proceso termina cuando ingresamos el valor 0. Se debe informar :
//a) Cuántas piezas tienen un peso entre 9.8 Kg.y 10.2 Kg. ? , 
// cuántas con más de 10.2 Kg. ? y cuántas con menos de 9.8 Kg. ?
//b) La cantidad total de piezas procesadas.

#include<iostream>
using namespace std;

int main() {
	int cantidadPiezasEntre9y10, cantidadPiezasMenosDe9, cantidadPiezasMasDe10, cantidadTotal;
	float pesoPieza;
	pesoPieza = 0;
	cantidadPiezasMasDe10 = 0;
	cantidadPiezasMenosDe9 = 0;
	cantidadPiezasEntre9y10 = 0;
	cantidadTotal = 0;
	do {
		cout << "Ingrese el peso en kg de la pieza: ";
		cin >> pesoPieza;
		if (pesoPieza >= 9.8 && pesoPieza <= 10.2) {
			cantidadPiezasEntre9y10++;
			cantidadTotal++;
		}
		else {
			if (pesoPieza < 9.8) {
				cantidadPiezasMenosDe9++;
				cantidadTotal++;
			}
			else {
				cantidadPiezasMasDe10++;
				cantidadTotal++;
			}
		}
	} while (pesoPieza != 0);
	cout << "La cantidad de piezas procesadas fue: ";
	cout << cantidadTotal;
	cout << "\n";
	cout << "La cantidad de piezas que pesan menos de 9.8kg son: ";
	cout << cantidadPiezasMenosDe9;
	cout << "\n";
	cout << "La cantidad de piezas que pesan entre 9.8 y 10.2 son: ";
	cout << cantidadPiezasEntre9y10;
	cout << "\n";
	cout << "La cantidad de piezas que pesan mas de 10.2 son: ";
	cout << cantidadPiezasMasDe10;
	cout << "\n";
	return 0;
}