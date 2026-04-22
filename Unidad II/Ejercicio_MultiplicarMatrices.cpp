#include <iostream>

using namespace std;

void LlenarMatriz(int matriz[100][100], int filas, int col);
void ImprimirMatriz(int matriz[100][100], int filas, int col);
void MultiplicarMatrices(int matriz1[100][100], int matriz2[100][100], int matrizR[100][100], int n, int m);

int main()
{
    int matriz1[100][100];
    int matriz2[100][100];
    int matrizR[100][100];
    int n = 5;
    int m = 6;
    LlenarMatriz(matriz1, n,m);
    ImprimirMatriz(matriz1,n,m);
    LlenarMatriz(matriz2, m,n);
    ImprimirMatriz(matriz2,m,n);
    MultiplicarMatrices(matriz1, matriz2, matrizR,n,m);
    ImprimirMatriz(matrizR,n,n);
    return 0;
}

void LlenarMatriz(int matriz[100][100], int filas, int col)
{
    int valor = 1;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matriz[i][j] = valor;
            valor++;
        }
    }
}

void ImprimirMatriz(int matriz[100][100], int filas, int col)
{
    cout << "MATRIZ" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void MultiplicarMatrices(int matriz1[100][100], int matriz2[100][100], int matrizR[100][100], int n, int m)
{
    int total = 0;
    int k = 0;
    while (k < n)
    {
        for (int i = 0; i < n; i++)
        {
            total = 0;
            for (int j = 0; j < m; j++)
            {
                total = total + ( matriz1[k][j] * matriz2[j][i] );
            }
            matrizR[k][i] = total;
        }
        k++;
    }
}