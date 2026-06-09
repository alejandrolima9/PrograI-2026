// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>

using namespace std;

int potencia(int n,int exp);

int main() 
{
    int numero;
    int exponente;
    cout<<"ingrese un numero y su exponente: ";
    cin>>numero;
    cin>>exponente;
    cout<<"el resultado es: "<<potencia(numero,exponente)<<endl;
    return 0;
}

int potencia(int n,int exp)
{
    if (exp==0) {
        return 1;
    }
    else {
        return n*potencia(n,exp-1);
    }
}
