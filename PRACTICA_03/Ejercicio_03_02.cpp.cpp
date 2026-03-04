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

    int n;
    int caras = 0, cruz = 0;

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    cout << "Resultados:"<<endl;

    for(int i = 0; i < n; i++) {
        int moneda = rand() % 2;

        if(moneda == 0) {
            cout << "Cara ";
            caras++;
        } else {
            cout << "Cruz ";
            cruz++;
        }
    }

    double porcentajeCara = (double)caras / n * 100;
    double porcentajeCruz = (double)cruz / n * 100;

    cout <<endl<< "Porcentaje de caras: " << porcentajeCara << "%"<<endl;
    cout << "Porcentaje de cruz: " << porcentajeCruz << "%"<<endl;

    return 0;
}
    