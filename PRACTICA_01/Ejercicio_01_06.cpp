// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Carrera del estudiante: Ingenieria Mecatrónica
// Fecha creación: 15/02/2026

#include<iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    if (numero % 2 ==0)
    {
        cout<<endl<<"el numero "<<numero<<" es par";
    }
    else{
        cout<<endl<<"el numero "<<numero<<" es impar";
    }
    
}