#include <iostream>

using namespace std;

// Prototipo
float CarcularArea(float base, float altura);

int main()
{   
    float base = 0.0;
    float altura = 0.0;
    system("cls");
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    cout << "El area es: " << CarcularArea(base, altura) << endl;
    return 0;
}

float CarcularArea(float base, float altura)
{
    float area = 0;
    area = (base * altura) / 2;
    return area;
}