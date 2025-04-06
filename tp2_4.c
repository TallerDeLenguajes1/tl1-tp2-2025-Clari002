#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
};

//funciones
void cargarDatos(struct compu pc[], int cantidad);
void listarPCs(struct compu pcs[], int cantidad);

int main()
{
    struct compu pc[N];
    cargarDatos(pc, N);
    listarPCs(pc,N);

    return 0;
}

void cargarDatos(struct compu pc[], int cantidad)
{
    char *tipos[6] = {"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    for (int i = 0; i < cantidad; i++)
    {
        pc[i].velocidad = 1+rand()%3;
        pc[i].anio=2015 + rand()%10;
        pc[i].cantidad_nucleos=1+rand()%8;
        pc[i].tipo_cpu=tipos[rand()%6];
    }
    
}

void listarPCs(struct compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("------------PC %d------------- \n", i+1);
        printf("Velocidad: %d \n", pcs[i].velocidad);
        printf("Anio: %d\n", pcs[i].anio);
        printf("Cantidad de nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("Tipo de CPU: %s\n\n", pcs[i].tipo_cpu);
    }
    
}