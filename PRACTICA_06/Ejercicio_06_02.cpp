// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>

using namespace std;

double calcular_volumen(double pi,int radio, int altura);

int altura=10;
double pi=3.1416;

int main()
{
  
int radio;
cout<<"ingrese radio: "<<endl;
cin>>radio;
calcular_volumen(pi,radio,altura);
    return 0;
}

double calcular_volumen(double pi,int radio, int altura)
{
    double volumen=0;
    volumen=pi*(radio*radio)*altura;
    cout<<endl<<"volumen: "<<volumen;
    return volumen;
}