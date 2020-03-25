#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese el primer numero ");
    scanf("%d",&num1);

    printf("\nIngrese el segundo numero ");
    scanf("%d",&num2);

    resultado = num1 + num2;
    printf("\nLa suma da como resultado: %d",resultado);



    return 0;
}
