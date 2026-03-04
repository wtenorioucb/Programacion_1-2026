
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

    int contadorPrimos = 0;

    for(int i = 1; i <= N; i++) {
        int num = rand() % 10000 + 1;
        cout << num << endl;

        int divisores = 0;

        for(int j = 1; j <= num; j++) {
            if(num % j == 0) {
                divisores++;
            }
        }

        if(divisores == 2) {
            contadorPrimos++;
        }
    }

    cout << "Cantidad de numeros primos: " << contadorPrimos << endl;

    return 0;
}