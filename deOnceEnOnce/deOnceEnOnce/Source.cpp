#include<iostream>
using namespace std;

int main() {
	int contador, valorAMostrar;
	contador = 1;
	while (contador <= 25) {
		valorAMostrar = 11 * contador;
		contador = contador + 1;
		cout << valorAMostrar;
		cout << "--";
	}
	return 0;
}