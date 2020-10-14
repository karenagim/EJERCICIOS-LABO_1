#include <stdio.h>
#include <stdlib.h>

/*1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”*/

int main()
{

    int num1;
    int num2;

    int resultado;
    float promedio;

    printf("ingrese un numero: ");
    scanf("%d", &num1);

    printf("ingrese otro numero: ");
    scanf("%d", &num2);

    resultado = (float)(num1 + num2)/2 ;
    ///resultado = (num1 + num2)/2. ; otra solucion no elegante

    printf("el promedio es : %.2f", promedio );

    return 0;

}








/*
void menu ()
{
    printf(" ----------------------/n");
    printf(" **** CALCULADORA **** /n");
    printf(" ----------------------/n");
    printf("1. Ingresar 1er operando (A=x) /n");
    printf("1. Ingresar 2do operando (B=y) /n");
}*/
