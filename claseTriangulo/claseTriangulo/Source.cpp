#include<iostream>

using namespace std;

class Triangulo {
private:
    int lado1, lado2, lado3;
public:
    void inicializar();
    void ladoMayor();
    void esEquilatero();
};

void Triangulo::inicializar()
{
    cout << "Ingrese primer lado:";
    cin >> lado1;
    cout << "Ingrese segundo lado:";
    cin >> lado2;
    cout << "Ingrese tercer lado:";
    cin >> lado3;
}

void Triangulo::ladoMayor()
{
    cout << "Lado mayor:";
    if (lado1 > lado2 && lado1 > lado3)
    {
        cout << lado1;
    }
    else
    {
        if (lado2 > lado3)
        {
            cout << lado2;
        }
        else
        {
            cout << lado3;
        }
    }
    cout << "\n";
}

void Triangulo::esEquilatero()
{
    if (lado1 == lado2 && lado1 == lado3)
    {
        cout << "Es un triangulo equilatero";
    }
    else
    {
        cout << "No es un triangulo equilatero";
    }
    cin.get();
    cin.get();
}

int main()
{
    Triangulo triangulo1;
    triangulo1.inicializar();
    triangulo1.ladoMayor();
    triangulo1.esEquilatero();
    return 0;
}