// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void eliminar_numeros(string texto);

int main()
{
    system("cls");
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    eliminar_numeros(texto);
    return 0;
}

void eliminar_numeros(string texto)
{
    string eliminados="";
    for (int i = 0; i < texto.size(); i++)
    {
        if (!(texto[i]>='0'&&texto[i]<='9'))
        {
            eliminados+=texto[i];
        }
        
    }
    for (int i = 0; i < eliminados.size(); i++)
    {
        cout<<eliminados[i]<<" ";
    }
}