#include <stdio.h>
#include <stdlib.h>
/*----Libreria de validaciones y menues--*/
#include "utn.h"
#include "menu.h"
/*----libreria de estructuras y funciones---*/
#include "color.h"
#include "servicios.h"
#include "tipo.h"
#include "mascotas.h"


void mascotas_init(eMascota lista[], int tam_list)
{
    if(lista != NULL && tam_list >0)
    {
        for(int i=0;i<tam_list;i++)
        {
            lista[i].isEmpty=1;
        }
    }
}

void mascotas_hardcodeo(eMascotas lista[],int tam_list)
{
    int ids[6][]={100,101,102,103,104};
    char nombres[6][21]={"Tomy","Luna","Riku","Jessy","Cotton","Kai"};
    int tipos[6][]={1001,1002,1000,1003,1003,1004};
    int colores[6][]={5000,5002,5001,5003,5003,5004};
    int edades[6][]={5,14,2,4,4,8};
}

void mascotas_mostrarUno(eMascota mascota, Tipo tipos[],int tamTipos,Color colores[],int tamCol)
{
   char descripcionTipo[21];
   char descripcionColor[21];

    tipo_PrintName(descripcionTipo,mascota.idTipo,tipos,tamTipos);
    color_PrintName(descripcionColor,mascota.idColor,colores,tamCol);
    printf("\n|%1d  | %-5s | %4d  |  %-8s| %4d  | %-5s | %2d |\n",
                                                               mascota.id,
                                                               mascota.nombre,
                                                               mascota.idTipo,
                                                               descripcionTipo,
                                                               mascota.idColor,
                                                               descripcionColor,
                                                               mascota.edad);

}

void mascotas_mostrarUnoCampos(eMascota mascota, Tipo tipos[],int tamTipos,Color colores[],int tamCol)
{
    printf("-----------------------------------------------------------\n");
    printf(" ID  NOMBRE   ID_TIPO   TIPO    ID_COLOR  COLOR EDAD\n");
    printf("-----------------------------------------------------------\n");
    mascotas_mostrarUno(mascota,tipos,tamTipos,colores,tamCol);
}

int buscar_EspacioLibre(eMascota lista[], int tam_list)
{
    int espacioDisponible= -1;
    if(lista !=NULL && tam_list>0)
    {
        for(int i=0;i<tam_list;i++)
        {
            if(lista[i].isEmpty==1)
            {
                espacioDisponible=i;
            }
        }
    }
    return espacioDisponible;
}

int mascotas_add( eMascota lista[],int tam, int idAux, char nombreAux[],int idTipoAux,int idColorAux,int edadAux)
{
    int isOk= -1;
    int lugarDisponible = buscar_EspacioLibre(lista,tam);

    if(lista != NULL && tam >0 && lugarDisponible!= -1)
    {
        lista[lugarDisponible].id = idAux;
        strcpy( lista[lugarDisponible].nombre,nombreAux);
        lista[lugarDisponible].idTipo = idTipoAux;
        lista[lugarDisponible].idColor = idColorAux;
        lista[lugarDisponible].edad = edadAux;
        lista[lugarDisponible].isEmpty = 0;
        isOk=0;
    }
    return isOk;
}



int mascotas_alta(eMascota lista[],int idAutoincremental,int tam, Tipo tipos[], int tamTipos,Color colores[],int tamCol)
{
    eMascota auxMascota;
    int locacionDisponible= buscar_EspacioLibre(lista,tam);
    int altaExitosa=-1;
    if(locacionDisponible!= -1 && mascotas_add(lista,tam,idAutoincremental,auxMascota.nombre,auxMascota.idTipo,auxMascota.idColor,auxMascota.edad)==0)
    {
        system("cls");
//        menuAlta();
        auxMascota.id = idAutoincremental;
        getValidStringLimitada("Ingrese nombre de la mascota \n\n", "ERROR,EL NOMBRE SOLO DEBE CONTENER LETRAS\n",auxMascota.nombre,21);
        auxMascota.idTipo= getValidInt("Ingrese TIPO de la mascota\n","ERROR, INGRESE UN TIPO VALIDO ENTRE 1000-1004",1000,1004);
        auxMascota.idColor= getValidInt("Ingrese COLOR de la mascota\n","ERROR, INGRESE UN COLOR VALIDO ENTRE 1000-1004",5000,5004);
        auxMascota.edad=getValidInt("ingrese EDAD de la mascota\n","ERROR, REINGRESE UNA EDAD VALIDA\n",1,50);
        auxMascota.isEmpty=0;

         mascotas_mostrarUnoCampos( auxMascota,tipos,tamTipos,colores,tamCol);
        lista[locacionDisponible]=auxMascota;
        mascotas_mostrarUnoCampos( lista[locacionDisponible],tipos,tamTipos,colores,tamCol);
        printf("\n\n LA MASCOTA FUE DE DADA DE ALTA EXITOSAMENTE \n");

        altaExitosa=0;
    }
    else
    {
        printf("SISTEMA COMPLETO !!!\n\n");
    }
    return altaExitosa;
}

