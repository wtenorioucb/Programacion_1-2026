// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main() {
    double precioOriginal, precioFinal; 
    const double IVA = 0.13;

    cout << "Introduce el precio del producto: ";
    cin >> precioOriginal;

    precioFinal = precioOriginal + (precioOriginal * IVA);

    cout << "Elprecio con el IVA aplicado (13%) es: " << precioFinal << endl;
    return 0;
}