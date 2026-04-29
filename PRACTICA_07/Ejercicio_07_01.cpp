// Materia: Programación I, Paralelo 4

// Autor: Alejandro Lima Iriarte

// Carnet: 9873980.

// Carrera del estudiante: Diseño Digital.

// Fecha creación: 27/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

double generar_aleatorio(double min,double max,int decimal);
double generar_aleatorio_dos(double min,double max,int decimal);
vector<double> voltajes();
vector<double> temperaturas();
vector<char> alfanumericos();
vector<int> anios();
vector<double> velocidades();
vector<double> distancias();
void MenuOpciones();

int main()
{
    srand(time(NULL));
    system("chcp 65001");

    MenuOpciones();
    
    return 0;
}

double generar_aleatorio(double min,double max,int decimal)
{
    double aleatorio;
    aleatorio=(rand()%(int)(max-min+1)+(int)min)/(double)decimal;
    return aleatorio;
}

double generar_aleatorio_dos(double min,double max)
{
    double aleatorio;
    aleatorio=(rand()%(int)(max-min+1)+(int)min);
    return aleatorio;
}

vector<double> voltajes()
{
    vector <double> vol;
    for (int i = 0; i <100; i++)
    {
        
        vol.push_back(generar_aleatorio(2000,22000,100));
        cout<<i+1<<". "<<vol[i]<<" V"<<endl;
    }
    cout<<endl;
}

vector<double> temperaturas()
{
    vector<double> tem;
    for (int i = 0; i <50; i++)
    {
        tem.push_back(generar_aleatorio(0,10000,100));
        cout<<i+1<<". "<<tem[i]<<"°"<<endl;
    }
    cout<<endl;
}

vector<char> alfanumericos()
{
    vector<char>letras;
    for (int i = 0; i <30; i++)
    {
        int mayus_minus;
        mayus_minus=generar_aleatorio_dos(1,2);
        if (mayus_minus==1)
        {
            letras.push_back((char)generar_aleatorio_dos(65,90));
            cout<<i+1<<". "<<letras[i]<<endl;
        }
        else
        {
            letras.push_back((char)generar_aleatorio_dos(97,122));
            cout<<i+1<<". "<<letras[i]<<endl;
        }
        
    }
    cout<<endl;
}

vector<int> anios()
{
    vector<int>a;
    for (int i = 0; i <100; i++)
    {  
        a.push_back(generar_aleatorio_dos(1990,2025));
        cout<<i+1<<". "<<a[i]<<endl;
    }
    cout<<endl;
}

vector<double> velocidades()
{
    for (int i = 0; i <32; i++)
    {
        double tem=generar_aleatorio(0,10000,100);
        cout<<i+1<<". "<<tem<<" V"<<endl;
    }
    cout<<endl;
}

vector<double> distancias()
{
    for (int i = 0; i <1000; i++)
    {
        double tem=generar_aleatorio(100,100000,100);
        cout<<i+1<<". "<<tem<<" m"<<endl;
    }
    cout<<endl;
}

void MenuOpciones()
{
    int opcion = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "1. 100 voltajes" << endl;
        cout << "2. 50 temperaturas" << endl;
        cout << "3. 30 caracteres" << endl;
        cout << "4. 100 años" << endl;
        cout << "5. 32 velocidades" << endl;
        cout << "6. 1000 distancias" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione la opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                cout << "Ingreso a 100 voltajes" << endl;
                voltajes();
                system("pause");
                break;
            case 2:
                cout << "Ingreso a 50 temperaturas" << endl;
                temperaturas();
                system("pause");
                break;
            case 3:
                cout << "Ingreso a 30 caracteres" << endl;
                alfanumericos();
                system("pause");
                break;
            case 4:
                cout << "Ingreso a 100 años" << endl;
                anios();
                system("pause");
                break;
            case 5:
                cout << "Ingreso a 32 velocidades" << endl;
                velocidades();
                system("pause");
                break;
            case 6:
                cout << "Ingreso a 1000 distancias" << endl;
                distancias();
                system("pause");
                break;
            default:
                if (opcion != 0)
                {
                    cout << "Debe ingresar una opcion valida." << endl;
                    system("pause");
                }
                break;
        }
    } while (opcion != 0);
    system("cls");
    cout << "SE HA SALIDO DEL MENU" << endl;
}