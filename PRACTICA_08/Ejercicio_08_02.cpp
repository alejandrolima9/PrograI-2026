// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("chcp 65001");
    system("cls");

    int cantidad;
    int nom=0;
    int ape_uno=0;
    
    
    vector<string>repetidos;
    vector<string>lista_uno= {"Alejandro","Luis","Pedro","Pablo","Mauricio","Maura","Belen","Sandra","Ana","Sofia"};
    vector<string>lista_dos={"Pedro","Fabian","Lamine","luis","Pablo","Sofia","Ruben","Fernando","Nicole","Carla"};
    
    for (int i = 0; i < lista_uno.size(); i++)
    {
        for (int j = 0; j < lista_dos.size(); j++)
        {
            if (lista_uno[i]==lista_dos[j])
            {
                cout<<lista_dos[j]<<" se repite "<<endl;
            }
            
        }
        
    }
    return 0;
}