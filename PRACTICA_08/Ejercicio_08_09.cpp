// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <string>

using namespace std;

bool palindromo(string texto);

int main()
{
    system("cls");
    string texto;
    char delimitador;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    if (palindromo(texto))
    {
        cout<<"es polindromo"<<endl;
    }
    else
    {
        cout<<"no es polindromo"<<endl;
    }
    return 0;
}

bool palindromo(string texto)
{
    string nuevo;
    string invertido;
    for (int i = 0; i < texto.size(); i++)
    {
        if (!(texto[i]==' '))
        {
            nuevo+=texto[i];
        }
    }
    for (int i = nuevo.size()-1; i >=0; i--)
    {
        invertido+=nuevo[i];
    }
    if (invertido==nuevo)
    {
        return true;
    }
    else
    {
        return false;
    }  
}