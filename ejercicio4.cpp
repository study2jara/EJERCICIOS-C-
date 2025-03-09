/*
  Ejercicio 4: Media aritmética
  Descripción: Se solicitan tres números y se calcula su media aritmética.
*/
#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, media;
    cout << "Ingrese tres números: ";
    cin >> num1 >> num2 >> num3; // Entrada de los tres números
    media = (num1 + num2 + num3) / 3; // Cálculo de la media
    cout << "La media aritmética es: " << media << endl;
    return 0;
}