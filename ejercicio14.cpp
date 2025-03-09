/*
  Ejercicio 14: Potencia de un número
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float base, exponente;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exponente;
    cout << "Resultado: " << pow(base, exponente) << endl;
    return 0;
}
