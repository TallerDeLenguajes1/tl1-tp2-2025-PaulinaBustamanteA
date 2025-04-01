#include <stdio.h>
#include <stdlib.h>

#define N 20
int main()
{
    int i, semilla;
    double vt[N];
    printf("Ingrese una semilla para la generacion de numeros aleatorios: ");
    scanf("%d", &semilla);

    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%f   ", vt[i]);
    }
    printf("\n");
    return 0;
}
