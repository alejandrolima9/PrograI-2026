// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 16/02/2026
#include <iostream>
using namespace std;

int main()
{
cout<<"ingrese un mes del anio del 1-12: "<<endl;
int mes;
cin>>mes;
switch (mes)
{
case 1:
    cout<<"enero";
    break;
case 2:
    cout<<"febrero";
    break;
case 3:
    cout<<"marzo";
    break;
case 4:
    cout<<"abril";
    break;
case 5:
    cout<<"mayo";
    break;
case 6:
    cout<<"junio";
    break;
case 7:
    cout<<"julio";
    break;
case 8:
    cout<<"agosto";
    break;
case 9:
    cout<<"septiembre";
    break;
case 10:
    cout<<"octubre";
    break;
case 11:
    cout<<"noviembre";
    break;
case 12:
    cout<<"dicimebre";
    break;
default:
    cout<<"no ingreso un numero valido";
    break;
}
    return 0;
 }