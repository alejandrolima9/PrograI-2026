// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <string>

using namespace std;

bool VerificaArroba(string email);
int PosicionLetra(string email, char letra);
bool BuscarPuntoDespuesArroba(string email);

int main()
{
    string email;
    cout << "Ingrese un email: ";
    getline(cin, email);
    if (VerificaArroba(email))
    {
        if (BuscarPuntoDespuesArroba(email))
        {
            cout << "El email es VALIDO." << endl;
        }
        else
        {
            cout << "El email NO es VALIDO." << endl;
        }
    }
    else
    {
        cout << "El email NO es VALIDO." << endl;
    }
    return 0;
}

bool VerificaArroba(string email)
{
    int contador = 0;
    for (int i = 0; i < email.size(); i++)
    {
        if (email[i] == '@')
        {
            contador++;
        }
    }
    if (contador == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int PosicionLetra(string email, char letra)
{
    int pos = -1;
    for (int i = 0; i < email.size(); i++)
    {
        if (email[i] == letra)
        {
            pos = i;
        }
    }
    return pos;
}

bool BuscarPuntoDespuesArroba(string email)
{
    int contador = 0;
    for (int i = PosicionLetra(email, '@'); i < email.size(); i++)
    {
        if (email[i] == '.')
        {
            contador++;
        }
    }

    if (contador >= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}