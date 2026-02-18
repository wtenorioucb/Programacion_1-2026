// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 15/02/2026

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    if (n4 == n1 || n4 == n2 || n4 == n3) {
        cout << "El numero coincide con uno de los anteriores" << endl;
    } else {
        cout << "El numero NO coincide" << endl;
    }

    return 0;
}
