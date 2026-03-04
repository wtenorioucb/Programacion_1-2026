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
    int N, num, contadorPrimos = 0;

    cout << "Ingrese N: ";
    cin >> N;

    srand(time(NULL));

    for(int i = 0; i < N; i++) {
        num = rand() % 10000 + 1;
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