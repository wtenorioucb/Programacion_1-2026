#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    int edad;
    
    system("cls");
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); // Borra el Buffer 
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << endl;
    cout << "Su nombre es: " << nombre << " y tiene " << edad << " años.";
    
    return 0;
}
