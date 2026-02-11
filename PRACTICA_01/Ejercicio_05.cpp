#include <iostream>

using namespace std;

int main()
{
    int opcion;

    system("cls"); // Limpiar Pantalla
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            cout << "Ingreso a la opcion 1" << endl;
            break;
        case 2:
            cout << "Ingreso a la opcion 2" << endl;
            break;
        case 3:
            cout << "Ingreso a la opcion 3" << endl;
            break;
        default:
            cout << "No ha ingresado a ninguna opcion" << endl;
            break;
    }
    return 0;
}