#include <stdio.h>
#include <stdlib.h>



///--IMAGEN 04 -matrices
#define TAM
#define LEN 20

void cargarNombres(char vec[][20],int sizeNombres);int main()
{
    char nombres[TAM][LEN];
    for(int i=0; i<TAM;i++)
    {
        printf("Ingrese un nombre: ");
        fflush(stdin);
        scanf("%[^\n]",nombres[i]);
    }

    for(int i=0;i<TAM;i++)
    {
        printf("%s\n",nombres[i]);
    }
    return 0;
}

void cargarNombres(char vec[][20],int sizeNombres)
{
    for()
}
