// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 13/02/2026


#include <iostream>
using namespace std;

int main() {
    float practicas, teorica, participacion, final;

    cout << "Nota de practicas: ";
    cin >> practicas;

    cout << "Nota teorica: ";
    cin >> teorica;

    cout << "Nota de participacion: ";
    cin >> participacion;

    final = (practicas * 0.30) + (teorica * 0.60) + (participacion * 0.10);

    cout << "Nota final: " << final << endl;

    return 0;
}
