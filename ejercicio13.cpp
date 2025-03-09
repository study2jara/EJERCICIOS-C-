/*
  Ejercicio 13: Cuadrado de un número
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "El cuadrado es: " << pow(num, 2) << endl;
    return 0;
}