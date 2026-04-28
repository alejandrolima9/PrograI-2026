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

int generar_aleatorio(int min,int max);
void llenar_notas(int cantidad,vector<int>&notas);
void sacar_promedio(vector<int>&notas);

int main()
{
    system("chcp 65001");
    srand(time(NULL));
    system("cls");
    

    vector<int>notas;
    int cantidad;

    cout<<"ingrese la cantidad de calificaciones: "<<endl;
    cin>>cantidad;
    
    llenar_notas(cantidad,notas);
    sacar_promedio(notas);

    return 0;
}

int generar_aleatorio(int min,int max)
{
    int random=0;
    random=(rand()%(max-min+1))+min;
    return random;
}

void llenar_notas(int cantidad,vector<int>&notas)
{
    for (int i = 0; i <cantidad; i++)
    {
        int nota;
        nota=generar_aleatorio(30,100);
        notas.push_back(nota);
        cout<<notas[i]<<endl;
    }
    
}

void sacar_promedio(vector<int>&notas)
{
    int suma=0;
    double promedio;
    for (int i = 0; i < notas.size(); i++)
    {
        suma=suma+notas[i];
    }
    promedio=suma/notas.size();
    cout<<"la suma de las notas es: "<<suma<<endl;
    cout<<"el promedio es: "<<promedio<<endl;
}