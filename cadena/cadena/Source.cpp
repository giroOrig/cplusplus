#include<iostream>
#include<string>

using namespace std;

int main()
{
    string cad = "Emanuel Girolami";
    cout << "Cadena original:" << cad << "\n";
    cad.append("se");
    cout << "Cadena despues de llamar a append:" << cad << "\n";
    cad.insert(0, "ES");
    cout << "Cadena despues de llamar a insert:" << cad << "\n";
    cad.erase(3, 1);
    cout << "Cadena despues de llamar a erase:" << cad << "\n";
    return 0;
}