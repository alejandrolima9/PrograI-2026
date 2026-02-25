// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: DISEÑO DIGITAL

// Fecha creación: 24/02/2026

#include <iostream>
using namespace std;

int main()
{
int numeros;
int suma=0;
int pares=0;
int impares=0;
int primos=0;

while (numeros!=0)
{
    do
    {
        cout<<"ingrese numeros entre 1 y 100, cuando ingrese 0 se mostraran los resultados"<<endl;
        cin>>numeros;
    } while (numeros<0||numeros>100);
        suma+=numeros;
        if (numeros%2==0)
        {
            pares+=numeros;
        }
        else
        {
            impares+=numeros;
        }
        int contador=0;
        {
            for (int i = 2; i < numeros; i++)
            {
                if (numeros % i == 0)
                {
                    contador++;
                }
            }
            if (contador==0)
            {
                primos += numeros;
            }
        }
}

    cout << "Suma: " << suma << endl;
    cout << "Suma pares: " << pares << endl;
    cout << "Suma impares: " << impares << endl;
    cout << "Suma primos: " << primos << endl;
    
    
    return 0;
}