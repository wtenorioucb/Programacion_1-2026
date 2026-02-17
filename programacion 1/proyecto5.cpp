// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>
#include <cmath>
using namespace std; 
int main(){
    double cateto1, cateto2, hipotenusa;

    cout << "Ingrese el valor del primer cateto: ";
    cin >> cateto1; 
    cout << "Ingrese el valor del segundo cateto: ";
    cin >> cateto2; 

    hipotenusa = sqrt(pow(cateto1, 2)+ pow(cateto2, 2));

    cout << "\n--- Resultado ---" << endl;
    cout << "La hipotenusa del triangulo es: " << hipotenusa << endl;

    return 0;
}