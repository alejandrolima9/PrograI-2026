#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int generar_aleatorio(int min,int max);
void llenar_vector_1(int cantidad,vector<int>&vector_1);
void llenar_vector_2(int cantidad,vector<int>&vector_2);
void multiplicar_vectores(vector<int>&vector_1,vector<int>&vector_2,vector<int>&vector_multiplicado);

int main()
{
    system("chcp 65001");
    srand(time(NULL));
    system("cls");

    vector<int>vector_1;
    vector<int>vector_2;
    vector<int>vector_multiplicado;
    int cantidad;
    cout<<"ingrese la medida de sus vectores: "<<endl;
    cin>>cantidad;
    llenar_vector_1(cantidad,vector_1);
    llenar_vector_2(cantidad,vector_2);
    multiplicar_vectores(vector_1,vector_2,vector_multiplicado);
    
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
    } 
}

void llenar_vector_2(int cantidad,vector<int>&vector_2)
{
    for (int i = 0; i <cantidad; i++)
    {
        int valor;
        valor=generar_aleatorio(1,100);
        vector_2.push_back(valor);
    } 
}

void multiplicar_vectores(vector<int>&vector_1,vector<int>&vector_2,vector<int>&vector_multiplicado)
{
    for (int i = 0; i < vector_1.size(); i++)
    {
        double multi;
        multi=vector_1[i]*vector_2[i];
        vector_multiplicado.push_back(multi);
        cout<<vector_1[i]<<" * "<<vector_2[i]<<" = "<<vector_multiplicado[i]<<endl;
    }
}