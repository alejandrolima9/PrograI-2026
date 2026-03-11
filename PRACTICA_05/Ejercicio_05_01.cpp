// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
#include <cstdlib>
#include <ctime>

int generar_precio(int min,int max);
float calcular_iva(int precio);

using namespace std;
int main()
{
    srand(time(NULL));
    int min=20;
    int max=50;
    int productos;
    int precio;
    int suma=0;
    int descuento;
    float precio_final;
    float suma_iva=0;

    cout<<"ingrese la cantidad de productos: "<<endl;
    cin>>productos;
    for (int i = 1; i <= productos; i++)
    {
        precio=generar_precio(min,max);
        suma_iva+=calcular_iva(precio);
        suma+=precio;
        precio_final=suma+suma_iva;
        
    }
    if (precio_final>500)
    {
        precio_final=precio_final*0.95;
        cout<<"hay un 5% de descuento"<<endl;
    }
        cout<<"el monto final es: "<<suma<<endl;
        cout<<"la suma del iva es: "<<suma_iva<<endl;
        cout<<"el precio final con iva incluido es: "<<precio_final;
    
    return 0;
}

int generar_precio(int min,int max){

    int precio_random;
    precio_random=(rand()%(max-min+1)+min);
    return precio_random;
}

float calcular_iva(int precio){

    float iva;
    iva=precio*0.13;
    return iva;
}


