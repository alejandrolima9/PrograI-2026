// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>

using namespace std;

float CalcularPrecioTotal(float precio, float impuesto);

int main()
{
    float precio;
    float impuesto;

    cout<<"Ingrese el precio y el impuesto: ";
    cin>>precio;
    cin>>impuesto;

    if (impuesto==0)
    {
        int precio_uno;
        precio_uno=CalcularPrecioTotal(precio,0.13);
        cout << "Total con 13%: " << precio_uno<< endl;
    }
    else
    {
        float precio_dos=CalcularPrecioTotal(precio, impuesto);
        cout << "Total con impuesto: " << precio_dos << endl;
    }
    return 0;
}

float CalcularPrecioTotal(float precio, float impuesto) 
{
    return precio + (precio * impuesto);

}