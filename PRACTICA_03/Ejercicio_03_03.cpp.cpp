// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980

// Carrera del estudiante: Diseño Digital

// Fecha creación: 3/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int numero = rand() % 10 + 1;
    int factorial = 1;

    cout << "Numero generado: " << numero << endl;

    for(int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es " << factorial << endl;

    return 0;
}
    