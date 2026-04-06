#include <iostream>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void LlenarMatriz(int matrix[100][100], int rows, int cols);
void ImprimirMatriz(int matrix[100][100], int rows, int cols);
void CopiarMatriz(int matrizOrigen[100][100], int matrizDestino[100][100], int rows, int cols);
void TransponerMatriz(int matrizOrigen[100][100], int matrizDestino[100][100], int rows, int cols);

int main()
{
    int rows, cols;
    int matrix[100][100];
    int matrizDestino[100][100];
    system("cls");
    cout << "Ingrese el nro de filas de la matriz: ";
    cin >> rows;
    cout << "Ingrese el nro de columnas de la matriz: ";
    cin >> cols;
    
    LlenarMatriz(matrix, rows, cols);
    ImprimirMatriz(matrix, rows, cols);
    CopiarMatriz(matrix, matrizDestino, rows, cols);
    cout << endl;
    ImprimirMatriz(matrizDestino, rows, cols);
    TransponerMatriz(matrix, matrizDestino, rows, cols);
    cout << endl;
    ImprimirMatriz(matrizDestino, cols, rows);
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

void LlenarMatriz(int matrix[100][100], int rows, int cols)
{
    // Ingresar datos a una matriz
    for (int i = 0; i < rows; i++) // Primer for para las filas
    {
        for (int j = 0; j < cols; j++) // Segundo for para las columnas
        {
            matrix[i][j] = GenerarAleatorio(1,100);
        }
    }
}

void ImprimirMatriz(int matrix[100][100], int rows, int cols)
{
    // Despegar datos de una matriz
    for (int i = 0; i < rows; i++) // Primer for para las filas
    {
        for (int j = 0; j < cols; j++) // Segundo for para las columnas
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void CopiarMatriz(int matrizOrigen[100][100], int matrizDestino[100][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++) // Primer for para las filas
    {
        for (int j = 0; j < cols; j++) // Segundo for para las columnas
        {
            matrizDestino[i][j] = matrizOrigen[i][j];
        }
    }
}

void TransponerMatriz(int matrizOrigen[100][100], int matrizDestino[100][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++) // Primer for para las filas
    {
        for (int j = 0; j < cols; j++) // Segundo for para las columnas
        {
            matrizDestino[j][i] = matrizOrigen[i][j];
        }
    }
}