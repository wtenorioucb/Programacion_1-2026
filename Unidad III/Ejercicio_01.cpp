#include <iostream>

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

void AgregarDatosEstudiante(DatosEstudiante &estudiante);
void ImprimirDatos(DatosEstudiante estudiante);

int main()
{
    DatosEstudiante estudiante;
    AgregarDatosEstudiante(estudiante);
    ImprimirDatos(estudiante);
    return 0;
}

void AgregarDatosEstudiante(DatosEstudiante &estudiante)
{
    // Crear variable tipo DatosEstudiante
    cout << "INGRESE LOS DATOS DEL ESTUDIANTE" << endl;
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
}

void ImprimirDatos(DatosEstudiante estudiante)
{
    system("cls");
    cout << "DATOS ESTUDIANTE" << endl;
    cout << "\tCarnet: " << estudiante.ci << endl;
    cout << "\tNombres: " << estudiante.nombres << endl;
    cout << "\tApellidos: " << estudiante.apellidos << endl;
    cout << "\tFecha de nacimiento: " << estudiante.fechaNacimiento.dia << "/" << estudiante.fechaNacimiento.mes << "/" << estudiante.fechaNacimiento.anio << endl;
    cout << "\tNota: " << estudiante.nota << endl;
}
