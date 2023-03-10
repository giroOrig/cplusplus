#include <iostream>
using namespace std;

int main() {
	int cantidadPreguntas, cantidadRespuestasCorrectas;
	float queNivelTiene;
	int cien = 100;
	cout << "Ingrese la cantidad de preguntas: ";
	cin >> cantidadPreguntas;
	cout << "Ingrese la cantidad de respuestas correctas: ";
	cin >> cantidadRespuestasCorrectas;
	queNivelTiene = cantidadRespuestasCorrectas * cien / cantidadPreguntas;
	//Nivel máximo:	Porcentaje>=90%.
	//Nivel medio : Porcentaje >= 75 % y < 90 % .
	//Nivel regular : Porcentaje >= 50 % y < 75 % .
	//Fuera de nivel : Porcentaje < 50 % .
	if (queNivelTiene >= 90) {
		cout << "Tenes un nivel máximo. Tu nivel es: ";
		cout << queNivelTiene;
	}
	else {
		if (queNivelTiene >= 75) {
			cout << "Tenes un nivel medio. Tu nivel es: ";
			cout << queNivelTiene;
		}
		else {
			if (queNivelTiene >= 50) {
				cout << "Tenes un nivel regular. Tu nivel es: ";
				cout << queNivelTiene;
			}
			else {
				cout << "Estas fuera de nivel. Tu nivel es: ";
				cout << queNivelTiene;
			}
		}
	}

	return 0;
}