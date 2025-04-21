#include <stdio.h>
#include <stdlib.h>

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct Compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
} typedef Compu;

// Declaracion de funciones
void CargarCaracteristicasCompu(Compu *computadoras, int cantidad_pc);
void listarPCs(Compu pcs[], int cantidad);


// Definicion
void CargarCaracteristicasCompu(Compu *computadoras, int cantidad_pc)
{
    int index_tipo = 0;
    for (int i = 0; i < cantidad_pc; i++)
    {
        computadoras[i].velocidad = 1 + rand() % 3;
        // a + rand()%(b-a + 1)
        computadoras[i].anio = 2015 + rand() % (2024 - 2015 + 1);
        computadoras[i].cantidad_nucleos = 1 + rand() % 8;
        index_tipo = rand() % 6;
        computadoras[i].tipo_cpu = tipos[index_tipo];
    }
}

void listarPCs(Compu pcs[], int cantidad)
{
    printf("****** Listado de computadoras ******\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("-PC Nro :%d\n", i + 1);
        MostrarCaracteristicasPc(pcs[i]);
    }
}
