/*
  Ejercicio 8: Promedio de 5 calificaciones
*/
#include <iostream>
using namespace std;

int main() {
    float cal[5], suma = 0;
    cout << "Ingrese 5 calificaciones: ";
    for (int i = 0; i < 5; i++) cin >> cal[i], suma += cal[i];
    cout << "Promedio: " << suma / 5 << endl;
    return 0;
}