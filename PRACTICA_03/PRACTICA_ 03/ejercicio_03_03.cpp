
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

    int numero = rand() % 10 + 1;
    cout << "Numero generado: " << numero << endl;

    int factorial = 1;

    for(int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial: " << factorial << endl;

    return 0;
}