// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

int calcular_mayor(int num1, int num2, int num3);

int main(){
    system("cls");

int num1;
int num2;
int num3;
cout<<"ingrese 3 numeros enteros: "<<endl;
cout<<"numero 1: ";
cin>>num1;
cout<<"numero 2: ";
cin>>num2;
cout<<"numero 3: ";
cin>>num3;
cout<<"el mayor es: "<<calcular_mayor(num1,num2,num3);
}

int calcular_mayor(int num1, int num2, int num3){

    int mayor=num1;
    if (num2>mayor)
    {
        mayor=num2;
    }
    if (num3>mayor)
    {
        mayor=num3;
    }
    return mayor;     
}

