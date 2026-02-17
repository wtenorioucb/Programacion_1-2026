// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    float altura;

    cout << "---Registro de datos---" << endl;
    
    cout << "Introduce tu edad: ";
    cin >> edad;
    cout << "Introduce de sexo (M/F): ";
    cin >> sexo;
    cout << "Introduce tu altura en metros: ";
    cin >> altura; 

    cout << "\n--- Datos Registrados ---" << endl;
    cout << "Edad:   " << edad << " años" << endl;
    cout << "Sexo:   " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}    