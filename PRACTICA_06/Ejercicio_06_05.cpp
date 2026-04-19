// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>

using namespace std;

double calcular_area(double lado);
double calcular_area(double base, double altura);
float calcular_area(float radio);

const float pi = 3.1416;

int main()
{
system("cls");

double lado;
double base;
double altura;
float radio;
cout<<"ingrese el lado de su cuadrado: ";
cin>>lado;
cout<<endl<<"ingrese los lados de su rectangulo: ";
cin>>base>>altura;
cout<<endl<<"ingrese el radio de su circulo: ";
cin>>radio;

cout<<endl<<"area del cuadrado: "<<calcular_area(lado)<<endl;
cout<<endl<<"area del rectangulo: "<<calcular_area(base,altura)<<endl;
cout<<endl<<"area del circulo: "<<calcular_area(radio,pi)<<endl;
    
    return 0;
}

double calcular_area(double lado)
{
    double cuadrado;
    cuadrado=lado*lado;
    return cuadrado;
}

double calcular_area(double base, double altura)
{
    double rectangulo;
    rectangulo=base*altura;
    return rectangulo;
}

float calcular_area(float radio)
{
    float circulo;
    circulo=pi * radio * radio;
    return circulo;
}
