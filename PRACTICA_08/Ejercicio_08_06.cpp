// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void invertir_frase(string frase);

int main()
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    invertir_frase(frase);
    return 0;
}

void invertir_frase(string frase)
{
    vector<string>palabras;
    string palabra;
    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i]!=' ')
        {
            palabra+=frase[i];
        }
        else
        {
            palabras.push_back(palabra);
            palabra="";
        } 
    }
    palabras.push_back(palabra);
    for (int i = palabras.size()-1; i >=0; i--)
    {
        cout<<palabras[i]<<" ";
    } 
}