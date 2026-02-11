#include <iostream>

using namespace std;

int main()
{
    bool estaActivo;
    float sueldo;
    double pi;
    int edad;
    
    system("cls");
    estaActivo = true;
    sueldo = 3300.33;
    pi = 3.1415926535;
    edad = 10;
    
    cout << "Esta activo: " << estaActivo << endl;
    cout << "Salario: " << sueldo << endl;
    cout << "Valor de PI: " << pi << endl;
    cout << "Sueldo / edad: " << sueldo/edad << "\n";
    cout << "Edad / 7: " << edad/7 << endl;
    return 0;
}