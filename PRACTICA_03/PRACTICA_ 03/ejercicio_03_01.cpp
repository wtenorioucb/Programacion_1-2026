
// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Fecha creación: 27/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Cuantas veces lanzar el dado: ";
    cin >> n;

    int pares = 0;

    for(int i = 1; i <= n; i++) {
        int dado = rand() % 6 + 1;
        cout << "Lanzamiento " << i << ": " << dado << endl;

        if(dado % 2 == 0) {
            pares++;
        }
    }

    cout << "Frecuencia de caras pares: " << pares << endl;

    return 0;
}