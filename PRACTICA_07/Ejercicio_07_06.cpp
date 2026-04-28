// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int generar_aleatorio(int min,int max);
void llenar_vector_1(int cantidad,vector<int>&vector_1);
void llenar_vector_2(int cantidad,vector<int>&vector_2);
void sumar_vectores(vector<int>&vector_1,vector<int>&vector_2,vector<int>&vector_sumado);

int main()
{
    system("chcp 65001");
    srand(time(NULL));
    system("cls");

    int cantidad=5;
    cout<<"2 vectores con 5 numeros y su suma: "<<endl;

    vector<int>vector_1;
    vector<int>vector_2;
    vector<int>vector_sumado;
    llenar_vector_1(cantidad,vector_1);
    llenar_vector_2(cantidad,vector_2);
    sumar_vectores(vector_1,vector_2,vector_sumado);
    
    return 0;
}

int generar_aleatorio(int min,int max)
{
    int random=0;
    random=(rand()%(max-min+1))+min;
    return random;
}

void llenar_vector_1(int cantidad,vector<int>&vector_1)
{
    for (int i = 0; i <cantidad; i++)
    {
        int valor;
        valor=generar_aleatorio(1,100);
        vector_1.push_back(valor);
        cout<<vector_1[i]<<endl;
    }
    cout<<endl;
}

void llenar_vector_2(int cantidad,vector<int>&vector_2)
{
    for (int i = 0; i <cantidad; i++)
    {
        int valor;
        valor=generar_aleatorio(1,100);
        vector_2.push_back(valor);
        cout<<vector_2[i]<<endl;
    } 
    cout<<endl;
}

void sumar_vectores(vector<int>&vector_1,vector<int>&vector_2,vector<int>&vector_sumado)
{
    for (int i = 0; i < vector_1.size(); i++)
    {
        int valor_suma;
        valor_suma=vector_1[i]+vector_2[i];
        vector_sumado.push_back(valor_suma);
    }
    for (int i = 0; i < vector_sumado.size(); i++)
    {
        cout<<vector_sumado[i]<<endl;
    }
}