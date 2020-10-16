#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*----Libreria de validaciones y menues--*/
#include "utn.h"
#include "menu.h"
/*----libreria de estructuras y funciones---*/
#include "color.h"
#include "servicios.h"
#include "tipo.h"
#include "mascotas.h"


#define TAM_MASCOTA 3
#define TAM_COL 5
#define TAM_TIPO 5

//char getValidChar(char mensaje[],char mensajeError[],char minimoC,char maximoC);


int main()
{
    Color colores[TAM_COL]=
    {
        {5000,"NEGRO"},{5001,"BLANCO"},{5002,"GRIS"},{5003,"ROJO"},{5004,"AZUL"}
    };

    Tipo tipos[TAM_TIPO]=
    {
        {1000,"AVE"},
        {1001,"PERRO"},
        {1002,"GATO"},
        {1003,"ROEDOR"},
        {1004,"PEZ"}
    };

    eMascota mascotas[TAM_MASCOTA];

    int proximoId =0001;
    char respuesta;
    int flagAlta =0;

    respuesta='s';


    mascotas_init(mascotas,TAM_MASCOTA);

    do
    {
        switch(opcionMenuInicio())
        {
        case 1:
             // mascotas_alta(mascotas,proximoId,TAM_MASCOTA,tipos,TAM_TIPO,colores,TAM_COL);
           if( mascotas_alta(mascotas,proximoId,TAM_MASCOTA,tipos,TAM_TIPO,colores,TAM_COL)==0)
            {
                proximoId+=1;
            }
            if(proximoId >0)
            {
                flagAlta=1;
            }
            break;

        case 2:
            if(flagAlta != 1)
            {
                printf("\n\nError, debe existir al menos 1 usuario!!!\n\n");
            }
            else
            {
               /* employee_Modify(empleados,TAM,sectores,TAMSEC);*/
                // break;
            }
            break;

        case 3:
            if(flagAlta != 1)
            {
                printf("\n\nError, debe existir al menos 1 usuario!!!\n\n");
            }
            else
            {
               /* employee_Baja(empleados,TAM,sectores,TAMSEC);*/
            }
            break;

        case 4:
            if(flagAlta != 1)
            {
                printf("\n\n NO HAY EMPLEADOS QUE MOSTRAR!!!\n\n");
            }
            else
            {
               /* employee_Informes(empleados,TAM,sectores,TAMSEC);*/
            }
            break;

        case 5:

            respuesta = 'n';
            break;
        default:

            printf("\n\n Ingrese una opcion valida\n\n");
            break;
        }

        system("\n\n pause");
        system("cls");

    }
    while(respuesta=='s');


    return 0;
}


