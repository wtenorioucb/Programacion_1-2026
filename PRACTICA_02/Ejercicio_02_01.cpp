// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 24/02/2026

#include<iostream>
using namespace std;
int main()
{
    int numero, i, reserva=0;
    cout<<"Ingrese un numero del 1 al 10: ";
    cin>>numero;
    if (numero>=1 and numero<=11)
    {
        reserva=numero;
        for (i = 1; i <=10; i++)
        {
            numero=reserva*i;
            cout<<endl<<reserva<<" x "<< i <<" = "<<numero;
        }
        
    }
    else{
        cout<<endl<<"numero no valido, fin de programa";
    }
    
}