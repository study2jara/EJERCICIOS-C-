/*
  Ejercicio 2: Suma de dos números
  Descripción: Se pide al usuario ingresar dos números y se muestra su suma.
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, suma; // Declaración de variables enteras
    cout << "Ingrese el primer número: ";
    cin >> num1; // Entrada del primer número
    cout << "Ingrese el segundo número: ";
    cin >> num2; // Entrada del segundo número
    suma = num1 + num2; // Suma de los dos números
    cout << "La suma es: " << suma << endl; // Imprime el resultado
    return 0;
}