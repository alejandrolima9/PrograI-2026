// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

int calcular_paridad(int num);

int main(){
    system("cls");

    int num;
    cout<<"ingrese un numero: "<<endl;
    cin>>num;
    cout<<calcular_paridad(num);
    
    return 0;
}

int calcular_paridad(int num){

    bool paridad;
    if (num%2==0)
    {
        paridad=true;
        cout<<"true ";
    }
    else
    {
        paridad=false;
        cout<<"false ";
    }
    return paridad;
}

