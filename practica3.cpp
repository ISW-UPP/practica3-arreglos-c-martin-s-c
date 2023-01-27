// practica3.1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

double promedioDeArreglo(int arreglo[], int longitudDeArreglo);

int main()
{
    int n;
    int arreglo[10];
    int temporal;

    for (int i = 0; i < 10; i++)
    {
        cout << "ingrese los valores" << "\n";
        cin >> arreglo [i] ;
    }

    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    for (int x = 0; x < longitud / 2; x++) {
        
        temporal = arreglo[x];
        arreglo[x] = arreglo[longitud - x - 1];
        arreglo[longitud - x - 1] = temporal;
    }
    
    printf("\nImprimiendo arreglo DESPUÉS de invertir\n");
    for (int i = 0; i < longitud; i++) {
        printf("%d,", arreglo[i]);
    }

    int longitudDeArreglo = sizeof(arreglo) / sizeof(arreglo[0]);

    double promedio = promedioDeArreglo(arreglo, longitudDeArreglo);

    cout << "\n" << "El promedio es " + to_string(promedio);
    
    for (int j = 0; j = longitudDeArreglo ; j++)
    {
        cout << j;
    }



}

double promedioDeArreglo(int arreglo[], int longitudDeArreglo) {
   
    double sumatoria = 0;
    for (int x = 0; x < longitudDeArreglo; x++) {
        sumatoria += arreglo[x];
    }
    double promedio = sumatoria / longitudDeArreglo;
    return promedio;
}
