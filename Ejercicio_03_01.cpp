#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
  int n, dado, pares = 0;

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    srand(time(NULL));

    for(int i = 0; i < n; i++) {
        dado = rand() % 6 + 1;

        if(dado % 2 == 0) {
            pares++;
        }
    }
    cout << "Frecuencia de caras pares: " << pares << endl;

    return 0;

}