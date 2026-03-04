#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
int GenerarCantidadVotantes();
int GenerarSimulacionVotos();

int main()
{
    int auxiliar;
    srand(time(NULL)); // Semilla
    system("cls");
    auxiliar = GenerarSimulacionVotos();
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

int GenerarCantidadVotantes()
{
    int porcentaje = 0;
    int cantidadVotantes = 0;
    porcentaje = GenerarAleatorio(80, 95);
    cantidadVotantes = 300 * porcentaje / 100;
    return cantidadVotantes;
}

int GenerarSimulacionVotos()
{
    int NroVotantes = 0;
    int edad = 0;
    int voto = 0;
    int sumaVotoPDC = 0;
    int sumaVotoLibre = 0;
    int sumaVotoNulo = 0;
    int sumaVotoBlanco = 0;
    int rangoEdad_18_25 = 0;
    int rangoEdad_26_35 = 0;
    int rangoEdad_36_50 = 0;
    int rangoEdad_51_99 = 0;
    NroVotantes = GenerarCantidadVotantes();
    for (int i = 1; i <= NroVotantes; i++)
    {
        edad = GenerarAleatorio(18,99);
        if (edad >= 18 && edad <= 25)
        {
            rangoEdad_18_25++;
        }
        if (edad >= 26 && edad <= 35)
        {
            rangoEdad_26_35++;
        }
        if (edad >= 36 && edad <= 50)
        {
            rangoEdad_36_50++;
        }
        if (edad >= 51 && edad <= 99)
        {
            rangoEdad_51_99++;
        }
        voto = GenerarAleatorio(1,4);
        switch (voto)
        {
            case 1:
                sumaVotoPDC++;
                break;
            case 2:
                sumaVotoLibre++;
                break;
            case 3:
                sumaVotoNulo++;
                break;
            case 4:
                sumaVotoBlanco++;
                break;        
        }
    }
    cout << "RESULTADOS OFICIALES" << endl;
    cout << "====================" << endl;
    cout << "Votaron por PDC: " << (sumaVotoPDC*100)/NroVotantes << endl;
    cout << "Votaron por Libre: " << (sumaVotoLibre*100)/NroVotantes << endl;
    cout << "Votaron por Nulo: " << (sumaVotoNulo*100)/NroVotantes << endl;
    cout << "Votaron por Blanco: " << (sumaVotoBlanco*100)/NroVotantes << endl;
    cout << "Entre 18 y 25 años ("<< rangoEdad_18_25 << "): " << (rangoEdad_18_25*100)/NroVotantes << endl;
    cout << "Entre 26 y 35 años ("<< rangoEdad_26_35 << "): " << (rangoEdad_26_35*100)/NroVotantes << endl;
    cout << "Entre 36 y 50 años ("<< rangoEdad_36_50 << "): " << (rangoEdad_36_50*100)/NroVotantes << endl;
    cout << "Entre 51 y 99 años ("<< rangoEdad_51_99 << "): " << (rangoEdad_51_99*100)/NroVotantes << endl;
    if (sumaVotoPDC > sumaVotoLibre)
    {
        cout << "El ganador es PDC." << endl;
        cout << "Gano con: " << (sumaVotoPDC*100)/(sumaVotoPDC+sumaVotoLibre);
    }
    else
    {
        if (sumaVotoPDC == sumaVotoLibre)
        {
            cout << "Es un empate." << endl;
        }
        else
        {
            cout << "El ganador es Libre." << endl;
            cout << "Gano con: " << (sumaVotoLibre*100)/(sumaVotoPDC+sumaVotoLibre);
        }
    }
    return 0;
}
