// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 16/02/2026
#include <iostream>
using namespace std;

int main()
{
cout<<"ingrese 3 numeros: "<<endl;
int num1;
int num2;
int num3;
cin>>num1>>num2>>num3;
cout<<"ingrese un 4to numero"<<endl;
int cuarto;
cin>>cuarto;
if (cuarto==num1||cuarto==num2||cuarto==num3)
{
    cout<<"el cuarto numero coincide con un numero ingresado"<<endl;
}
else{
    cout<<"el cuarto numero no coincide con ningun numero ingresado";
}
    return 0;
 }