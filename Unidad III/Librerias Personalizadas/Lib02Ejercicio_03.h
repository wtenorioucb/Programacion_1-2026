// Materia: Programación I, Paralelo 4
// Grupo: 1
// Autor: Ana
// Fecha creación: 27-05-2026
// Proyecto Datos Persona

#include <iostream>
#include <cstring>
#include <fstream> // Libreria para manejar archivos de Texto o Binarios

using namespace std;


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