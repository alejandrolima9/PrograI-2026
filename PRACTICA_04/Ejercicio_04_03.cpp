// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
#include <cmath>
using namespace std;

float calcular_volumen(float radio,float altura);

int main(){
    system("cls");
  
float radio;
float altura;
cout<<"ingrese el radio y altura de su cilindro: "<<endl;
cin>>radio>>altura;
cout<<"el volumen de su cilindro es: "<<calcular_volumen(radio,altura);
    return 0;
}

float calcular_volumen(float radio,float altura){
    float volumen;
    const float pi=3.14159;
    volumen=pi*radio*radio*altura;

    return volumen;
}

