/*
  Ejercicio 9: Área de un triángulo (fórmula de Herón)
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, s;
    cout << "Ingrese los tres lados: ";
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    cout << "Área: " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
    return 0;
}