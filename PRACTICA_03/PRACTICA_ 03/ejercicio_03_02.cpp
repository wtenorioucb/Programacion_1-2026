
// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Fecha creación: 28/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Cuantas veces lanzar la moneda: ";
    cin >> n;

    int cara = 0, cruz = 0;

    for(int i = 1; i <= n; i++) {
        int moneda = rand() % 2;

        if(moneda == 0) {
            cout << "Cara" << endl;
            cara++;
        } else {
            cout << "Cruz" << endl;
            cruz++;
        }
    }

    float porcentajeCara = (cara * 100.0) / n;
    float porcentajeCruz = (cruz * 100.0) / n;

    cout << "Porcentaje Cara: " << porcentajeCara << "%" << endl;
    cout << "Porcentaje Cruz: " << porcentajeCruz << "%" << endl;

    return 0;
}