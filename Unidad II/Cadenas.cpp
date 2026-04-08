#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main()
{
    string nombres;
    string apellidos;
    string nombreCompleto;
    system("cls");
    nombres = "WILLY EDWIN";
    apellidos = " TENORIO";
    cout << "Nombres: " << nombres << endl;
    cout << "La variable nombres tiene una longitud de: " << nombres.length() << endl;
    cout << "La variable nombres tiene una longitud de: " << nombres.size() << endl;
    nombreCompleto = nombres.insert(11, apellidos);
    // nombreCompleto = "WILLY EDWIN TENORIO"
    cout << "Nombre Completo: " << nombreCompleto << endl;
    cout << "Eliminar primer nombre: " << nombreCompleto.erase(0,6) << endl;

    // nombreCompleto = "WILLY E. TENORIO"
    cout << "Replace: " << nombreCompleto.replace(7,4,".") << endl;

    cout << "La letra E se encuentra en la posicion: " << nombreCompleto.find("E") << endl;
    cout << "La letra E se encuentra en la posicion: " << nombreCompleto.rfind("E") << endl;

    // nombreCompleto = "WILLY EDWIN TENORIO"
    cout << "SubStr: " << nombreCompleto.substr(6,5) << endl;

    cout << "Minusculas: " << char(tolower('A'))  << endl;

    return 0;
}
