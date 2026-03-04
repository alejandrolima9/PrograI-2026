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
    int numero;
    int mayor = 0;
    int menor = 1000;
    int suma = 0;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> n;

    cout <<endl<<"Numeros generados:"<<endl;

    for(int i = 0; i < n; i++) {
        numero = rand() % 1000 + 1;
        cout << numero << " ";

        if(numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }

        suma += numero;
    }

    double promedio = (double)suma / n;

    cout <<endl<< "Suma: " << suma<<endl;
    cout << "Numero mayor: " << mayor<<endl;
    cout << "Numero menor: " << menor<<endl;
    cout << "Promedio: " << promedio;

    return 0;
}
    