// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: Diseño Digital

// Fecha creación: 3/03/2026
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));

    int n;
    int pares = 0;

    cout << "Ingrese la cantidad de lanzamientos: "<<endl;
    cin >> n;

    cout << "Resultados del dado: "<<endl;

    for(int i = 0; i < n; i++) {
        int dado = rand() % 6 + 1; 
        cout << dado << " ";

        if(dado % 2 == 0) { 
            pares++;
        }
    }
    cout << "Frecuencia de caras pares: " << (double)pares / n << endl;

    return 0;
}

    