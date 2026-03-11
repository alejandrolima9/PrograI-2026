// Programacion I
// Estudiante: Alejandro Lima Iriarte 
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

int contar_digitos(int numero);

int main(){
    system("cls");

    int numero;
    cout<<"ingrese un numero y se devolvera la cantidad de digitos: "<<endl;
    cin>>numero;
    cout<<"la cantidad de digitos es: "<<contar_digitos(numero);

    return 0;
}

int contar_digitos(int numero){

    int contador=0;
    while (numero>0)
    {
        numero=numero/10;
        contador++;
    }
    return contador;
}
