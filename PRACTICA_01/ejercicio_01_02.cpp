// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 13/02/2026

#include <iostream>
using namespace std;

int main() {
    float precio, total;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    total = precio + (precio * 0.13);

    cout << "Precio con IVA: " << total << endl;

    return 0;
}
