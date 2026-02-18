// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 16/02/2026
#include <iostream>
using namespace std;

int main()
{

cout<<"ingrese sus 3 notas: "<<endl;
float nota1;
float nota2;
float nota3;
float nota_final;
cin>>nota1>>nota2>>nota3;
nota_final=(nota1*0.30)+(nota2*0.60)+(nota3*0.10);

cout<<"su nota final es: "<<nota_final<<" sobre 100"<<endl;
    return 0;
 }