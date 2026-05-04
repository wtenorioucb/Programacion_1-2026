#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GeneraAleatorio(int LimInicial, int LimFinal);
void Simulacion(int n, float gasolinera[3][100], vector<float> &litrosPorTipo);
void ImprimirMatriz(float gasolinera[3][100]);
void LimpiarMatriz(float gasolinera[3][100]);
void SumaMatriz(float gasolinera[3][100]);
void ImprimirLitrosPorTipo(vector<float> litrosPorTipo, vector<string> tipos);

int main()
{
    int n = 0;
    vector<string> placas = {"2345ADE", "2548UFG", "5248DFT", "2513CZN", "5245SDC", "4785WER", "8549ASD", "3256ERT", "1258ASX", "5248QWE"};
    vector<string> tipos = {"Normal", "Vagoneta", "Camioneta"};
    vector<float> litrosPorTipo(3,0);
    float gasolinera[3][100];
    srand(time(NULL));
    cout << "Ingrese la cantidad de vehiculos: ";
    cin >> n;
    LimpiarMatriz(gasolinera);
    Simulacion(n, gasolinera, litrosPorTipo);
    ImprimirMatriz(gasolinera);
    SumaMatriz(gasolinera);
    ImprimirLitrosPorTipo(litrosPorTipo, tipos);
    return 0;
}

int GeneraAleatorio(int LimInicial, int LimFinal)
{
    return LimInicial + rand() % ((LimFinal + 1) - LimInicial);
}

void Simulacion(int n, float gasolinera[3][100], vector<float> &litrosPorTipo)
{
    int manguera = 0;
    int vehiculo = 0;
    int tipoVehiculo = 0;
    int litros = 0;
    int IManguera1 = 0;
    int IManguera2 = 0;
    int IManguera3 = 0;
    for (int i = 0; i < n; i++)
    {
        manguera = GeneraAleatorio(0,2);
        vehiculo = GeneraAleatorio(0,9);
        tipoVehiculo = GeneraAleatorio(0,2);
        switch (tipoVehiculo)
        {
            case 0: // Normal
                litros = GeneraAleatorio(20,40);
                litrosPorTipo[0] = litrosPorTipo[0] + litros;
                break;
            case 1: // Vagoneta
                litros = GeneraAleatorio(30,60);
                litrosPorTipo[1] = litrosPorTipo[1] + litros;
                break;
            case 2: // Camioneta
                litros = GeneraAleatorio(30,80);
                litrosPorTipo[2] = litrosPorTipo[2] + litros;
                break;
        }
        switch (manguera)
        {
            case 0:
                if (IManguera1 < 100)
                {
                    gasolinera[0][IManguera1] = litros;
                    IManguera1++;
                }
                break;
            case 1:
                if (IManguera2 < 100)
                {
                    gasolinera[1][IManguera2] = litros;
                    IManguera2++;
                }
                break;
            case 2:
                if (IManguera3 < 100)
                {
                    gasolinera[2][IManguera3] = litros;
                    IManguera3++;
                }
                break;
        }
    }
}

void ImprimirMatriz(float gasolinera[3][100])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            cout << gasolinera[i][j] << "\t";
        }
        cout << endl;
    }
}

void LimpiarMatriz(float gasolinera[3][100])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            gasolinera[i][j] = 0.0;
        }
    }
}

void SumaMatriz(float gasolinera[3][100])
{
    int suma = 0;
    for (int i = 0; i < 3; i++)
    {
        suma = 0;
        for (int j = 0; j < 100; j++)
        {
            suma = suma + gasolinera[i][j];
        }
        cout << "El total de la maguera " << i << " es: " << suma << endl;
    }
}

void ImprimirLitrosPorTipo(vector<float> litrosPorTipo, vector<string> tipos)
{
    for (int i = 0; i < litrosPorTipo.size(); i++)
    {
        cout << "El monto total de las " << tipos[i] << " es: " << litrosPorTipo[i] << endl;
    }
}