// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 24/02/2026

#include<iostream>
using namespace std;
int main()
{
    int limite, i;
    cout<<"Suma de tipo: 1+2+3+...+n"<<endl;
    cout<<"ingrese hasta que numero desea la suma: ";
    cin>>limite;
    for (i = 0; i==limite; i++)
    {
        i=i+i;
    }
    cout<<"El resultado es: "<<i;
    
}