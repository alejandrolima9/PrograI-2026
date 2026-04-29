// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int generar_aleatorio(int min,int max);
void llenar_matriz(vector<vector<int>>& matriz, int n);
void cambiar_filas(vector<vector<int>>& matriz, int n);
void mostrar_matriz(const vector<vector<int>>& matriz, int n);

int main()
{
    srand(time(NULL));
    system("chcp 65001");

    int n;

    cout << "Ingrese el orden de la matriz: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    llenar_matriz(matriz, n);

    cout << endl << "Matriz original:" << endl;
    mostrar_matriz(matriz, n);

    cambiar_filas(matriz, n);

    cout << endl << "Matriz con la fila 1 cambiada por la fila " << n << ":" << endl;
    mostrar_matriz(matriz, n);

    return 0;
}

int generar_aleatorio(int min,int max)
{
    int random=0;
    random=(rand()%(max-min+1))+min;
    return random;
}

void llenar_matriz(vector<vector<int>>& matriz, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = generar_aleatorio(0, 9);
        }
    }
}

void cambiar_filas(vector<vector<int>>& matriz, int n)
{
    for (int j = 0; j < n; j++)
    {
        int aux = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = aux;
    }
}

void mostrar_matriz(const vector<vector<int>>& matriz, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}