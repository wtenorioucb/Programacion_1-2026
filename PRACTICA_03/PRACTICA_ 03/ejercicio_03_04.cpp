
// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Fecha creación: 02/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int N;
    cout << "Cuantos numeros generar: ";
    cin >> N;

    int suma = 0;
    int mayor = 0;
    int menor = 1000;

    for(int i = 1; i <= N; i++) {
        int num = rand() % 1000 + 1;
        cout << num << endl;

        suma = suma + num;

        if(num > mayor) {
            mayor = num;
        }

        if(num < menor) {
            menor = num;
        }
    }

    float promedio = (suma * 1.0) / N;

    cout << "Sumatoria total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor numero: " << mayor << endl;
    cout << "Menor numero: " << menor << endl;

    return 0;
}