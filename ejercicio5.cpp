/*
  Ejercicio 5: Cálculo del IVA
  Descripción: Se solicita el precio de un producto y se calcula el IVA del 16%.
*/
#include <iostream>
using namespace std;

int main() {
    float precio, iva, total;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    iva = precio * 0.16; // Cálculo del IVA
    total = precio + iva; // Precio final con IVA
    cout << "El IVA es: " << iva << " y el total a pagar es: " << total << endl;
    return 0;
}