#include <iostream>
using namespace std;

class Recursividad {
public:
	int recursividad(int fact);
};

int Recursividad::recursividad(int factorial) {
    if (factorial > 0) {
        int valor = factorial * recursividad(factorial - 1);
        return valor;
    }
    else
        return 1;
};

int main() {
    Recursividad* recu = new Recursividad;
    cout << "El factorial de 4 es: " << recu->recursividad(4);
    delete recu;
    return 0;
}