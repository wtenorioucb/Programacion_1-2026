#include <iostream>

using namespace std;

int main()
{
    int valor = 0;
    int suma = 0;
    system("cls");
    do
    {
        cout << "Ingrese un valor: ";
        cin >> valor;
        //suma = suma + valor;
        suma += valor;
    } while (valor != 0);
    cout << "El resultado de la suma es: " << suma << "\n";
    return 0;
}