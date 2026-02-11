#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int contador = 1;
    int n = 0;

    system("cls");
    cout << "Ingrese elvalor de n: ";
    cin >> n;
    while (contador <= n)
    {
        suma += contador;
        contador = contador + 1;
    }
    cout << "La suma es: " << suma;
        
    return 0;
}