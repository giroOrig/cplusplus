//En un banco se procesan datos de las cuentas corrientes de sus clientes.
//De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
// El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
//Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe :
//a)De cada cuenta : número de cuenta y estado de la cuenta según su saldo, sabiendo que :
//Estado de la cuenta	'Acreedor' si el saldo es > 0.
//'Deudor' si el saldo es < 0.
//'Nulo' si el saldo es = 0.
//b) La suma total de los saldos acreedores.

#include<iostream>
using namespace std;

int main() {
	int numCuenta;
	float saldoActual, totalSaldoAcreedores;
	totalSaldoAcreedores = 0;
	numCuenta = 0;
	saldoActual = 0;
	do {
		cout << "ingrese un numero de cuenta (si es negativo, se finaliza): ";
		cin >> numCuenta;
		if (numCuenta >= 0) {
			cout << "ingrese su saldo actual: ";
			cin >> saldoActual;
			if (saldoActual > 0) {
				cout << "Usted es un acreedor.";
				cout << "\n";
				totalSaldoAcreedores = saldoActual + totalSaldoAcreedores;
			}
			else {
				if (saldoActual == 0) {
					cout << "Usted es nulo";
					cout << "\n";
				}
				else {
					cout << "Usted es un deudor";
					cout << "\n";
				}
			}
		}
		else {
			cout << "Finalizando...";
			cout << "\n";
		}

	} while (numCuenta >= 0);
	cout << "La suma total de los acreedores es: ";
	cout << totalSaldoAcreedores;
	return 0;
}