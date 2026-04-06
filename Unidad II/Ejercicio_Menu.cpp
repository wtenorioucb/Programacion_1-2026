#include <iostream>

using namespace std;

void MenuOpciones();

int main()
{
    system("chcp 65001");
    MenuOpciones();
    return 0;
}

void MenuOpciones()
{
    int opcion = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "1. Opción 1" << endl;
        cout << "2. Opción 2" << endl;
        cout << "3. Opción 3" << endl;
        cout << "4. Opción 4" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione la opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                cout << "Ingreso a la opcion 1." << endl;
                system("pause");
                break;
            case 2:
                cout << "Ingreso a la opcion 2." << endl;
                system("pause");
                break;
            case 3:
                cout << "Ingreso a la opcion 3." << endl;
                system("pause");
                break;
            case 4:
                cout << "Ingreso a la opcion 4." << endl;
                system("pause");
                break;
            default:
                if (opcion != 0)
                {
                    cout << "Debe ingresar una opcion valida." << endl;
                    system("pause");
                }
                break;
        }
    } while (opcion != 0);
    system("cls");
    cout << "SE HA SALIDO DEL MENU" << endl;
}
