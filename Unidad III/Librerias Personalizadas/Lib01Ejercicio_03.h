// Materia: Programación I, Paralelo 4
// Grupo: 1
// Autor: Miguel
// Fecha creación: 27-05-2026
// Proyecto Datos Persona

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