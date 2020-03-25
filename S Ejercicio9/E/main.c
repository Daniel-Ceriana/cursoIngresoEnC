#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float resultado;



    printf("Ingrese un numero ");
    scanf("%f",&num1);

    resultado = num1*1.1;
    printf("El importe con aumento es: %0.2f",resultado);



    return 0;
}
