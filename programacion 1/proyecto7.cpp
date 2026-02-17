// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;

int main(){
    int edad;

    cout << "Introducir una edad: ";
    cin >> edad; 
    if (edad >= 18 && edad <= 25) {
        cout << "La edad " << edad << " ESTA en el rango de [18-25]." << endl;
    } else {
        cout << "La edad " << edad << " NO ESTA en el rango solicitado." << endl;
    }

    return 0;
}