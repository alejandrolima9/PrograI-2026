// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros(10);
    int valor, i = 0;
    bool continuar = true;

    cout << "Ingrese numeros (negativo para terminar):" << endl;

    while (i < 10 && continuar)
    {
        cin >> valor;

        if (valor >= 0)
        {
            numeros[i] = valor;
            i++;
        }
        else
        {
            continuar = false;
        }
    }

    cout << "Elementos ingresados:" << endl;

    for (int j = 0; j < i; j++)
    {
        cout << numeros[j] << endl;
    }

    return 0;
}