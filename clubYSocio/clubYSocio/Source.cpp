//Plantear una clase Club y otra clase Socio.
//La clase Socio debe tener los siguientes atributos privados : 
//nombre y la antigüedad en el club(en años).En el constructor pedir la carga del nombre 
//y su antigüedad.La clase Club debe tener como atributos 3 objetos de la clase Socio.
//Definir una responsabilidad para imprimir el nombre del socio con mayor antigüedad en el club.

#include <iostream>
using namespace std;

class Socio {
	char nombre[40];
	int antiguedad;
public:
	Socio();
	void imprimir();
	int retornarAntiguedad();
};
class Club {
	Socio socio1, socio2, socio3;
public:
	void imprimirSocioMasAntiguo();
};

Socio::Socio() {

	cout << "Ingrese el nombre el socio: ";
	cin.getline(nombre, 40);
	cout << "Ingrese anios de antiguedad: ";
	cin >> antiguedad;
    cin.get();
	
};

void Socio::imprimir() {
	cout << "El nombre del socio es: " << nombre << " y tiene una antiguedad de: " << antiguedad << "\n";
};

int Socio::retornarAntiguedad() {
	return antiguedad;
};

void Club::imprimirSocioMasAntiguo() {
    cout << "Socio con mayor antiguedad\n";
    if (socio1.retornarAntiguedad() > socio2.retornarAntiguedad() &&
        socio1.retornarAntiguedad() > socio3.retornarAntiguedad())
    {
        socio1.imprimir();
    }
    else
    {
        if (socio2.retornarAntiguedad() > socio3.retornarAntiguedad())
        {
            socio2.imprimir();
        }
        else
        {
            socio3.imprimir();
        }
    }
};

int main() {
    Club club1;
    club1.imprimirSocioMasAntiguo();
    return 0;
}