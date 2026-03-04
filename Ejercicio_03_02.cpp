#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n, moneda, caras = 0, cruz = 0;

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    srand(time(0));

    for(int i = 0; i < n; i++) {
        moneda = rand() % 2;

        if(moneda == 0) {
            caras++;
        } else {
            cruz++;
        }
    }

    double pCaras = (caras * 100.0) / n;
    double pCruz = (cruz * 100.0) / n;

    cout << "Porcentaje de caras: " << pCaras << "%" << endl;
    cout << "Porcentaje de cruz: " << pCruz << "%" << endl;

    return 0;
}