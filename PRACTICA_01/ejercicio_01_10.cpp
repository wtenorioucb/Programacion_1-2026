// Materia: Programación I, Paralelo 4
// Autor: Carlos Meave
// Carnet: 8366333
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 17/02/2026


#include <iostream>
using namespace std;

int main() {
    int mes;

    cout << "Ingrese un numero del 1 al 12: ";
    cin >> mes;

    if (mes == 1) cout << "Enero";
    else if (mes == 2) cout << "Febrero";
    else if (mes == 3) cout << "Marzo";
    else if (mes == 4) cout << "Abril";
    else if (mes == 5) cout << "Mayo";
    else if (mes == 6) cout << "Junio";
    else if (mes == 7) cout << "Julio";
    else if (mes == 8) cout << "Agosto";
    else if (mes == 9) cout << "Septiembre";
    else if (mes == 10) cout << "Octubre";
    else if (mes == 11) cout << "Noviembre";
    else if (mes == 12) cout << "Diciembre";
    else cout << "Numero invalido";

    return 0;
}
