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
    int N;
    int n1, n2, n3;
    int totalPañales;

    cout << "Ingrese cantidad total de ninos: ";
    cin >> N;

    srand(time(0));

    n1 = rand() % (N + 1);
    n2 = rand() % (N - n1 + 1);
    n3 = rand() % (N - n1 - n2 + 1);

    totalPañales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Niños de 1 anios: " << n1 << endl;
    cout << "Niños de 2 anios: " << n2 << endl;
    cout << "Niños de 3 anios: " << n3 << endl;

    cout << "Total de paniales por dia: " << totalPañales << endl;

    return 0;
}