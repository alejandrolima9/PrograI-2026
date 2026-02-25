// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 24/02/2026

#include <iostream>
using namespace std;

int main()
{
int num_1;
int suma=0;
cout<<"ingrese un numero"<<endl;
cin>>num_1;
    for (int i = 1; i < num_1; i++)
        {
            if (num_1%i==0)
            {
                suma=suma+i;
            }
        }
    if (suma==num_1)
    {
        cout<<"es un numero perfecto";
    }
    else
    {
        cout<<"no es un numero perfecto";
    }
    
    return 0;
}