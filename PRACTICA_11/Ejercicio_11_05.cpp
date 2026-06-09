// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>
#include <vector>

using namespace std;

int sumar_vector(vector<int> numeros,int tamano);

int main() 
{
    vector<int> numeros={3,6,8,3,9};
    int tamano=numeros.size();
    int resultado=sumar_vector(numeros,tamano-1);
    cout<<resultado;
    return 0;
}

int sumar_vector(vector<int> numeros,int tamano)
{
    if (tamano == 0) {
        return numeros[0];
    }
    int suma = numeros[tamano] + sumar_vector(numeros, tamano - 1);
    return suma;
}