#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//para brindar primero hay que saludarnos
//para despedirnos primero hay que saludarnos
// antes de despedirnos pimero brindemos

char menu();

/** \brief Muestra un saludo por consola
 *
 * \return int retorna 0 si pudo saludar o 1 si ocurrio algun problema

 *
 */
int  saludar();

/** \brief muestra unh brindis por consola si recibe un 1 como parametro u otro mensaje
 *
 * \param saludo int entero valor que bloquea (0)o desbloquea el brindis (1)
 * \return int retorna 0 si pudo brindar sino 1;
 *
 */
int brindar(int saludo);


/** \brief mustra un rindis por consola si
 *
 * \param saludo int vale 1 si se saludo, sino vale 0
 * \param brindis int si vale 1 se brindo, sino muestra cero
 * \return ibnt 0 si pudo despedirse o 1 si hubo algun problema
 *
 */
int despedir (int saludo, int brindis);

int main()
{
    char confirma ='s';
    char salir ='n';
    //  char opcion;

    int flagSaludo=0;
    int flagBrindis=0;


    do
    {
        switch(menu())//admite mayus
        {
        case 'a':
            if(!saludar()) // ==0
            {
                flagSaludo=1;
            }
            break;
        case 'b':
            if(!brindar(flagSaludo))
            {
                flagBrindis=1;
            }
            break;
        case 'c':
            if( despedir(flagSaludo, flagBrindis)==0)//!despedir()
            {
                flagBrindis=0;
                flagSaludo=0;
            }


            break;
        case 'd':
            printf("SALIR \n");
            printf("Desea salir del programa? S/N \n");
            fflush(stdin);

            scanf("%c",&confirma);
            confirma = tolower(confirma);

            if(confirma != 'n')
            {
                salir= 's';

            }
            break;

        default:
            printf("Opcion Invalida!!!\n");
            break;
        }
        system("pause");

    }
    while (salir != 's');


    return 0;
}


char menu()
{
    char opcion;
    system("cls");
    printf("****Menu de Opciones *****\n");
    printf("a- Saludar\n");
    printf("b- Brindar\n");
    printf("c- Despedirse\n");
    printf("d- Salir\n");
    printf("Ingrese opcion: \n");
    fflush(stdin);
//VARIANTE menos OPTIMA    ///
    ///  scanf("%c",&opcion);
    opcion = tolower(getchar());
    return opcion;
}

int saludar ()
{
    int error =0;
    int cant;

    cant= printf("Hola que tal..\n");
    if(cant != 16)
    {
        error=1;
    }

    //isalpha()
    //isspace
    //isdigit()

    return error;
}

int brindar(int saludo)
{
    int error=0;

    if(saludo==1)//saludo ==1;
    {
        printf("Chin chin");
    }
    else
    {
        printf("Para brindar debemos saludarnos\n");
        error=1;
    }
    return error ;
}

int despedir (int saludo, int brindis)
{
    int error;
    if(!saludo)//saludo ==0
    {
        printf("Para despedirnos primero debemos saludarnos \n");
        error=1;
    }
    else if(brindis)//brindis==1
    {
        printf("Chau chau,nos vemos.. \n");
          error=0;
    }
    else
    {
        printf("Antes de despedirnos brindemos..\n");
          error=1;
    }
    return error;
}
