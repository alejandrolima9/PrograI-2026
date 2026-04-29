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
void llenar_matriz(vector<vector<int>>& matriz, int filas, int columnas);
void mostrar_matriz(vector<vector<int>>& matriz, int filas, int columnas);
void multiplicar_matrices(vector<vector<int>>& matriz1, vector<vector<int>>& matriz2, vector<vector<int>>& resultado, int n, int m);

int main()
{
    srand(time(NULL));

    int n, m;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese M: ";
    cin >> m;

    vector<vector<int>> matriz1(n, vector<int>(m));
    vector<vector<int>> matriz2(m, vector<int>(n));
    vector<vector<int>> resultado(n, vector<int>(n, 0));

    llenar_matriz(matriz1, n, m);
    llenar_matriz(matriz2, m, n);

    cout << endl << "Matriz 1:" << endl;
    mostrar_matriz(matriz1, n, m);

    cout << endl << "Matriz 2:" << endl;
    mostrar_matriz(matriz2, m, n);

    multiplicar_matrices(matriz1, matriz2, resultado, n, m);

    cout << endl << "Matriz resultante:" << endl;
    mostrar_matriz(resultado, n, n);

    return 0;
}

int generar_aleatorio(int min,int max)
{
    int random = 0;
    random = (rand() % (max - min + 1)) + min;
    return random;
}

void llenar_matriz(vector<vector<int>>& matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = generar_aleatorio(1, 9);
        }
    }
}

void mostrar_matriz(vector<vector<int>>& matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << "   ";
        }
        cout << endl;
    }
}

void multiplicar_matrices(vector<vector<int>>& matriz1, vector<vector<int>>& matriz2, vector<vector<int>>& resultado, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}