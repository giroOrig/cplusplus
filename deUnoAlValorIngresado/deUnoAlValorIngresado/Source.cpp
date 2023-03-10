#include<iostream>
using namespace std;

int main() {
	int num1, x;
	x = 1;
	cout << "Ingrese un numero positivo: ";
	cin >> num1;
	while (x <= num1) {
		cout << x;
		cout << " ";
		x = x + 1;
	}
	return 0;
}