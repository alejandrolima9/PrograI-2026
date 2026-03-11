// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

int suma_total(int num);

int main(){
    system("cls");

    int num;
    do
    {
        cout<<"ingrese un numero: "<<endl;
        cin>>num;
    } while (num<0);
    
    
    cout<<"la suma es: "<<suma_total(num);
    
    return 0;
}

int suma_total(int num){

    int suma=0;
    for (int i = 1; i <= num; i++)
    {
        suma+=i;
    }
    return suma;
}