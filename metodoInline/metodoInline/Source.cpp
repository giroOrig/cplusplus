//Plantear una clase que administre un vector de 5 enteros. 
//Cargar los elementos por teclado, imprimirlos y retornar la suma de la primera y última componente 
//(este último método implementarlo inline)

#include <iostream>
using namespace std;

class MetodoInline {
	int vector[5];
public:
	MetodoInline();
	void imprimir();
	int sumaPrimeroUltimo() { return vector[0] + vector[4]; }
};

MetodoInline::MetodoInline() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		cout << "Ingrese un valor: ";
		cin >> vector[valor];
	}
	
};
void MetodoInline::imprimir() {
	for (size_t valor = 0; valor < 5; valor++)
	{
		cout << vector[valor];
		cout << "\n";
	}
};

int main() {
	MetodoInline* mi;
	mi = new MetodoInline;
	mi->imprimir();
	cout << "Suma de la primer y última componente:" << mi->sumaPrimeroUltimo();
	delete mi;
	return 0;
}