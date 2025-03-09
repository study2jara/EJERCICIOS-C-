/*
  Ejercicio 10: Área de un trapecio
*/
#include <iostream>
using namespace std;

int main() {
    float base1, base2, altura;
    cout << "Ingrese bases y altura: ";
    cin >> base1 >> base2 >> altura;
    cout << "Área: " << ((base1 + base2) * altura) / 2 << endl;
    return 0;
}
