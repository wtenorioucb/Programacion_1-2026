#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int n = 0;

    system("cls");
    cout << "Ingrese el valor de n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    cout << "La suma es: " << suma;

    return 0;
}