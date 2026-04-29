// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <vector>

using namespace std;

void generar_matriz(int n);

int main()
{
    int n;
    cout<<"ingrese el tamaño de la amtriz: "<<endl;
    cin>>n;
    generar_matriz(n);
    return 0;
}

void generar_matriz(int n)
{
    int contador=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            contador+=1;
            cout<<contador<<"   ";
        }
        contador=contador-(n/2)-1;
        cout<<endl;  
    }
}