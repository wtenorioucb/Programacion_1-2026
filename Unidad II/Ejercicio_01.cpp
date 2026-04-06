#include <iostream>

using namespace std;

void ModificarValor();

int global01 = 0;

int main()
{
    global01 = 10;
    ModificarValor();
    cout << "El valor es:" << global01;
    return 0;
}

void ModificarValor()
{
    int global01;
    global01 += 5;
}
