// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>

using namespace std;

int fibonacci(int n);

int main() 
{
    int n;
    cout<<"ingrese la posicion: "<<endl;
    cin>>n;
    cout<<endl<<"es: "<<fibonacci(n);
    return 0;
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int actual = 0;
    int siguiente = 1;
    int resultado = 0;

    for (int i = 2; i <= n; ++i) {
        resultado = actual + siguiente; 
        actual = siguiente;             
        siguiente = resultado;          
    }

    return resultado;
}