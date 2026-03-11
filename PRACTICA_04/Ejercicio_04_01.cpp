// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

float calcular_area(float base,float altura);

int main(){
    system("cls");
    float base;
    float altura;
cout<<"ingrese la base y la altura de su triangulo: "<<endl;
cout<<"base: ";
cin>>base;
cout<<"altura: ";
cin>>altura;
cout<<"el area del triangulo es: "<<calcular_area(base,altura);
    return 0;
}

float calcular_area(float base,float altura){
    float area;
area=(base*altura)/2;
return area;
}