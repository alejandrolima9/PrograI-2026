// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>

using namespace std;

void calcular_tiempo(int segundos_totales,int &horas,int &minutos,int &segundos);

int main()
{
    int segundos_totales;
    int horas;
    int minutos;
    int segundos;
    cout<<"ingrese el total de segundos: ";
    cin>>segundos_totales;

    calcular_tiempo(segundos_totales,horas,minutos,segundos);

    cout<<"horas: "<<horas<<endl;
    cout<<"minutos: "<<minutos<<endl;
    cout<<"segundos: "<<segundos;

    return 0;
}

void calcular_tiempo(int segundos_totales,int &horas,int &minutos,int &segundos)
{
    horas=segundos_totales/3600;
    segundos_totales=segundos_totales%3600;
    minutos=segundos_totales/60;
    segundos=segundos_totales%60;
}