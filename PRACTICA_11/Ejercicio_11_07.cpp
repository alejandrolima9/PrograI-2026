// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>
#include <vector>

using namespace std;

int calcular_formula(int n);

int main() 
{
    int n;
    cout<<"ingrese n: ";
    cin>>n;
    
    if (n < 1) {
        cout << "Por favor, ingresa un numero entero mayor o igual a 1." << endl;
    } else {
        int total = calcular_formula(n);
        cout << "El resultado de Q(" << n << ") es: " << total << endl;
    }
    
    return 0;
}

int calcular_formula(int n) 
{
    if (n == 1) {
        return 1;
    }
    int resultado = (n * n) + calcular_formula(n - 1);
    return resultado;
}