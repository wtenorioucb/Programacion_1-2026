// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 14/02/2026


#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "Es un numero par" << endl;
    } else {
        cout << "Es un numero impar" << endl;
    }

    return 0;
}
