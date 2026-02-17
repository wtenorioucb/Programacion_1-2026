// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main(){
    int numero;
    
    cout  << "Introduce un numero entero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es PAR." << endl;
    } else {
        cout << "El numero " << numero << " es IMPAR." << endl;
    }

    return 0;
}

