#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id;
char descripcion[20];
}eDeporte;


int main()
{
    char seguir ='s';
    char confirma;
    int rta;
    int proximoLegajo =20000;
    ePersona lista[TAM];
    eDeporte deportes[TAM_D]=
    {
        {1000,"No practica"};
        {1001,"Bicicleta"};
        {1002,"Surf"};
        {1003,"Snowboard"};
        {1004,"Parapente"};
        {1005,"Buceo"};

        }
    }
    return 0;
}


void mostrarDeportes (eDeporte sport[]);
{
    printf(" %d  %20s   \n",sport.id,sport.descripcion)
}
int mostrarDeportes(eDeporte sport[],int tam)
{
    int error =1;
    int error =1;

    if(sports !=NULL && tam>0)
    {
        printf("*******listado deportes *******");
        printf("-------------------------------\n");
        printf("    ID      DESCRIPCION \n");
        for(int i=0;i<tam;i++)
        {
            mostrarDeporte(sport[i])
        }
        printf("\n\n");
        error=0;
    }
    return error;
}
