#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
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
