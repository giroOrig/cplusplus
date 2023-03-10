//Agregar un método a la clase Pila que retorne la información del primer nodo de la Pila sin borrarlo.

#include <iostream>
using namespace std;

class Pila {
private:
    class Nodo {
    public:
        int info;
        Nodo* sig;
    };
    Nodo* raiz;
public:
    Pila();
    ~Pila();
    void insertar(int valorAIngresar);
    int extraer();
    void imprimir();
    int cantidad();
    bool vacia();
    int retornar();
};

Pila::Pila() {
    raiz = NULL;
};
Pila::~Pila() {
    Nodo* reco = raiz;
    Nodo* bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
};
void Pila::insertar(int valorAIngresar) {
    Nodo* nuevo;
    nuevo = new Nodo();
    nuevo->info = valorAIngresar;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
};
int Pila::extraer() {
    if (raiz != NULL)
    {
        int informacion = raiz->info;
        Nodo* bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else
    {
        return -1;
    }
};
void Pila::imprimir() {
    Nodo* reco = raiz;
    cout << "Listado de todos los elementos de la pila.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
};
int Pila::cantidad()
{
    Nodo* reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

bool Pila::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}
int Pila::retornar()
{
    if (raiz != NULL)
    {
        return raiz->info;
    }
    else
        return -1;
}

int main() {
    Pila* pila1;
    pila1 = new Pila();
    pila1->insertar(10);
    pila1->insertar(40);
    pila1->insertar(30);
    pila1->imprimir();
    cout << "El primer valor de la pila es:" << pila1->retornar() << "\n";
    pila1->imprimir();
    delete pila1;
    return 0;
}