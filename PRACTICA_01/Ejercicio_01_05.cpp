// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Carrera del estudiante: Ingenieria Mecatrónica
// Fecha creación: 15/02/2026

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float angulo, opuesto, adyacente, hipotenusa=0;
    cout<<"ingrese el angulo entre la hipotenusa y el cateto adyacente: ";
    cin>>angulo;   
    if (angulo<90)
    {
        cout<<endl<<"ingrese el tamano del cateto adyacente: ";
        cin>> adyacente;
        if (adyacente>0)
        {
            cout<<endl<<"ingrese el tamano del cateto opuesto: ";
            cin>>opuesto;
            if (opuesto>0)
            {
                hipotenusa=sqrt(pow(adyacente,2)+pow(opuesto,2));
                cout<<endl<<"el valor de la hipotenusa es: "<<hipotenusa;
            }
            else{
                cout<<endl<<"valor de cateto opuesto invalido";
            }
            
        }
        else{
            cout<<endl<<"valor de cateto adyacente invalido";
        }
        
    }
    else{
        cout<<endl<<"valor de angulo invalido";
    }
    
}