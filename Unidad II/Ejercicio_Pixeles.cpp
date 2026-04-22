#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarVector(vector<int> &numeros, int n);
void ImprimirVector(vector<int> numeros);
vector<int> LlenarPorRangos(vector<int> numeros);

int main()
{
    vector<int> numeros;
    vector<int> resultado;
    LlenarVector(numeros,15);
    ImprimirVector(numeros);
    resultado = LlenarPorRangos(numeros);
    ImprimirVector(resultado);
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

void LlenarVector(vector<int> &numeros, int n)
{
    for (int i = 0; i < n; i++)
    {
        numeros.push_back(GenerarAleatorio(0,255));
    }
}

void ImprimirVector(vector<int> numeros)
{
    cout << "VECTOR" << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << "\t";
    }
}

vector<int> LlenarPorRangos(vector<int> numeros)
{
    vector<int> resultado(26, 0);
    int posicion = 0;
    for (int i = 0; i < numeros.size(); i++)
    {
        posicion = numeros[i] / 10;
        resultado[posicion]++;
    }   
    return resultado;
}