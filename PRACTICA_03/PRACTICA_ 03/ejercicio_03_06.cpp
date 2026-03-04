
// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Fecha creación: 03/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int N;
    cout << "Ingrese cantidad total de niños: ";
    cin >> N;

    int n1 = rand() % (N + 1);
    int restante = N - n1;

    int n2 = rand() % (restante + 1);
    restante = restante - n2;

    int n3 = restante;

    cout << "Niños de 1 año: " << n1 << endl;
    cout << "Niños de 2 años: " << n2 << endl;
    cout << "Niños de 3 años: " << n3 << endl;

    int panales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Total de pañales por dia: " << panales << endl;

    return 0;
}