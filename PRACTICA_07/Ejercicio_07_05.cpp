#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int generar_aleatorio(int min,int max);
void llenar_vector_1(int cantidad,vector<int>&vector_1);
void llenar_vector_2(int cantidad,vector<int>&vector_2);
void combinar_vectores(vector<int>&vector_1,vector<int>&vector_2,vector<int>&vector_combinado);

int main()
{
    system("chcp 65001");
    srand(time(NULL));
    system("cls");

    int cantidad;
    cout<<"ingrese la medida de sus vectores: "<<endl;
    cin>>cantidad;

    vector<int>vector_1;
    vector<int>vector_2;
    vector<int>vector_combinado;
    llenar_vector_1(cantidad,vector_1);
    llenar_vector_2(cantidad,vector_2);
    combinar_vectores(vector_1,vector_2,vector_combinado);
    
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

void combinar_vectores(vector<int>&vector_1,vector<int>&vector_2,vector<int>&vector_combinado)
{
    for (int i = 0; i < vector_1.size(); i++)
    {
        vector_combinado.push_back(vector_1[i]);
        vector_combinado.push_back(vector_2[i]);
    }
    for (int i = 0; i < vector_combinado.size(); i++)
    {
        cout<<vector_combinado[i]<<endl;
    }
}