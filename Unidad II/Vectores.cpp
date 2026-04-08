#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector<int> LlenarDatos(int n);
void DesplegarVector(vector<int> vectorAux);
void OrdenarVector(vector<int> &vectorAux);
void OrdenarVectorOptimizado(vector<int> &vectorAux);

int main()
{
    int n = 0;
    vector<int> vec;
    srand(time(NULL));
    system("cls");
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    vec = LlenarDatos(n);
    DesplegarVector(vec);
    OrdenarVectorOptimizado(vec);
    DesplegarVector(vec);
    return 0;
}

vector<int> LlenarDatos(int n)
{
    vector<int> vectorAux;
    for (int i = 0; i < n; i++)
    {
        vectorAux.push_back(GenerarAleatorio(1,100));
    }
    return vectorAux;
}

void DesplegarVector(vector<int> vectorAux)
{
    cout << endl;
    for (int i = 0; i < vectorAux.size(); i++)
    {
        cout << vectorAux[i] << "\t";
    }
    cout << endl;
}

void OrdenarVector(vector<int> &vectorAux)
{
    int aux = 0;
    for (int j = 0; j < vectorAux.size(); j++)
    {
        for (int i = 0; i < vectorAux.size() - 1; i++)
        {
            if (vectorAux[i] > vectorAux[i+1])
            {
                aux = vectorAux[i];
                vectorAux[i] = vectorAux[i+1];
                vectorAux[i+1] = aux;
            }
        }
    }
}

void OrdenarVectorOptimizado(vector<int> &vectorAux)
{
    int aux = 0;
    bool desordenado = false;
    do
    {
        desordenado = false;
        for (int i = 0; i < vectorAux.size() - 1; i++)
        {
            if (vectorAux[i] > vectorAux[i+1])
            {
                aux = vectorAux[i];
                vectorAux[i] = vectorAux[i+1];
                vectorAux[i+1] = aux;
                desordenado = true;
            }
        }
    } while (desordenado);
}


int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
