// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>

using namespace std;

void modificar_valores(int valor,int &ref);

int main()
{
    int valor_val;
    int valor_ref;
    cout<<"ingrese 2 valores: "<<endl;
    cin>>valor_val>>valor_ref;
    cout<<"antes: "<<endl<<valor_val<<endl<<valor_ref;
    modificar_valores(valor_val,valor_ref);
    return 0;
}

void modificar_valores(int valor,int &ref)
{
    valor=valor*2;
    ref=ref+10;
    cout<<endl<<"despues: "<<endl<<valor<<endl<<ref;
}