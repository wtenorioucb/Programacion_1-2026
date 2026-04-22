#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz(int matriz[100][100], int n, int a, int b);
void ImprimirMatriz(int matriz[100][100], int filas, int col);
int GenerarAleatorio(int LimInferior, int LimSuperior);
int ProductoUltimaFila(int matriz[100][100], int n);
int SumaUltimaColumna(int matriz[100][100], int n);
void DevolverMayor(int matriz[100][100], int n, int &mayor, int &fila, int &col);
int DesviacionEstandartMatriz(int matriz[100][100], int n);

int main()
{
    int a = 0;
    int b = 0;
    int n = 0;
    int fila = 0;
    int col = 0;
    int mayor = 0;
    int matriz1[100][100];

    srand(time(NULL));

    cout << "Ingrese el valor de N: ";
    cin >> n;
    
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    LlenarMatriz(matriz1, n, a, b);
    ImprimirMatriz(matriz1, n, n);
    cout << "La suma de la ultima columna es: " << SumaUltimaColumna(matriz1,n) << endl;
    cout << "El producto de la ultima fila es: " << ProductoUltimaFila(matriz1,n) << endl;
    
    mayor = a;
    DevolverMayor(matriz1, n, mayor, fila, col);
    cout << "El mayor valor es: " << mayor << endl;
    cout << "Esta en la fila: " << fila << endl;
    cout << "Esta en la columna: " << col << endl;
    cout << "La desviación standart es: " << DesviacionEstandartMatriz(matriz1,n) << endl;
    return 0;
}

void LlenarMatriz(int matriz[100][100], int n, int a, int b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = GenerarAleatorio(a,b);
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
    cout << endl;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

int SumaUltimaColumna(int matriz[100][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + matriz[i][n-1];
    }
    return suma;
}

int ProductoUltimaFila(int matriz[100][100], int n)
{
    int producto = 1;
    for (int j = 0; j < n; j++)
    {
        producto = producto * matriz[n-1][j];
    }
    return producto;
}

void DevolverMayor(int matriz[100][100], int n, int &mayor, int &fila, int &col)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
                fila = i;
                col = j;
            }
        }
    }
}

int MediaMatriz(int matriz[100][100], int n)
{
    int media = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            media = media + matriz[i][j];
        }
    }
    return media / ( n * n );
}

int DesviacionEstandartMatriz(int matriz[100][100], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            total = total + pow(matriz[i][j] - MediaMatriz(matriz, n), 2);
        }
    }
    total = sqrtl(total / (n * n));
    return total;
}