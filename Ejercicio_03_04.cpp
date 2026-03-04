// Materia: Programación I, Paralelo 4
// Autor: Camila Aduvir Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e inteligencia de negocios 
// Fecha creación: 04/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N, num;
    int suma = 0, mayor = 0, menor = 1000;

    cout << "Ingrese N: ";
    cin >> N;

    srand(time(NULL));

    for(int i = 0; i < N; i++) {
        num = rand() % 1000 + 1;

        suma += num;

        if(num > mayor) {
            mayor = num;
        }

        if(num < menor) {
            menor = num;
        }
    }

    double promedio = (double)suma / N;

    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}