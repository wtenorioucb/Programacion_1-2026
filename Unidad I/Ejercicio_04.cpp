#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int numero = 0;
    int num_aleatorio = 0;
    bool adivino_numero = true;
    int contador = 0;

    // Crear la semilla de numeros aleatorios
    srand(time(NULL));

    // Validar si el numero esta entre 1 y 100
    do
    {
        system("cls");
        cout << "Piense un numero: ";
        cin >> numero;
        if (numero < 1 || numero > 100)
        {
            cout << "Debe ingresar un numero entre 1 y 100." << endl;
            system("pause");
        }
        else
        {
            contador++;
        }
    } while (numero < 1 || numero > 100);

    // Generar un numero aleatorio
    num_aleatorio = ( rand() % 100 ) + 1;

    do
    {
        if (numero == num_aleatorio)
        {
            cout << "Adivinaste el numero!" << endl;
            system("pause");
            adivino_numero = false;
        }
        else
        {
            if (numero > num_aleatorio)
            {
                cout << "El numero es MENOR" << endl;
                system("pause");
            }
            else
            {
                cout << "El numero es MAYOR" << endl;
                system("pause");
            }
            do
            {
                system("cls");
                cout << "Piense un numero: ";
                cin >> numero;
                if (numero < 1 || numero > 100)
                {
                    cout << "Debe ingresar un numero entre 1 y 100." << endl;
                    system("pause");
                }
                else
                {
                    contador++;
                }
            } while (numero < 1 || numero > 100);
        }
    } while (adivino_numero);
    cout << "El numero aletorio es: " << num_aleatorio << endl;
    cout << "El numero de intentos es: " << contador << endl;
    return 0;
}
