/*
  Ejercicio 6: Área de un rectángulo
  Descripción: Se solicitan la base y la altura, y se calcula el área.
*/
#include <iostream>
using namespace std;

int main() {
    float base, altura, area;
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;
    area = base * altura; // Cálculo del área
    cout << "El área del rectángulo es: " << area << endl;
    return 0;
}