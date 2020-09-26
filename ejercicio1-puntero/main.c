#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    char o;
    float f;

    float resultado;

    unsigned int direccion;

    printf("el size de A es :%d\n",sizeof(a));
    printf("el size de O es :%d\n",sizeof(o));
    printf("el size de F es :%d\n",sizeof(f));

    direccion = &a;

    printf("La direccion de A es: %p\n",&a);
    printf("La direccion de A es: %p\n",&a);

    printf("La direccion de B es: %p\n",&b);

    return 0;
}
