#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "mascotas.h"
#include "utn.h"


#define TAM_MASCOTA 3

//char getValidChar(char mensaje[],char mensajeError[],char minimoC,char maximoC);


int main()
{
    eMascota mascotas[TAM_MASCOTA];

    char salir ='n';

    mascotas_init(mascotas,TAM_MASCOTA);
    do
    {
        switch(menuInicio())
        {
        case 'A' :
            printf("ALTA\n");

            break;
            /*
                case 'B' :
                case 'C' :
                case 'D' :
                case 'E' :
                case 'F' :
                case 'G' :
                case 'H' :
                case 'I' :
            */
        case 'I' :
        salir= 's';
        }
    }while( salir != 's');



    return 0;
}

/*
char getValidChar(char mensaje[],char mensajeError[],char minimoC,char maximoC)
{

}*/
/*
char menuInicio()
{
    char opcion;

    printf("    MENU DE OPCIONES    \n");
    printf("-------------------------\n\n");
    printf("[A]- ALTA MASCOTA\n");
    printf("[B]- MODIFICAR MASCOTA\n");
    printf("[C]- BAJA MASCOTA\n");
    printf("[D]- LISTAR MASCOTAS\n");
    printf("[E]- LISTAR TIPOS\n");
    printf("[F]- LISTAR COLORES\n");
    printf("[G]- LISTAR SERVICIOS\n");
    printf("[H]- ALTA TRABAJO\n");
    printf("[I]- LISTAR TRABAJOS\n");
    printf("[J]- SALIR\n\n");


    opcion= toupper(getChar("Elija una opcion\n"));
    fflush(stdin);
    return opcion;
}*/
