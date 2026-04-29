// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int generar_aleatorio(int min,int max)
{
    return (rand()%(max-min+1))+min;
}

int main()
{
    srand(time(NULL));

    int n, a, b;
    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese A: ";
    cin >> a;
    cout << "Ingrese B: ";
    cin >> b;

    vector<vector<int>> m(n, vector<int>(n));

    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            m[i][j]=generar_aleatorio(a,b);

    cout<<"\nMatriz:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }

    int suma=0;
    for (int i=0;i<n;i++)
        suma+=m[i][n-1];

    long long producto=1;
    for (int j=0;j<n;j++)
        producto*=m[n-1][j];

    int mayor=m[0][0], fi=0, co=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (m[i][j]>mayor){
                mayor=m[i][j];
                fi=i; co=j;
            }

    double prom=0, suma2=0;
    int total=n*n;

    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            prom+=m[i][j];

    prom/=total;

    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            suma2+=pow(m[i][j]-prom,2);

    double desv=sqrt(suma2/total);

    cout<<"\nSuma ultima columna: "<<suma<<endl;
    cout<<"Producto ultima fila: "<<producto<<endl;
    cout<<"Mayor: "<<mayor<<" en ["<<fi<<"]["<<co<<"]"<<endl;
    cout<<"Desviacion estandar: "<<desv<<endl;

    return 0;
}