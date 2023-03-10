//Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
//Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. 
//Sumar componente a componente.

#include <iostream>
using namespace std;

class DosVectores {
private:
	int vector1[4];
	int vector2[4];
	int vector3[4];
public:
	void cargar();
	void sumarVectores();
};

void DosVectores::cargar(){
	cout << "Carga del primer vector.";
	cout << "\n";
	for (int f = 0; f < 4; f++)
	{
		cout << "Ingrese elemento:";
		cin >> vector1[f];
	}
	cout << "Carga del segundo vector.";
	cout << "\n";
	for (int f = 0; f < 4; f++)
	{
		cout << "Ingrese elemento:";
		cin >> vector2[f];
	}
}
void DosVectores::sumarVectores(){
	for (int f = 0; f < 4; f++)
	{
		vector3[f] = vector1[f] + vector2[f];
	}
	cout << "Vector resultante.";
	cout << "\n";
	for (int f = 0; f < 4; f++)
	{
		cout << vector3[f];
		cout << "\n";
	}
	cin.get();
	cin.get();
}

int main() {
	DosVectores dosVectores;
	dosVectores.cargar();
	dosVectores.sumarVectores();
	return 0;
}