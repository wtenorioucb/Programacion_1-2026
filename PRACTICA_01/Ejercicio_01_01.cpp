// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Carrera del estudiante: Ingenieria Mecatrónica
// Fecha creación: 15/02/2026

#include<iostream>
using namespace std;
int main()
{
    int numero_1, numero_2, opsuma=0, opresta=0, opmulti=0;
    float opdiv=0;
    cout<<"ingrese el primer numero: "<<endl;
    cin>>numero_1;
    cout<<"ahora ingrese el segundo numero: "<<endl;
    cin>>numero_2;
    opsuma=numero_1+numero_2;
    opresta=numero_1-numero_2;
    opmulti=numero_1*numero_2;
    opdiv=numero_1/numero_2;

    cout<<"los numeros ingresados fueron "<<numero_1<<" y "<<numero_2<<endl;
    cout<<"la suma de ambos es: "<<opsuma<<endl;
    cout<<"la resta de ambos es: "<<opresta<<endl;
    cout<<"la multiplicacion de ambos es: "<<opmulti<<endl;
    cout<<"la division de ambos es: "<<opdiv;

    return 0;

}