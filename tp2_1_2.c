#include <stdio.h>
#include <stdlib.h>

#define N 20

int main()
{
    int i, semilla;
    double vt[N];
    printf("Ingrese una semilla para la generacion de numeros aleatorios: ");
    scanf("%d", &semilla);

    // Usamos aritmética de punteros para acceder al arreglo
    for (i = 0; i < N; i++)
    {
        *(vt + i) = 1 + rand() % 100; // Aritmética de punteros en lugar de vt[i]
        printf("%f   ", *(vt + i));   // Acceso con punteros
    }
    printf("\n");

    return 0;
}
