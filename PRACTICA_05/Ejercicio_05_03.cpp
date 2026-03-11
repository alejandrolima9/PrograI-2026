// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>

using namespace std;

float calcular_salario(int horas,float tarifa);
float calcular_bonificacion(int horas,float tarifa);

int main()
{
    int horas;
    float tarifa;
    float salario;
    float bonificacion;

    cout<<"Ingrese las horas trabajadas: "<<endl;
    cin>>horas;

    cout<<"Ingrese la tarifa por hora: "<<endl;
    cin>>tarifa;

    salario=calcular_salario(horas,tarifa);
    bonificacion=calcular_bonificacion(horas,tarifa);

    cout<<"Salario del trabajador: "<<salario<<endl;

    if (bonificacion>0)
        cout<<"Salario de bonificacion por horas extra: "<<bonificacion<<endl;
    else
        cout<<"No tiene bonificacion"<<endl;

    return 0;
}

float calcular_salario(int horas,float tarifa){

    float salario;
    salario=horas*tarifa;
    return salario;
}

float calcular_bonificacion(int horas,float tarifa){

    float bonificacion=0;

    if (horas>8)
    {
        int horas_extra;
        horas_extra=horas-8;
        bonificacion=horas_extra*(tarifa*0.50);
    }

    return bonificacion;
}