//Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna 
// (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente)
//Imprimir luego la matriz.

#include <iostream>
using namespace std;

class Matriz {
private:
	int matriz[2][5];
public:
	void cargar();
	void imprimir();
};
void Matriz::cargar() {
    cout << "Carga de la matriz por columna:" << "\n";
    for (int c = 0; c < 5; c++)
    {
        for (int f = 0; f < 2; f++)
        {
            cout << "Ingrese componente  de la fila " << f << " y la columna " << c << " :";
            cin >> matriz[f][c];
        }
    }
};
void Matriz::imprimir() {
    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }
    cin.get();
    cin.get();
};

int main() {
    Matriz matriz;
    matriz.cargar();
    matriz.imprimir();
    return 0;
}