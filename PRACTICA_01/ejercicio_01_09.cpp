// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 15/02/2026


#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero del 1 al 10: ";
    cin >> numero;

    if (numero == 1) cout << "I";
    else if (numero == 2) cout << "II";
    else if (numero == 3) cout << "III";
    else if (numero == 4) cout << "IV";
    else if (numero == 5) cout << "V";
    else if (numero == 6) cout << "VI";
    else if (numero == 7) cout << "VII";
    else if (numero == 8) cout << "VIII";
    else if (numero == 9) cout << "IX";
    else if (numero == 10) cout << "X";
    else cout << "Numero fuera de rango";

    return 0;
}
