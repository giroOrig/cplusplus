#include <iostream>
using namespace std; 

int main() {
	float sueldo;
	cout << "Ingrese el sueldo que percibe: $";
	cin >> sueldo;
	if (sueldo > 3000){
		cout << "Debe pagar impuestos";
	}
	return 0;
}