// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Carrera del estudiante: Ingenieria Mecatrónica
// Fecha creación: 17/02/2026

#include<iostream>
using namespace std;
int main()
{
    int dato1, dato2, dato3, dato4;
    cout<<"Ingrese el primer numero: ";
    cin>>dato1;
    cout<<endl<<"Ingrese el segundo numero: ";
    cin>>dato2;
    cout<<endl<<"Ingrese el tercer numero: ";
    cin>>dato3;
    cout<<endl<<"Ingrese el cuarto numero: ";
    cin>>dato4;
    if (dato4==dato1)
    {
        if (dato4==dato2)
        {
            if (dato4==dato3)
            {
                cout<<endl<<dato4<<" "<<dato1<<" "<<dato2<<" "<<dato3;
            }
            else{
                cout<<endl<<"El tercer numero ingresado es identico al ultimo que ingresaste";
            }
        }
        else{
            cout<<endl<<"El segundo numero ingresado es identico al ultimo que ingresaste";
        }
        
    }
    else{
        cout<<endl<<"El primer numero ingresado es identico al ultimo que ingresaste";
     }
    
}   