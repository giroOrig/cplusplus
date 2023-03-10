//Realizar un programa que permita cargar una palabra por teclado. 
//Modificar el string para agregar un guión entre cada letra de la palabra.

#include <string>
#include <iostream>
using namespace std;

int main() {
    string cadena; // creamos una cadena tipo string
    cout << "Ingrese una palabra:"; // pedimos por consola que se ingrese una palabra
    getline(cin, cadena); // se captura la palabra ingresada en la consola
    int posi = 1; //declaramos e inicializamos una variable de nombre posi de tipo entero con el valor 1
    int cantidad = cadena.length();//declaramos una variable de nombre cantidad de tipo entero y le asignamos como valor la cantidad de letras que tiene la palabra ingresada por consola
    for (int f = 1; f <= cantidad - 1; f++) { //con el for recorremos la palabra
        cadena.insert(posi, "-"); //le insertamos un guion medio en la posición que se va a ir iterando
        posi = posi + 2; // iteramos el valor de posicion
    }
    cout << "Estado cadena final:" << cadena;
    return 0;
}