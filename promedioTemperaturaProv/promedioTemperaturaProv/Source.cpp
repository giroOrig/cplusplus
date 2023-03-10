//Se desea saber la temperatura media trimestral de cuatro paises. 
// Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.
//Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
//Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
//a - Cargar por teclado los nombres de los paises y las temperaturas medias mensuales.
//b - Imprimir los nombres de las paises y las temperaturas medias mensuales de las mismas.
//c - Calcular la temperatura media trimestral de cada país.
//c - Imprimr los nombres de las provincias y las temperaturas medias trimestrales.
//b - Imprimir el nombre de la provincia con la temperatura media trimestral mayor.

#include <iostream>
using namespace std;

class Temperatura {
private:
	char paises[4][40];
	float temperatura[4][3];
	float mediaTemperatura[4];
public:
	void cargar();
	void imprimir();
	void calcularMediaTemp();
	void imprimirMediaTemp();
	void mediaTrimestralMayor();
};

void Temperatura::cargar() {
	for (size_t f = 0; f < 4; f++)
	{
		cout << "ingresar el nombre de los paises: ";
		cin.getline(paises[f],40);
		for (size_t c = 0; c < 3; c++)
		{
			cout << "Ingresar temperatura media mensual: ";
			cin >> temperatura[f][c];
		}
		cin.get();
	}
};
void Temperatura::imprimir() {
	for (size_t f = 0; f < 4; f++)
	{
		for (size_t c = 0; c < 3; c++)
		{
			cout << paises[f] << " - " << temperatura[f][c];
			cout << "\n";
		}
	}
};
void Temperatura::calcularMediaTemp() {
	for (size_t f = 0; f < 4; f++)
	{
		int suma = 0;
		for (size_t c = 0; c < 3; c++)
		{
			suma = suma + temperatura[f][c];
		}
		mediaTemperatura[f] = suma / 3;
	}
};
void Temperatura::imprimirMediaTemp() {
	cout << "La media trimestral de temperatura es: ";
	cout << "\n";
	for (size_t f = 0; f < 4; f++)
	{
		cout << paises[f] << " - " << mediaTemperatura[f];
		cout << "\n";
	}
};
void Temperatura::mediaTrimestralMayor() {
	int may = mediaTemperatura[0];
	char nom[40];
	strcpy_s(nom, 40, paises[0]);
	for (int f = 0; f < 4; f++)
	{
		if (mediaTemperatura[f] > may)
		{
			may = mediaTemperatura[f];
			strcpy_s(nom, 40, paises[f]);
		}
	}
	cout << "Pais con temperatura trimestral mayor es " << nom << " que tiene una temperatura de " << may;
	cin.get();
	cin.get();
};

int main() {
	Temperatura temp;
	temp.cargar();
	temp.imprimir();
	temp.calcularMediaTemp();
	temp.imprimirMediaTemp();
	temp.mediaTrimestralMayor();
	return 0;
}