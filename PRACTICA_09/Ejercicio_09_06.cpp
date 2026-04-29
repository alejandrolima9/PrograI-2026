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
void trasponer_matriz(vector<vector<int>>& matriz, vector<vector<int>>& transpuesta, int filas, int columnas);

int main()
{
    srand(time(NULL));

    int n, m;
    cout << "Ingrese N: ";
    cin >> n;
    cout << "Ingrese M: ";
    cin >> m;

    vector<vector<int>> matriz(n, vector<int>(m));
    vector<vector<int>> transpuesta(m, vector<int>(n));

    llenar_matriz(matriz, n, m);

    cout << endl << "Matriz original:" << endl;
    mostrar_matriz(matriz, n, m);

    trasponer_matriz(matriz, transpuesta, n, m);

    cout << endl << "Matriz transpuesta:" << endl;
    mostrar_matriz(transpuesta, m, n);

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
        for (int j = 0; j < columnas; j++)
            matriz[i][j] = generar_aleatorio(0, 9);
}

void mostrar_matriz(vector<vector<int>>& matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
}

void trasponer_matriz(vector<vector<int>>& matriz, vector<vector<int>>& transpuesta, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            transpuesta[j][i] = matriz[i][j];
}