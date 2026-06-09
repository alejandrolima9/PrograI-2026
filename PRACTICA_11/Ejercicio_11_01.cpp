// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>

using namespace std;

int sumaDigitos(int n);

int main() 
{
    int numero;
    cout<<"ingrese un numero: ";
    cin>>numero;
    cout<<"La suma de los digitos de "<<numero<<" es: "<<sumaDigitos(numero)<<endl;
    return 0;
}

int sumaDigitos(int n)
{
    if (n < 10) {
        return n;
    }
    else {
        return (n % 10) + sumaDigitos(n / 10);
    }
}
