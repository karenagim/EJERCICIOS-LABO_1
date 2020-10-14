#include <stdio.h>
#include <stdlib.h>

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int factorial (int numero);
int factorialRecursivo(int numero);
int main()
{
    int numero;
    int fact;

   /* printf("Ingrese un numero: ");
    scanf("%d",&numero);
    fact= factorial(numero)*/
    printf("El factorial es %d\n", factorialRecursivo(4) );
    return 0;
}

int factorial (int numero)
{
   int fact=1;

   if( numero < 1)
   {
       fact = -1;
   }
   else
   {
       for(int i=1; i<= numero;i++)
        {
            fact = fact*i;
            //fact * = i;
        }
   }


    return fact;
}


int factorialRecursivo(int n)
{
    int fact;

    if(n==1)
    {
        fact=1;
    }else{
        fact= n* factorialRecursivo(n-1);
    }
    return fact;
}
