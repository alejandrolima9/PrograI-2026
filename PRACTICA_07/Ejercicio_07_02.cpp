// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void insertar_valor(vector<double>&voltios);

int main()
{
    srand(time(NULL));
    system("chcp 65001");

    vector<double>voltios;
    insertar_valor(voltios);

    for (int i = 0; i < 9; i++)
    {
        cout<<voltios[i]<<"   ";
        if ((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}

void insertar_valor(vector<double>&voltios)
{
    double valor;
    
    for (size_t i = 0; i <=9; i++)
    {
        cout<<"ingrese un valor: "<<endl;
        cin>>valor; 
        voltios.push_back(valor);
    }
}