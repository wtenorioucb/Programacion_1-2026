// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 11/02/2026
#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;

    cout << "Introduce tres numeros separados por espacios: ";
    cin >> n1 >> n2 >> n3;
    cout << "Introduce un cuarto numero para comparar: ";
    cin >> n4;

    if (n4 == n1 || n4 == n2 || n4 == n3) {
        cout << "El numero " << n4 << " coincide con al menos uno de los anteriores." << endl;
    } else {
        cout << "El numero " << n4 << " no coincide con ninguno de los anteriores." << endl;
    }
    
    return 0;
}