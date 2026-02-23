#include <iostream>

using namespace std;

int main()
{
    int a=4, b=3, c=2;
    int resultado = 0;
    int i = 1;
    while (i <= a)
    {
        if ((i % 2 == 0) || (b % 2 == 0))
        {
            resultado += (i * c) - (b / ( i+1 ) );
        }
        else
        {
            resultado += (b % (i + c));
        }
        i++;
    }
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
