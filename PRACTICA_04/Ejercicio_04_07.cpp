// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

float calcular_distancia(float vel,float tiempo);

int main(){
    system("cls");

    float vel;
    float tiempo;
    cout<<"ingrese la velocidad constante y el tiempo: "<<endl;
    cin>>vel>>tiempo;
    cout<<"la distancia recorrida es: "<<calcular_distancia(vel,tiempo);
    
    return 0;
}

float calcular_distancia(float vel,float tiempo){

    float distancia;
    distancia=vel*tiempo;
    return distancia; 
}