/*
 *  EJERCICIO 2.22 - N�meros en rango
 *  Clases particulares de programaci�n en C++
 *  Autor: Miguel �ngel Fern�ndez Guti�rrez (@mianfg)
 *  Fecha: 9 agosto, 2018
 */

#include <iostream>
using namespace std;

int main() {
	int N;
	double min, max;
	cout << "N, min, max: ";
	cin >> N >> min >> max;
	bool en_rango = true;
	for ( int i = 1 ; i <= N && en_rango ; i++ ) {
		double entrada;
		cout << "Introduzca valor " << i << ": "; cin >> entrada;
		if ( entrada < min || entrada > max ) {
			en_rango = false;
		}
	}
	if (!en_rango) cout << "Error. Finalizaci�n inesperada del programa: Valor fuera de rango";
	else cout << "Los " << N << " valores introducidos est�n en el intervalo [" << min << "," << max << "]";
}
