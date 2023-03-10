//Plantear una clase que permita cargar un valor entero por teclado. 
//Definir un método que solicite la carga del entero y llame a otro método 
//al que le pasamos el valor ingresado y proceda a mostrar los valores enteros 
//desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)

#include <iostream>
using namespace std;

class IngresarValor {
private:
	void calcular(int valor);
public:
	void cargarValor();
};
void IngresarValor::calcular(int valor) {
    for (int f = 1; f <= valor; f++)
    {
        cout << f;
        cout << "-";
    }
    cout << "\n";

}
void IngresarValor::cargarValor() {
    int valor;
    do
    {
        cout << "Ingrese un valor (-1 para finalizar):";
        cin >> valor;
        if (valor != -1)
        {
            calcular(valor);
        }
    } while (valor != -1);
}
int main() {
    IngresarValor ingresarvalor;
    ingresarvalor.cargarValor();
	return 0;
}