#include <stdio.h>
#include <stdlib.h>

int main()
{
    int listaNumeros[5];
    int acumulador=0;

    for( int i=0; i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&listaNumeros[i]);
    }

    for( int i=0; i<5;i++)
    {
        printf("%d-", listaNumeros[i]);
    }

    //sumar todos los numeros

    for( int i=0; i<5;i++)
    {
        acumulador+=listaNumeros[i];
    }
    printf("El acumulado es : %d",acumulador);
    return 0;
}
