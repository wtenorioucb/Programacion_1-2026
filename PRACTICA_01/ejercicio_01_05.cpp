// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 14/02/2026

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa;

    cout << "Ingrese el primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese el segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    cout << "Hipotenusa: " << hipotenusa << endl;

    return 0;
}
