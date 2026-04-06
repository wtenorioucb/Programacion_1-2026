#include <iostream>
#include <vector> // Libreria de vectores
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void DesplegarVector(vector<float> lista);
void DesplegarVector(vector<int> lista);
void DesplegarVector(vector<char> lista);
vector<int> GenerarListaAnios(int n);
vector<float> GenerarListaVoltajes(int n);
vector<char> GenerarListaLetras(int n);

int main()
{
    vector<int> anios;
    vector<float> voltajes;
    vector<char> letras;
    srand(time(NULL));
    system("cls");

    //cout << "Generar años" << endl;
    //anios = GenerarListaAnios(10);
    //DesplegarVector(anios);

    //cout << "\nGenerar voltajes" << endl;
    //voltajes = GenerarListaVoltajes(100);
    //DesplegarVector(voltajes);

    cout << "\nGenerar letras" << endl;
    letras = GenerarListaLetras(10);
    DesplegarVector(letras);
    //DesplegarVector(voltajes);

    return 0;
}

vector<int> GenerarListaAnios(int n)
{
    vector<int> anios;
    for (int i = 0; i < n; i++)
    {
        anios.push_back(GenerarAleatorio(1990,2025));
    }
    return anios;
}

vector<float> GenerarListaVoltajes(int n)
{
    float valorGenerado = 0;
    vector<float> voltajes;
    for (int i = 0; i < n; i++)
    {
        valorGenerado = (GenerarAleatorio(0,99) / 100.00) + GenerarAleatorio(20,220);
        voltajes.push_back(valorGenerado);
    }
    return voltajes;
}

vector<char> GenerarListaLetras(int n)
{
    char letra;
    vector<char> letras;
    int codigoAscii;
    int MayusMinus = 0;
    for (int i = 0; i < n; i++)
    {
        // 65 -- 90 Mayúsculas
        // 97 -- 122 Minúsculas
        MayusMinus = GenerarAleatorio(1,2);
        if (MayusMinus == 1)
        {
            codigoAscii = GenerarAleatorio(65, 90);
        }
        else
        {
            codigoAscii = GenerarAleatorio(97, 122);
        }
        letras.push_back(char(codigoAscii));
    }
    return letras;
}

void DesplegarVector(vector<int> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << "\t";
    }
}

void DesplegarVector(vector<float> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << "\t";
    }
}

void DesplegarVector(vector<char> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << "\t";
    }
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
