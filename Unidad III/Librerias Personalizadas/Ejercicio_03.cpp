// Materia: Programación I, Paralelo 4
// Grupo: 1
// Autor: Willy, Ana y Miguel
// Fecha creación: 27-05-2026
// Proyecto Datos Persona

#include <iostream>
#include <string>
#include "Lib01Ejercicio_03.h"
#include "Lib02Ejercicio_03.h"
#include "Lib03Ejercicio_03.h"

using namespace std;
void MenuOpciones(string nombreArchivo);

int main()
{
    string nombreArchivo = "DatosPersona.bin";
    system("chcp 65001");
    MenuOpciones(nombreArchivo);
    return 0;
}

void MenuOpciones(string nombreArchivo)
{
    string nombreBuscar;
    int opcion = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "1. Adicionar Persona" << endl;
        cout << "2. Reporte Personas" << endl;
        cout << "3. Buscar datos Persona" << endl;
        cout << "4. Modificar datos Persona" << endl;
        cout << "5. Eliminar datos Persona" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione la opcion: ";
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
            case 1:
                EscribirArchivoBinario(nombreArchivo);
                system("pause");
                break;
            case 2:
                LeerArchivoBinario(nombreArchivo);
                system("pause");
                break;
            case 3:
                cout << "Nombre de la persona a buscar: ";
                cin.ignore();
                getline(cin, nombreBuscar);
                EncontrarArchivoBinario(nombreArchivo, nombreBuscar);
                system("pause");
                break;
            case 4:
                cout << "Nombre de la persona a modificar: ";
                cin.ignore();
                getline(cin, nombreBuscar);
                ModificarArchivoBinario(nombreArchivo, nombreBuscar);
                system("pause");
                break;
            case 5:
                cout << "Nombre de la persona a eliminar: ";
                cin.ignore();
                getline(cin, nombreBuscar);
                EliminarLogicaArchivoBinario(nombreArchivo, nombreBuscar);
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