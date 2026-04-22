#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(char LimInferior, int LimSuperior);
void LlenarMatriz(char matriz[100][100], int n, int m);
void ImprimirMatriz(char matriz[100][100], int filas, int col);
void FilasSinMuerto(char matriz[100][100], int n, int m);
void ColumnasSinMuerto(char matriz[100][100], int n, int m);
void BuscarMuertos(char matriz[100][100], int n, int m);
void VerificarPaso(char matriz[100][100], int n, int m);

int main()
{
    char matriz[100][100];
    int n = 5;
    int m = 5;
    system("cls");
    srand(time(NULL));
    LlenarMatriz(matriz,n,m);
    ImprimirMatriz(matriz,n,m);
    FilasSinMuerto(matriz,n,m);
    ColumnasSinMuerto(matriz,n,m);
    BuscarMuertos(matriz,n,m);
    VerificarPaso(matriz,n,m);
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

void LlenarMatriz(char matriz[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (GenerarAleatorio(0,3) == 0)
            {
                matriz[i][j] = 'X';
            }
            else
            {
                matriz[i][j] = 'O';
            }
        }
    }
}

void ImprimirMatriz(char matriz[100][100], int filas, int col)
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

void FilasSinMuerto(char matriz[100][100], int n, int m)
{
    int contadorMuertosFila = 0;
    for (int i = 0; i < n; i++)
    {
        contadorMuertosFila = 0;
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] == 'X')
            {
                contadorMuertosFila++;
            }
        }
        if (contadorMuertosFila == 0)
        {
            cout << "La fila " << i << " no tiene muertos." << endl;
        }
    }
}

void ColumnasSinMuerto(char matriz[100][100], int n, int m)
{
    int contadorMuertosCol = 0;
    for (int i = 0; i < n; i++)
    {
        contadorMuertosCol = 0;
        for (int j = 0; j < m; j++)
        {
            if (matriz[j][i] == 'X')
            {
                contadorMuertosCol++;
            }
        }
        if (contadorMuertosCol == 0)
        {
            cout << "La columna " << i << " no tiene muertos." << endl;
        }
    }
}

void BuscarMuertos(char matriz[100][100], int n, int m)
{
    int cantidadMuertos = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] == 'X')
            {
                cout << "Muerto en la posicion ["<< i << "]["<< j <<"]." << endl;
                cantidadMuertos++;
            }
        }   
    }
    cout << "Hay " << cantidadMuertos << " muertos vivientes." << endl;
}

void VerificarPaso(char matriz[100][100], int n, int m)
{
    int cantidadMuertos = 0;
    for (int i = 0; i < n; i++)
    {
        if (matriz[i][0] == 'X')
        {
            cantidadMuertos++;
        }   
    }
    if (cantidadMuertos >= 2)
    {
        cout << "No es posible entrar al complejo" << endl;
    }
    else
    {
        cout << "Es posible entrar al complejo" << endl;
    }
}