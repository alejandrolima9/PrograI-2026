// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>

using namespace std;

int mcdEuclides(int a, int b) ;

int main() 
{
    int num1;
    int num2;
    cout<<"ingrese dos numeros: "<<endl;
    cin>>num1;
    cin>>num2;
    cout<<endl<<"el comun divisor es: "<<mcdEuclides(num1,num2);
    return 0;
}

int mcdEuclides(int a, int b) 
{
    if (b == 0) {
        return a;
    }
    
    return mcdEuclides(b, a % b);
}