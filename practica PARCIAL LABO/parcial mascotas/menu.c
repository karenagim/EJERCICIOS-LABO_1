#include "menu.h"


int opcionMenuInicio()
{
    int opcion;
    printf("-------------------------\n\n");
    printf("    MENU DE OPCIONES    \n");
    printf("-------------------------\n\n");
    printf("[1]- ALTA MASCOTA\n");
    printf("[2]- MODIFICAR MASCOTA\n");
    printf("[3]- BAJA MASCOTA\n");
    printf("[4]- LISTAR MASCOTAS\n");
    printf("[5]- LISTAR TIPOS\n");
    printf("[6]- LISTAR COLORES\n");
    printf("[7]- LISTAR SERVICIOS\n");
    printf("[8]- ALTA TRABAJO\n");
    printf("[9]- LISTAR TRABAJOS\n");
    printf("[10]- SALIR\n\n");

    opcion=getValidInt("\n\nElija una opcion: ","ERROR,ingrese una opcion valida\n", 1, 10);

    return opcion;
}
