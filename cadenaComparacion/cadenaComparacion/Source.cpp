#include<iostream>

using namespace std;

int main()
{
    char cadena1[50];
    char cadena2[50];
    cout << "Ingrese la primer cadena:";
    cin.getline(cadena1, 50);
    cout << "Ingrese la segunda cadena:";
    cin.getline(cadena2, 50);
    if (strcmp(cadena1, cadena2) == 0)
    {
        cout << "son iguales";
    }
    else
    {
        if (strcmp(cadena1, cadena2) > 0)
        {
            cout << "la primer cadena ingresada es mayor alfabeticamente";
        }
        else
        {
            cout << "la segunda cadena ingresada es mayor alfab�ticamente";
        }
    }
    return 0;
}