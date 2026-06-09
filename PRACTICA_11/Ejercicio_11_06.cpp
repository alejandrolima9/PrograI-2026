// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 15/05/2026

#include <iostream>
#include <vector>

using namespace std;

bool son_iguales_recursivo(const vector<int>& v1, const vector<int>& v2, int tamano);

int main() 
{
    vector<int> vector1 = {3, 6, 8, 3, 9};
    vector<int> vector2 = {3, 6, 8, 3, 9};
    
    
    if (vector1.size() != vector2.size()) {
        cout << "Los vectores NO son iguales (tienen diferente tamano)." << endl;
    } else {
        int tamano = vector1.size();
        
        if (son_iguales_recursivo(vector1, vector2, tamano - 1)) {
            cout << "Los vectores SON iguales." << endl;
        } else {
            cout << "Los vectores NO son iguales." << endl;
        }
    }
    
    return 0;
}

bool son_iguales_recursivo(const vector<int>& v1, const vector<int>& v2, int tamano)
{
    if (tamano == 0) {
        return v1[0] == v2[0];
    }
    if (v1[tamano] != v2[tamano]) {
        return false;
    }
    return son_iguales_recursivo(v1, v2, tamano - 1);
}