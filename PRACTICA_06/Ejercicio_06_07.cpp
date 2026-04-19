// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>

using namespace std;

void agregar_nota(double &nota,int &cantidad,double &suma_total);

int main()
{
    system("cls");

    int cantidad;
    double nota;
    double suma_total=0;
    cout<<"ingrese la cantidad de notas: ";
    cin>>cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout<<"ingrese la nota: "<<endl;
        cin>>nota;
        agregar_nota(nota,cantidad,suma_total);
    }
    cout<<"la suma total de notas es: "<<suma_total;
    

    return 0;
}

void agregar_nota(double &nota,int &cantidad,double &suma_total)
{  
    suma_total+=nota;
}
