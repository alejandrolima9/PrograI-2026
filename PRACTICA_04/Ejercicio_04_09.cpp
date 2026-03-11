// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

float calcular_promedio(float nota1,float nota2);

int main(){
    system("cls");

    float nota1;
    float nota2;
    cout<<"ingrese sus 2 notas: "<<endl;
    cin>>nota1>>nota2;
    cout<<"su promedio es: "<<calcular_promedio(nota1,nota2);
    return 0;
}

float calcular_promedio(float nota1,float nota2){

    float promedio;
    promedio=nota1+nota2/100;
    return promedio;
}

