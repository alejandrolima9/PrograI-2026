// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 24/02/2026

#include <iostream>
using namespace std;

int main()
{
int num;
int factorial=1;
int suma=0;
cout<<"ingrese un numero"<<endl;
cin>>num;
for (int i = 1; i <=num; i++)
{
    factorial*=i;
    suma+=factorial;
}
    cout<<"la suma de los factoriales es: "<<suma;
    
    return 0;
}