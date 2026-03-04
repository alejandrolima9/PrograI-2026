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
    int contadorPrimos = 0;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> n;

    cout <<endl<< "Numeros generados: "<<endl;

    for(int i = 0; i < n; i++) {

        int numero = rand() % 100 + 1;
        cout << numero << " ";

        bool verificarPrimo = true;

        if(numero <= 1) {
            verificarPrimo = false;
        } else {
            for(int i = 2; i < numero; i++) {
                if(numero % i == 0) {
                    verificarPrimo = false;
                    
                }
            }
        }

        if(verificarPrimo == true) {
            contadorPrimos++;
        }
    }

    cout << endl<<"Cantidad de numeros primos: " << contadorPrimos;

    return 0;
}
    