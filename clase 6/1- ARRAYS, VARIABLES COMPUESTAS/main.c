#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numeros[5] ={21,45,32,46,78};

    //CARGA SECUENCIAL

   /* for(int i=0; i<5 ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeros[i]); //en cada iteracion cambio la pos de memoria
    }

    //lectura secuencial
    for(int i=0; i<5 ; i++)
    {
        printf("%d ",numeros[i]);
    }
    printf("\n\n");
*/
    ///REVERSA
    for(int i=4; i>=0 ; i--)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeros[i]); //en cada iteracion cambio la pos de memoria
    }

    //lectura secuencial
    for(int i=4; i>=0 ; i--)
    {
        printf("%d ",numeros[i]);
    }
    printf("\n\n");
    return 0;

}
