// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 16/02/2026
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
cout<<"ingrese los 2 catetos del triangulo: "<<endl;
double cat1;
double cat2;
double hipo;
cin>>cat1>>cat2;
hipo=sqrt((cat1*cat1)+(cat2*cat2));
cout<<"la hipotenusa es: "<<hipo;

    return 0;
 }