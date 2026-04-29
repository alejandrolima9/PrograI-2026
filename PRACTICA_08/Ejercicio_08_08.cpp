// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <string>

using namespace std;

void separar_tokens(string texto, char delimitador);

int main()
{
    system("cls");
    string texto;
    char delimitador;

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    cout << "Ingrese el delimitador: ";
    cin >> delimitador;

    separar_tokens(texto, delimitador);

    return 0;
}

void separar_tokens(string texto, char delimitador)
{
    string token = "";

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] != delimitador)
        {
            token += texto[i];
        }
        else
        {
            cout << token << endl;
            token = "";
        }
    }
    cout << token << endl;
}