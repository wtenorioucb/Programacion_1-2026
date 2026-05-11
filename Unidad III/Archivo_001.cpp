#include <iostream>
#include <string>
#include <fstream> // Libreria para manejar archivos

using namespace std;

void EscribirArchivo(string NombreArchivo);
void LeerArchivo(string NombreArchivo);

int main()
{
    string NombreArchivo;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, NombreArchivo);
    NombreArchivo = NombreArchivo + ".txt";
    EscribirArchivo(NombreArchivo);
    LeerArchivo(NombreArchivo);
    

    return 0;
}

void EscribirArchivo(string NombreArchivo)
{
    // ESCRIBIR ARCHIVO
    // ================

    // 1. Abrir Archivo
    ofstream archivo;
    archivo.open(NombreArchivo, ios::app);

    // 2. Realizar Operaciones
    archivo << "Adios Mundo 4" << endl;
    archivo << "Adios Mundo 5" << endl;
    archivo << "Adios Mundo 6";

    // 3. Cerrar Archivo
    archivo.close();
}

void LeerArchivo(string NombreArchivo)
{
    // LEER ARCHIVO
    // ============
    // 1. Abrir el archivo
    ifstream archivo1; // Lectura
    archivo1.open(NombreArchivo);

    // 2. Operaciones
    string lineaTexto;

    if (archivo1.good())
    {
        while (!archivo1.eof())
        {
            getline(archivo1, lineaTexto); // Lee una linea de texto del archivo
            cout << lineaTexto << endl;
        }
    }
    else
    {
        cout << "No se puede abrir el archivo" << endl;
    }

    // 3. Cerrar archivo
    archivo1.close();
}