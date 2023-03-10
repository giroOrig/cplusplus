#include <iostream>
using namespace std;

int main()
{
    int x1 = 50; // le asignamos 50 a x1
    int x2 = 100; // le asignamos 100 a x2
    int* pun1, * pun2; // creamos dos punteros a entero llamados pun1 y pun2
    pun1 = &x1; // a pun1 le asignamos el espacio en memoria de x1
    pun2 = pun1; // en este caso, a pu2 le asignamos el valor que ya tiene pun1
    *pun1 = 2000; // x1 pasa a tener el valor 2000 asignado
    cout << x1; // imprime 2000
    cout << "\n";
    cout << x2; // imprime 100
    cout << "\n";
    cout << *pun1; // 2000
    cout << "\n";
    cout << *pun2; // 2000
    cout << "\n";
    pun2 = &x2; // le asignamos a pun2 el valor en memoria de x2
    x1 = 1; // nuevo valor de x1 y de pun1
    x2 = 2; // nuevo valor de x2 y de pun2
    cout << *pun1; // 1
    cout << "\n";
    cout << *pun2; // 2 
    cout << "\n";
    *pun1 = 500; // nuevo valor de x1 y pun1
    *pun2 = 600; // nuevo valor de x2 y pun2
    cout << x1; //500
    cout << "\n";
    cout << x2; // 600
    return 0;
}