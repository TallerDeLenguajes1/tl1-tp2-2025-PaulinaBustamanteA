#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main() {
    int i, j;
    int mt[N][M];
    int *p = &mt[0][0]; // puntero al primer elemento de la matriz

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            *(p + i * M + j) = 1 + rand() % 100; // usar aritmética de punteros
            printf("%d   ", *(p + i * M + j));   // imprimir usando punteros
        }
        printf("\n");
    }

    return 0;
}
