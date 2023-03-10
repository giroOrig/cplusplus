//Cree una clase "Auto" que tenga dos atributos: "marca" y "modelo", ambos de tipo string.
//En el constructor de la clase, inicialice los atributos con los valores pasados como par�metros.
//Cree una funci�n "mostrar_datos" que imprima los valores de los atributos "marca" y "modelo" en pantalla.
//Cree un puntero inteligente de tipo "shared_ptr" para un objeto de la clase "Auto", 
//y as�gnelo a un objeto de la clase "Auto" con la marca "Ford" y el modelo "Mustang".
#include <iostream>
#include <memory>
using namespace std;
// Clase Auto con dos atributos: marca y modelo
class Auto {
    string marca_;
    string modelo_;
public:
    // constructor que inicializa los atributos con los valores pasados como par�metros
    Auto(string marca, string modelo) : marca_(marca), modelo_(modelo) {}
    // funci�n para mostrar los datos de la clase
    void mostrar_datos() {
        cout << "Marca: " << marca_ << endl;
        cout << "Modelo: " << modelo_ << endl;
    }
};
int main() {
    // puntero inteligente de tipo shared_ptr para un objeto de la clase Auto
    shared_ptr<Auto> auto_ptr(new Auto("Ford", "Mustang"));
    // llamada a la funci�n mostrar_datos a trav�s del puntero inteligente
    auto_ptr->mostrar_datos();
    return 0;
}