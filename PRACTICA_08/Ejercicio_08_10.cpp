// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <string>

using namespace std;

string mayuscula_inicial(string texto);

int main()
{
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << mayuscula_inicial(texto) << endl;

    return 0;
}

string mayuscula_inicial(string texto)
{
    for (int i = 0; i < texto.size(); i++)
    {
        if (i == 0 || texto[i - 1] == ' ')
        {
            if (texto[i] >= 'a' && texto[i] <= 'z')
            {
                texto[i] = texto[i] - 32;
            }
        }
    }

    return texto;
}