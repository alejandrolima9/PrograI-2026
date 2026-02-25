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
int num_2;
cout<<"ingrese 2 numeros"<<endl;
cin>>num_1;
cout<<endl;
cin>>num_2;
if (num_1>num_2)
{
    for (int i=num_1; i >=num_2; i--)
    {
        cout<<i<<" ";
    }
    
}
else
{
    for (int i=num_1; i <=num_2; i++)
    {
        cout<<i<<" ";
    }
}
    return 0;
}