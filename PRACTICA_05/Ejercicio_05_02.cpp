// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
#include <cstdlib>
#include <ctime>

int generar_precio(int min,int max);
float calcular_comision(int total);
int generar_antiguedad(int min,int max);

using namespace std;

int main()
{
    srand(time(NULL));

    int min=1;
    int max=50;

    int vendedoras;
    int precio;
    int total_ventas;
    int antiguedad;
    int sueldo_basico=3300;
    float comision;
    float sueldo_total;

    cout<<"Ingrese la cantidad de vendedoras: "<<endl;
    cin>>vendedoras;

    for (int i = 1; i <= vendedoras; i++)
    {
        cout<<endl<<"Vendedora "<<i<<endl<<endl;

        antiguedad=generar_antiguedad(1,1000);
        total_ventas=0;

        for (int j = 1; j <= 10; j++)
        {
            precio=generar_precio(min,max);
            total_ventas+=precio;
        }

        comision=calcular_comision(total_ventas);
        sueldo_total=sueldo_basico+comision+antiguedad;

        cout<<"Antiguedad: "<<antiguedad<<" Bs."<<endl;
        cout<<"Total vendido: "<<total_ventas<<endl;
        cout<<"Comision: "<<comision<<endl;
        cout<<"Sueldo total: "<<sueldo_total<<endl;
    }

    return 0;
}

int generar_precio(int min,int max){
    int precio_random;
    precio_random=(rand()%(max-min+1)+min);
    return precio_random;
}

float calcular_comision(int total){
    float comision;
    comision=total*0.10;
    return comision;
}

int generar_antiguedad(int min,int max){
    int antiguedad;
    antiguedad=(rand()%(max-min+1)+min);
    return antiguedad;
}

