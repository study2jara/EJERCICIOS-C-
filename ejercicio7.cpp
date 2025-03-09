/*
  Ejercicio 7: Área y volumen de un cilindro
*/
#include <iostream>
#include <cmath>
#define PI 3.1416
using namespace std;

int main() {
    float radio, altura;
    cout << "Ingrese radio y altura: ";
    cin >> radio >> altura;
    cout << "Área: " << 2 * PI * radio * (radio + altura) << " Volumen: " << PI * pow(radio, 2) * altura << endl;
    return 0;
}
