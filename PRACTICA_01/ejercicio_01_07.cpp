// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 14/02/2026

#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25) {
        cout << "La edad esta en el rango [18-25]" << endl;
    } else {
        cout << "La edad NO esta en el rango [18-25]" << endl;
    }

    return 0;
}
