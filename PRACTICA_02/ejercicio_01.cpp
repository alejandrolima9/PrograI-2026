// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 24/02/2026

#include <iostream>
using namespace std;

int main()
{
int numero;
int multi;
do
{
    cout<<"ingrese un numero del 1 al 10"<<endl; 
    cin>>numero;
} while (numero<1||numero>10);
    for (int i=1; i <11; i++)
    {
        multi=numero*i;
        cout<<numero<<"x"<<i<<"="<<multi<<endl;
    }
    
    
    return 0;
}