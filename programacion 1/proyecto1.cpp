// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    cout << "\n--- Resultados ---" << endl;
    cout << "Suma:         " << num1 + num2 << endl;
    cout << "Resta:        " << num1 - num2 << endl;
    cout << "Multiplicacion" << num1 * num2 << endl;

    if (num2 !=0) {
        cout << "Division:        " << num1 / num2 << endl;
    } else {
        cout << "Division:        Error (No se puede dividir por cero)" << endl;
    }

    return 0;
}





