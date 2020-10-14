#include <stdio.h>
#include <stdlib.h>

/** \brief
 *
 * \param param1 int primer valor a sumar
 * \param param2 int segundo valor a sumar
 * \return int la suma de los parametros

 *
 */
int sumar(int param1, int param2);
int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese un numero\n");
    scanf("%d",&num1);

    printf("Ingrese un numero\n");
    scanf("%d",&num2);

    resultado= num1+num2;
    print("El resultado de la suma es %d ",resultado);
    return 0;
}

int sumar(int param1, int param2)
{

    return param1+ param2;
}
