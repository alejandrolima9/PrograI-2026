// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <vector>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int generar_aleatorio(int min,int max);

int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(NULL));

    int cantidad;
    int nom=0;
    int ape_uno=0;
    int ape_dos=0;
    int edad_random=0;
    cout<<"ingrese cuantas personas quiere generar: ";
    cin>>cantidad;
    vector<string>estudiantes;
    vector<string>nombres= {"Alejandro","Luis","Pedro","Jorge","Mauricio","Maura","Belen","Sandra","Ana","Sofia"};
    vector<string>apellidos={"Lima","Ortiz","Guisbert","Iriarte","Eguivar","Castillo","Villa","Azuga","Reynolds","Rios"};
    vector<int>edad={15,67,43,23,89,10,30,55,35,18};
    for (int i = 0; i < cantidad; i++)
    {
        
        nom=generar_aleatorio(0,9);
        
       
        ape_uno=generar_aleatorio(0,9);
        
        
        ape_dos=generar_aleatorio(0,9);
        

        edad_random=generar_aleatorio(0,9);

        cout<<nombres[nom]<<"   "<<apellidos[ape_uno]<<"    "<<apellidos[ape_dos]<<"    "<<"-   edad: "<<edad[edad_random]<<endl;
    }
    return 0;
}

int generar_aleatorio(int min,int max)
{
    int random=0;
    random=(rand()%(max-min+1))+min;
    return random;
}
