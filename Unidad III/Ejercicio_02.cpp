#include <iostream>
#include <vector>

using namespace std;

struct Fecha // Para anidamiento
{
    int dia;
    int mes;
    int anio;
};

struct DatosEstudiante
{
    long int ci;
    char nombres[40];
    char apellidos[40];
    Fecha fechaNacimiento;
    float nota;
};

void AgregarDatosEstudiante(vector<DatosEstudiante> &estudiantes, int n);
void ImprimirDatos(vector<DatosEstudiante> estudiantes);

int main()
{
    vector<DatosEstudiante> estudiantes;
    int n = 0;
    system("cls");
    cout << "Ingrese cantidad de estudiantes: ";
    cin >> n;
    AgregarDatosEstudiante(estudiantes, n);
    ImprimirDatos(estudiantes);
    return 0;
}

void AgregarDatosEstudiante(vector<DatosEstudiante> &estudiantes, int n)
{
    DatosEstudiante estudiante;
    for (int i = 0; i < n; i++)
    {
        cout << "INGRESE LOS DATOS DEL ESTUDIANTE " << i+1 << endl;
        cout << "Ingrese su CI: ";
        cin >> estudiante.ci;
        cin.ignore();
        cout << "Ingrese su nombre: ";
        //solamente para los casos que la variable es un vector de char
        cin.getline(estudiante.nombres, 40);
        cout << "Ingrese su apellido: ";
        cin.getline(estudiante.apellidos, 40);
        cout << "Ingrese dia de nacimiento: ";
        cin >> estudiante.fechaNacimiento.dia;
        cout << "Ingrese mes de nacimiento: ";
        cin >> estudiante.fechaNacimiento.mes;
        cout << "Ingrese año de nacimiento: ";
        cin >> estudiante.fechaNacimiento.anio;
        cout << "Ingrese su nota: ";
        cin >> estudiante.nota;
        estudiantes.push_back(estudiante);
    }
}

void ImprimirDatos(vector<DatosEstudiante> estudiantes)
{
    for (int i = 0; i < estudiantes.size(); i++)
    {
        cout << "DATOS ESTUDIANTE " << i+1 << endl;
        cout << "\tCarnet: " << estudiantes[i].ci << endl;
        cout << "\tNombres: " << estudiantes[i].nombres << endl;
        cout << "\tApellidos: " << estudiantes[i].apellidos << endl;
        cout << "\tFecha de nacimiento: " << estudiantes[i].fechaNacimiento.dia << "/" << estudiantes[i].fechaNacimiento.mes << "/" << estudiantes[i].fechaNacimiento.anio << endl;
        cout << "\tNota: " << estudiantes[i].nota << endl;    
    }
}
