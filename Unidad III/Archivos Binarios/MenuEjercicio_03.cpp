#include <iostream>
#include <cstring>
#include <fstream> // Libreria para manejar archivos de Texto o Binarios

using namespace std;

// Definición de estructuras
struct DatosPersona // En total ocupa 12 bytes
{
    char nombre[8]; // 8 bytes
    int edad; // 4 bytes
    bool eliminado; // Para eliminar un registro de manera LOGICA
};


// Prototipos de funciones
void EscribirArchivoBinario(string nombreArchivo);
void LeerArchivoBinario(string nombreArchivo);
void EncontrarArchivoBinario(string nombreArchivo, string NombreBuscar);
void ModificarArchivoBinario(string nombreArchivo, string NombreBuscar);
void EliminarLogicaArchivoBinario(string nombreArchivo, string NombreBuscar);
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

// Función que me permite escribir en una archivo binario la estructura (Datos Persona)
void EscribirArchivoBinario(string nombreArchivo)
{
    DatosPersona persona;
    ofstream archivo;
    // Solicito los datos de la persoha y lo almaceno en la variable persona de tipo DatosPersona que es una estructura
    cout << "ADICIONAR PERSONA" << endl;
    cout << "=================" << endl;
    cout << "Ingrese el nombre de la persona: ";
    cin.ignore();

    cin.getline(persona.nombre, 8);
    cout << "Ingrese la edad de la persona: ";
    cin >> persona.edad;
    persona.eliminado = false;
    
    // 1. Abrir el archivo.
    archivo.open(nombreArchivo, ios::binary | ios::app); // ios::app para adicionar datos al archivo

    // 2. Procesar el archivo.
    // Escribir los datos de la variable "persona" a un archivo binario
    archivo.write((char*) &persona, sizeof(DatosPersona));
    cout << "Se ha adicionado a la persona correctamente." << endl;

    // 3. Cerrar el archivo.
    archivo.close();

}

// Función que me permite leer un archivo binarios
void LeerArchivoBinario(string nombreArchivo)
{
    ifstream archivo;
    DatosPersona persona;
    system("cls");
    // 1. Abrir el archivo.
    archivo.open(nombreArchivo, ios::binary);

    // 2. Procesar el archivo. 
    // Leer los datos de un archivo binario y colocarlo en la variable "persona"
    while (archivo.read((char*) &persona, sizeof(DatosPersona)))
    {
        if (!persona.eliminado) // Para verificar si una persona ha sido eliminada
        {
            cout << "DATOS DE LA PERSONA" << endl;
            cout << "===================" << endl;
            cout << "\tNombre: " << persona.nombre << endl;
            cout << "\tEdad: " << persona.edad << endl;
        }
    }

    // 3. Cerrar el archivo.
    archivo.close();
}

void EncontrarArchivoBinario(string nombreArchivo, string NombreBuscar)
{
    ifstream archivo;
    DatosPersona persona;
    bool encontrada = false;
    system("cls");

    // 1. Abrir el archivo.
    archivo.open(nombreArchivo, ios::binary);

    // 2. Procesar el archivo. 
    while (archivo.read((char*) &persona, sizeof(DatosPersona)))
    {
        if (!persona.eliminado) // Para verificar si una persona ha sido eliminada
        {
            if (persona.nombre == NombreBuscar)
            {
                cout << "PERSONA ENCONTRADA" << endl;
                cout << "==================" << endl;
                cout << "\tNombre: " << persona.nombre << endl;
                cout << "\tEdad: " << persona.edad << endl;
                encontrada = true;
            }
        }
    }

    if (!encontrada)
    {
        cout << "PERSONA NO HA SIDO ENCONTRADA EN EL ARCHIVO BINARIO " << nombreArchivo << endl;
    }

    // 3. Cerrar el archivo.
    archivo.close();
}

void ModificarArchivoBinario(string nombreArchivo, string NombreBuscar)
{
    fstream archivo; // Leer y Escribir el Archivo
    DatosPersona persona;
    bool encontrada = false;
    system("cls");

    // 1. Abrir el archivo.
    archivo.open(nombreArchivo, ios::in | ios::out | ios::binary);

    // 2. Procesar el archivo. 
    while (archivo.read((char*) &persona, sizeof(DatosPersona)))
    {
        if (!persona.eliminado) // Para verificar si una persona ha sido eliminada
        {
            if (persona.nombre == NombreBuscar)
            {
                cout << "Ingrese nuevo nombre: ";
                cin.getline(persona.nombre, 30);
                archivo.seekp(-sizeof(DatosPersona), ios::cur);
                archivo.write((char*) &persona, sizeof(DatosPersona));
                encontrada = true;
            }
        }
    }

    if (!encontrada)
    {
        cout << "PERSONA NO HA SIDO ENCONTRADA Y MODIFICADA EN EL ARCHIVO BINARIO " << nombreArchivo << endl;
        system("pause");
    }

    // 3. Cerrar el archivo.
    archivo.close();
}

void EliminarLogicaArchivoBinario(string nombreArchivo, string NombreBuscar)
{
    fstream archivo; // Leer y Escribir el Archivo
    DatosPersona persona;
    bool encontrada = false;
    system("cls");

    // 1. Abrir el archivo.
    archivo.open(nombreArchivo, ios::in | ios::out | ios::binary);

    // 2. Procesar el archivo. 
    while (archivo.read((char*) &persona, sizeof(DatosPersona)))
    {
        if (!persona.eliminado) // Para verificar si una persona ha sido eliminada
        {
            if (persona.nombre == NombreBuscar)
            {
                archivo.seekp(-sizeof(DatosPersona), ios::cur);
                persona.eliminado = true; // Modifico el dato que esta en el campo eliminado a true
                archivo.write((char*) &persona, sizeof(DatosPersona));
                encontrada = true;
            }
        }
    }

    if (encontrada)
    {
        cout << "PERSONA HA SIDO ELIMINADA DEL ARCHIVO BINARIO " << nombreArchivo << endl;
    }
    else
    {
        cout << "PERSONA NO ENCONTRADA EN EL ARCHIVO BINARIO " << nombreArchivo << endl;
    }

    // 3. Cerrar el archivo.
    archivo.close();
}