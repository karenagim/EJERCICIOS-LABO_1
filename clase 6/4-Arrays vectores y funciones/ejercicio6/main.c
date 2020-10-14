#include <stdio.h>
#include <stdlib.h>
#define TAM 5

///EL MAYOR NUMERO Y SU POSICION/ES EN CASO DE QUE ESTE REPETIDO
int main()
{
    int numeros[TAM];
    int maxNum;
    int indiceMayor;

     for(int i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&numeros[i]);
    }
    //Decir cual es el mayor y en que posicion esta
     for(int i=0; i<TAM; i++)
    {
        if(i==0 || numeros[i] >=maxNum )
        {//si estoy en el primer indice
            maxNum= numeros[i];
        }
    }
    printf("El numero mayor es %d y esta en la posicion",maxNum);
    for(int i=0; i<TAM; i++)
    {
        if(numeros[i]== maxNum)
        {
            printf("%d ",i+1);
        }
    }
    return 0;
}
