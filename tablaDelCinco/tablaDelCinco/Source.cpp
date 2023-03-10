//Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)
#include<iostream>
using namespace std;

int main(){
    int contador;
    for (contador = 5; contador <= 50; contador = contador + 5)
    {
        cout << contador;
        cout << "-";
    }
   return 0;
}