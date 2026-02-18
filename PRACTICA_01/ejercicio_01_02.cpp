// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 16/02/2026
#include <iostream>
using namespace std;

int main()
{
cout<<"ingrese el precio de su producto y el programa le dara el precio final (con IVA)"<<endl;
int precio;
cin>>precio;
int precio_final;
precio_final=(precio*0.13)+precio;
cout<<precio_final;
    return 0;
 }