// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>

using namespace std;

void problema(int n);

int main() 
{
    int n;
    cout<<"ingrese n: ";
    cin>>n;

    if (n > 1) {
        problema(n);
        cout << endl;
    } else {
        cout << "ingresa un numero mayor que 1" << endl;
    }
    return 0;
}

void problema(int n)
{
    cout<<n<<"  "; 
    if (n==1)
    {
        return;
    }
    if (n%2==0)
    {
        problema(n/2);
    }
    else
    {
        problema((n*3)+1);
    }
}