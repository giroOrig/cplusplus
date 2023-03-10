#include<iostream>
using namespace std;

int main() {
	int contador, corte;
	contador = 0;
	corte = 496;
	while (contador < corte) {
		contador = contador +8;
		cout << contador;
		cout << "--";
	}
	return 0;
}