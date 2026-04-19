// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>

using namespace std;

int cambiar_valores(int &valor_uno,int &valor_dos);

int main()
{
    
int valor_uno;
int valor_dos;

cout<<"ingrese 2 valores: "<<endl;
cin>>valor_uno>>valor_dos;
cout<<"antes: "<<endl<<valor_uno<<endl<<valor_dos<<endl<<"despues: ";
cambiar_valores(valor_uno,valor_dos);

    return 0;
}

int cambiar_valores(int &valor_uno,int &valor_dos)
{
    int tempo=valor_uno;
    valor_uno=valor_dos;
    valor_dos=tempo;
    cout<<endl<<valor_uno<<endl<<valor_dos;

    return valor_uno,valor_dos;
}