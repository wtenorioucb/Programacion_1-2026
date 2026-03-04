// Materia: Programación I, Paralelo 4
// Autor: Camila Aduvir Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e inteligencia de negocios 
// Fecha creación: 27/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num;
    long long factorial = 1;

    srand(time(NULL));

    num = rand() % 10 + 1;

    cout << "Numero generado: " << num << endl;

    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial: " << factorial << endl;

    return 0;
}