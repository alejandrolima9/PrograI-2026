// Programacion I
// Estudiante: Alejandro Lima Iriarte
// Carnet: 9873980
// Carrera: Diseño Digital
// Fecha: 08/03/2026
// CI: 9873980

#include <iostream>
using namespace std;

float cambio_oficial(float cantidad,float oficial);
float cambio_paralelo(float cantidad,float paralelo);
int main(){
    system("cls");
    float cantidad;
    float oficial;
    float paralelo;
cout<<"ingrese su dinero en bs y los tipos de cambio: "<<endl;
do
{
    cout<<"dinero: ";
    cin>>cantidad;
} while (cantidad<=0);

cout<<"tipo de cambio oficial: ";
cin>>oficial;

do
{
    cout<<"tipo de cambio paralelo: ";
    cin>>paralelo;
} while (paralelo<=0);



cout<<"dinero en dolares: "<<endl;
cout<<"dolares con tipo de cambio oficial: "<<cambio_oficial(cantidad,oficial)<<" dolares"<<endl;
cout<<"dolares con tipo de cambio paralelo: "<<cambio_paralelo(cantidad,paralelo)<<" dolares";

return 0;
}

float cambio_oficial(float cantidad,float oficial){
    float dolares;
    dolares=cantidad*oficial;
    return dolares;
}

float cambio_paralelo(float cantidad,float paralelo){
    float dolares;
    dolares=cantidad*paralelo;
    return dolares;
}