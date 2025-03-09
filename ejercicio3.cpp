/*
  Ejercicio 3: Longitud de una circunferencia
  Descripción: Se solicita el radio y se calcula la longitud usando la fórmula L = 2 * pi * r.
*/
#include <iostream>
#define PI 3.1416 // Definimos PI como constante
using namespace std;

int main() {
    float radio, longitud;
    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;
    longitud = 2 * PI * radio; // Fórmula para calcular la longitud
    cout << "La longitud de la circunferencia es: " << longitud << endl;
    return 0;
}
