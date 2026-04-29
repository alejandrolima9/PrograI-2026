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
void llenar_vector(int cantidad,vector<int>&notas);
void separar_notas(vector<int>notas);

int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(NULL));

    int cantidad;
    cout<<"ingrese cuantas notas va registrar: ";
    cin>>cantidad;
    vector<int>notas;
    llenar_vector(cantidad,notas);
    separar_notas(notas);
   
    return 0;
}

int generar_aleatorio(int min,int max)
{
    int random=0;
    random=(rand()%(max-min+1))+min;
    return random;
}

void llenar_vector(int cantidad,vector<int>&notas)
{
    for (int i = 0; i < cantidad; i++)
    {
        int nota=generar_aleatorio(0,100);
        notas.push_back(nota);
        cout<<notas[i]<<"  ";
    } 
    cout<<endl;
}

void separar_notas(vector<int>notas)
{
    double reprobado=0;
    double regular=0;
    double bueno=0;
    double excelente=0;

    for (int i = 0; i < notas.size(); i++)
    {
        if (notas[i]>=90)
        {
            excelente++;
        }
        else if (notas[i]>=80&&notas[i]<90)
        {
            bueno++;
        }
        else if (notas[i]>=60&&notas[i]<80)
        {
            regular++;
        }
        else
        {
            reprobado++;
        } 
    }
    int total = notas.size();
    cout<<"excelente: "<<(excelente*100.00)/total<<" %"<<endl;
    cout<<"bueno: "<<(bueno*100.00)/total<<" %"<<endl;
    cout<<"regular: "<<(regular*100.00)/total<<" %"<<endl;
    cout<<"reprobado: "<<(reprobado*100.00)/total<<" %"<<endl;
}
