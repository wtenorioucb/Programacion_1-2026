#include <iostream>
#include "LibEjercicio_02.h"

using namespace std;

int main()
{
    int a,b;
    system("cls");
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    cout << "La suma de A + B = " << sumar(a,b);
    return 0;
}