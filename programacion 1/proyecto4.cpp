
// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;

int main(){
    float practica, teorica, praticipacion, NotaFinal; 
    cout << "Ingrese la nota de practicas (30%): ";
    cin >> practica; 
    cout << "Ingrese la nota teorica (60%): ";
    cin >> teorica;
    cout << "ingrese la nota de participacion (10%): ";
    cin >> praticipacion;
    
    NotaFinal = (practica * 0.30) + (teorica * 0.60) + (praticipacion * 0.10);

    cout << "\n--- Resultados ---" << endl;
    cout << "La nota final del estudiante es: " << NotaFinal << endl; 

    return 0;
}


