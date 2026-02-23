#include <iostream> // Utiliza las funciones cin cout
#include <cstdlib> // Utilizacion de las funciones aleatorias srand() rand()
#include <ctime> // Utiliza las funciones para sacar el tiempo

using namespace std;

int main()
{   
    int max = 200;
    int min = 40;
    system("cls");
    srand(time(0)); // Genero mi semilla
    for (int i = 1; i <= 10; i++)
    {
        cout << "Numero pseudoaleatorio: " << (rand() % (max - min + 1)) + min << endl;
    }
    return 0;
}
