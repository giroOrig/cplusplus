//Crear una matriz de 3 filas por 3 columnas. 
//Implementar un método que permita cargar todas sus componentes, 
//otro que la imprima y otra método que retorne la fila y columna (retorna dos datos el método) 
//donde se encuentra el mayor elemento del vector (si está repetido retorne la posición de cualquiera de ellos)

#include <iostream>
using namespace std;

class Matriz {
	int matriz[3][3];
public:
	Matriz();
	void imprimir();
	void retornarMayor(int *mayx, int *mayy);
};

Matriz::Matriz() {

	for (size_t f = 0; f < 3; f++){
	
		for (size_t c = 0; c < 3; c++)
		{
			cout << "ingrese un valor: ";
			cin >> matriz[f][c];
		}
	}
};
void Matriz::imprimir() {
	for (size_t f = 0; f < 3; f++)
	{
		for (size_t c = 0; c < 3; c++)
		{
			cout << matriz[f][c] << "\n";
		}
	}
};
void Matriz::retornarMayor(int *mayx, int *mayy) {
	int mayor = matriz[0][0];
	*mayx = 0;
	*mayy = 0;
	for (int f = 0; f < 3; f++)
	{
		for (int c = 0; c < 3; c++)
		{
			if (matriz[f][c] > mayor)
			{
				mayor = matriz[f][c];
				*mayx = f;
				*mayy = c;
			}
		}
	}
};

int main() {
	Matriz m1;
	m1.imprimir();
	int maX, maY;
	m1.retornarMayor(&maX, &maY);
	cout << "Fila donde se encuentra el mayor:" << maY << "\n";
	cout << "Columna donde se encuentra el mayor:" << maX << "\n";
	return 0;
}