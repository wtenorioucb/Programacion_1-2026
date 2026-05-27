// EJEMPLO ARCHIVO BINARIOS

#include <iostream>
#include <cstring>
#include <fstream> // Libreria para manejar archivos de Texto o Binarios

using namespace std;

// Definición de estructuras
struct DatosPersona // En total ocupa 12 bytes
{
    char nombre[8]; // 8 bytes
    int edad; // 4 bytes
};

// Prototipos de funciones
void EscribirArchivoBinario(string nombreArchivo, DatosPersona persona);
void LeerArchivoBinario(string nombreArchivo);
void EncontrarArchivoBinario(string nombreArchivo, string NombreBuscar);
void ModificarArchivoBinario(string nombreArchivo, string NombreBuscar);

int main()
{
    DatosPersona persona;
    string nombreBuscar;
    strcpy(persona.nombre, "Willy");
    persona.edad = 18;
    //EscribirArchivoBinario("DatosPersona.bin", persona);
    //LeerArchivoBinario("DatosPersona.bin");
    //EncontrarArchivoBinario("DatosPersona.bin", "Willy");
    cout << "Nombre de la persona a buscar: ";
    getline(cin, nombreBuscar);
    ModificarArchivoBinario("DatosPersona.bin", nombreBuscar);
    LeerArchivoBinario("DatosPersona.bin");
    return 0;
}

// Función que me permite escribir en una archivo binario la estructura (Datos Persona)
void EscribirArchivoBinario(string nombreArchivo, DatosPersona persona)
{
    ofstream archivo;
    // 1. Abrir el archivo.
    archivo.open(nombreArchivo, ios::binary | ios::app); // ios::app para adicionar datos al archivo

    // 2. Procesar el archivo.
    // Escribir los datos de la variable "persona" a un archivo binario
    archivo.write((char*) &persona, sizeof(DatosPersona));

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
        cout << "DATOS DE LA PERSONA" << endl;
        cout << "===================" << endl;
        cout << "\tNombre: " << persona.nombre << endl;
        cout << "\tEdad: " << persona.edad << endl;
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
        if (persona.nombre == NombreBuscar)
        {
            cout << "PERSONA ENCONTRADA" << endl;
            cout << "==================" << endl;
            cout << "\tNombre: " << persona.nombre << endl;
            cout << "\tEdad: " << persona.edad << endl;
            encontrada = true;
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
    fstream archivo;
    DatosPersona persona;
    bool encontrada = false;
    system("cls");

    // 1. Abrir el archivo.
    archivo.open(nombreArchivo, ios::in | ios::out | ios::binary);

    // 2. Procesar el archivo. 
    while (archivo.read((char*) &persona, sizeof(DatosPersona)))
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

    if (!encontrada)
    {
        cout << "PERSONA NO HA SIDO ENCONTRADA Y MODIFICADA EN EL ARCHIVO BINARIO " << nombreArchivo << endl;
        system("pause");
    }

    // 3. Cerrar el archivo.
    archivo.close();
}