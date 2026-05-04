#include <iostream>

using namespace std;

int main()
{
    /* code */
    return 0;
}

int factorial(int n)
{
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}

int factorailRecursiva(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorailRecursiva(n-1);
    }
}
