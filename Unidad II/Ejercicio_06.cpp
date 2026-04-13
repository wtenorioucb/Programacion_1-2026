#include <iostream>

using namespace std;

int JugarTresEnRaya();
void DesplegarMatrix(char TresRaya[3][3]);
bool ExisteGanador(char TresRaya[3][3], char simbolo);

int main()
{
    int jugador = 0;
    jugador = JugarTresEnRaya();
    return 0;
}

int JugarTresEnRaya()
{
    int nroJugadas = 0;
    bool hayGanador = false;
    int posicion = 0;
    int turno = 1;
    char simbolo = ' ';
    char TresRaya[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
    do
    {
        system("cls");
        DesplegarMatrix(TresRaya);
        if (turno == 1)
        {
            cout << "Jugador 1: ";
            cin >> posicion;
            turno = 2;
            simbolo = 'O';
        }
        else
        {
            cout << "Jugador 2: ";
            cin >> posicion;
            turno = 1;
            simbolo = 'X';
        }
        switch (posicion)
        {
            case 1:
                if (TresRaya[0][0] == '-') // Esta vacio
                {
                    TresRaya[0][0] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 2:
                if (TresRaya[0][1] == '-') // Esta vacio
                {
                    TresRaya[0][1] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 3:
                if (TresRaya[0][2] == '-') // Esta vacio
                {
                    TresRaya[0][2] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 4:
                if (TresRaya[1][0] == '-') // Esta vacio
                {
                    TresRaya[1][0] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 5:
                if (TresRaya[1][1] == '-') // Esta vacio
                {
                    TresRaya[1][1] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 6:
                if (TresRaya[1][2] == '-') // Esta vacio
                {
                    TresRaya[1][2] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 7:
                if (TresRaya[2][0] == '-') // Esta vacio
                {
                    TresRaya[2][0] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 8:
                if (TresRaya[2][1] == '-') // Esta vacio
                {
                    TresRaya[2][1] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
            case 9:
                if (TresRaya[2][2] == '-') // Esta vacio
                {
                    TresRaya[2][2] = simbolo;
                    hayGanador = ExisteGanador(TresRaya, simbolo);
                }
                else
                {
                    cout << "Esta lleno.";
                    nroJugadas--;
                    if (turno == 1)
                    {
                        turno = 2;
                        simbolo = 'X';
                    }
                    else
                    {
                        turno = 1;
                        simbolo = 'O';
                    }                    
                }
                break;
        }
        nroJugadas++;
    } while (!((nroJugadas == 9 || hayGanador)));
    if (hayGanador)
    {
        if (simbolo == 'O')
        {
            cout << "Ganador Jugador 1." << endl;
        }
        else
        {
            cout << "Ganador Jugador 2." << endl;
        }
        
    }
    else
    {
        cout << "Hay un empate" << endl;
    }
    
}

void DesplegarMatrix(char TresRaya[3][3])
{
    cout << endl;
    cout << "RESULTADO TRES EN RAYA" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << TresRaya[i][j] << "\t";
        }
        cout << endl;
    }
}

bool ExisteGanador(char TresRaya[3][3], char simbolo)
{
    if (TresRaya[0][0] == simbolo && TresRaya[0][1] == simbolo && TresRaya[0][2] == simbolo)
    {
        return true;
    }
    if (TresRaya[1][0] == simbolo && TresRaya[1][1] == simbolo && TresRaya[1][2] == simbolo)
    {
        return true;
    }
    if (TresRaya[2][0] == simbolo && TresRaya[2][1] == simbolo && TresRaya[2][2] == simbolo)
    {
        return true;
    }
    if (TresRaya[0][0] == simbolo && TresRaya[1][0] == simbolo && TresRaya[2][0] == simbolo)
    {
        return true;
    }
    if (TresRaya[0][1] == simbolo && TresRaya[1][1] == simbolo && TresRaya[2][1] == simbolo)
    {
        return true;
    }
    if (TresRaya[0][2] == simbolo && TresRaya[1][2] == simbolo && TresRaya[2][2] == simbolo)
    {
        return true;
    }
    if (TresRaya[0][0] == simbolo && TresRaya[1][1] == simbolo && TresRaya[2][2] == simbolo)
    {
        return true;
    }
    if (TresRaya[0][2] == simbolo && TresRaya[1][1] == simbolo && TresRaya[2][0] == simbolo)
    {
        return true;
    }
    return false;
}