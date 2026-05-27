// Materia: Programación I, Paralelo 4
// Grupo: 1
// Autor: Willy
// Fecha creación: 27-05-2026
// Proyecto Datos Persona

#include <iostream>
#include <cstring>
#include <fstream> // Libreria para manejar archivos de Texto o Binarios

using namespace std;


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