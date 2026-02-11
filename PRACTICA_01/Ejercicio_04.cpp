#include <iostream>

using namespace std;

int main()
{
    int valor1 = 5;
    int valor2 = 5;
    system("cls");
    if (valor1 == valor2)
    {
        cout << valor1 << " es igual a " << valor2;
    }
    else
    {
        if (valor1 > valor2)
        {
            /* si la condicion es verdadero entra aca */
            cout << valor1 << " es mayor que " << valor2;
        }
        else
        {
            /* si la condicion es falsa entra aca */
            cout << valor2 << " es mayor que " << valor1;
        }
    }
    
    
    
    return 0;
}